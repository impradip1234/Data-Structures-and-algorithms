#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

int BinarySearch(vector<int>arr,int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==key) return mid;

        else if(arr[mid]>key){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr={3,4,5,6,7,11,13,15,56,70,73,72,79,83,89};
    int size=arr.size();
    int key=72;
    if(arr[0]==key){
        return 0;
    }
    int i=1;

    while(i<size && arr[i]<=key){
        i=i*2;
    }
    int start=i/2;
    int end=min(i,size-1);
    int ans=BinarySearch(arr,start,end,key);
    cout<<ans;

}