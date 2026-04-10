#include<iostream>
using namespace std;

int rotatedBinary(int arr[],int n,int key){
   int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        //left sorted
        if(arr[start]<=arr[mid]){
            if(arr[start]<=key  && key<=arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }

        }
        //right sorted
        else{
            if(arr[mid]<=key && key<=arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

    }
    return -1;
}

int main(){
    int arr[7]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(int);
    int key=1;
    int ans=rotatedBinary(arr,n,key);
    if (ans>=0){
        cout<<arr[ans]<<" Element is found at : "<<ans<<endl;
    }
    else{
        cout<<"Element not found!"<<endl;
    }
}