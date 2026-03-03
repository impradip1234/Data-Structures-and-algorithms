#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
    int BinarySearch(int arr[],int n,int key){
        int start=0;
        int end=n-1;
        while(start<=end){
        int mid=(start+end)/2;
            if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        }
        return -1;
    }

int main(){
    int n=7;
    int arr[7]={1,2,3,4,5,6,7};
    int key=5;
    int targetIndex=BinarySearch(arr,n,key);
    if(targetIndex>=0){
        cout<<"element found at the position : "<<targetIndex;
    }
    else{
        cout<<"element not found.";
    }
//inbuilt function for binary search ............

    // vector<int>v{1,2,3,4,5,6,7};
    // if(binary_search(v.begin(),v.end(),5)){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }
}