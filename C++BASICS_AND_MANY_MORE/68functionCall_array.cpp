#include<iostream>
using namespace std;
// auto matically it is passed by reference because int *arr is passed but writen as int arr[]
int print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int increment(int arr[], int size){
    arr[4]=arr[4]+50;
    print(arr,size);
}
int main(){
    int size=7;
    int arr[10]={2,4,1,5,6,8,9};
    increment(arr, size);
    print(arr,size);
}