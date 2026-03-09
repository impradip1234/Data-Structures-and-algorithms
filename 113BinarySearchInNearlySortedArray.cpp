#include<iostream>
using namespace std;
//element can be at its consecutive sides also ;
int nearlysortedBinarySearch(int arr[],int n,int key){
     int start=0;
     int end=n-1;
     while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==key) return mid;
        if(arr[mid-1]==key) return mid-1;
        if(arr[mid+1]==key) return mid+1;

        if(arr[mid]<key){
            start=mid+2;
        }
        if(arr[mid]>key){
            end=mid-2;
        }
}
 return -1;
}

int main(){
    int arr[7]={3,10,20,40,50,70,80};
    int n=sizeof(arr)/sizeof(int);
    int key=70;
    int ans=nearlysortedBinarySearch(arr,n,key);
    cout<<ans;
}