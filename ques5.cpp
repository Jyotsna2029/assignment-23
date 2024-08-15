#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int low = 0;
    int high = num;
    bool flag = false;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        long long m = (long long)mid;
        long long y = (long long)num;
        if(m*m == y) 
        {
            flag = true;
            cout<<flag;
            break;
        }
        else if(m*m >y) high = mid-1;
        else low = mid+1;
    }
    if(flag == false){
        cout<<flag;
    }
}