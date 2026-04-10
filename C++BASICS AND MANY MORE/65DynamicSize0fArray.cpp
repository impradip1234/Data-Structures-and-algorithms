#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int *arr=new int [n];
    //input
    for(int i=0;i<n;i++){
        cout<<"enter the element for : "<<i;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}