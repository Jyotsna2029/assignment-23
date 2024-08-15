#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{0, 0, 1},{0, 1, 1},{1, 1, 1}};
    int m = 3;
    int n = 3;
    int row = 0;
    int maxOnes = 0;

    for(int i =0 ; i<m; i++)//on every row
    {
        int countOnes = 0;
        int low = 0;
        int high = n-1;
        int firstidx = -1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(arr[i][mid] == 1)
            {
                if(arr[i][mid-1] == 0)
                {
                    firstidx = mid;
                    break;
                }
                else if(arr[i][mid-1] != 1){
                    firstidx = mid;
                    break;
                } 
                else
                {
                    high = mid -1;
                }  
            }
            else if(arr[i][mid]<1)
            {
                low = mid+1;
            }
            else high = mid -1;
        }
        if(firstidx != -1) countOnes = n-firstidx;
        if(maxOnes<countOnes){
            maxOnes = countOnes;
            row = i;
        }
    }
    cout<<row<<" "<<maxOnes;
}