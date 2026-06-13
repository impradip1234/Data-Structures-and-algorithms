#include<iostream>
using namespace std;
bool checkAscending(int arr[5], int n){
    if(n==0) return true;
    if(arr[n]<arr[n-1]){
        return false;
    }
    checkAscending(arr,n-1);
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=2;
    int ans=checkAscending(arr,n);
    cout<<ans;
}