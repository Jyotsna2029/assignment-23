#include<iostream>
using namespace std; 
int main()
{
    int arr[] = {1,2,3,3,4,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4;
    int low = 0; 
    int high = n-1;
    bool flag = false;
    while(low<=high){   
        int mid = low+ (high-low)/2 ;
        if(arr[mid] == x)
        {
            if(arr[mid+1] != x)
            {
                flag = true;
                cout<<"The last occurence is at: "<<mid;
                break;
            } 
            else{
                low = mid +1;
            } 
        }    
        else if(arr[mid] < x)
        {
            low = mid +1;
        }
        else
        {
            high = mid -1; 
        }  
    }
    if(flag == false)
    {
        cout<<"The element doesn't exist."<<-1;
    }
}
