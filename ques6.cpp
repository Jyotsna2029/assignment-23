#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of coins: ";
    cin>>n;

    int low = 0;
    int high = n;
    bool flag = false;
    while(low <=high){
        int k = low+(high-low)/2;
        if((k*(k+1))/2 == n){
            flag = true;
            cout<<"number of rows are: "<<k;
        }
        else if((k*(k+1))/2 > n) high = k-1;
        else low = k+1;
    }
    if(flag == false){
        cout<<"number of rows are: "<<high;
    }
}