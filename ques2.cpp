// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0, 0, 0, 1, 1, 1};
    int n = sizeof(arr)/ sizeof(arr[0]); 
    int low = 0;
    int high = n-1;
    bool flag = false;
    int firstoccur = -1;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid] == 1){
            if(arr[mid-1] == 0){
                flag = true;
                firstoccur = mid;
                break;
            }
            else{
                high = mid-1;
            }
        }
        else{ //(arr[mid] == 0)
            low = mid +1;
        }
    }
    if(flag == false)
    {
        cout<<"The element 1 doesn't exist";
    }

    
    // printint the number of occurence
    int count = 0;
    for(int i = firstoccur; i<n; i++){
        count++;
    }
    cout<<"The total number of 1s in array: "<<count;
}