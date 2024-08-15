// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == mid+1){
            low = mid+1;
        }
        else if(arr[mid] == mid){
            if(arr[mid-1]==arr[mid]){
                cout<<arr[mid];
                break;
            }
            else{
                high = mid-1;
            }
        }
    }
}