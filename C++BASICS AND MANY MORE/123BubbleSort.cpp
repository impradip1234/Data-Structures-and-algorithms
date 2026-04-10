#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,9,1,0,3,8};
    int n=6;
    while(n>0){
        for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        }
        n--;
        }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"  ";
    }
}