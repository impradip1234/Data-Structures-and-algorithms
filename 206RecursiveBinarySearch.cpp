#include<iostream>
using namespace std;
bool binosearch(int arr[5],int& target,int& n,int& start,int& end){
    //base case
    if(start>end){
        return false;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==target) return true;
    if(target<arr[mid]){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    return binosearch(arr,target,n,start,end);

}
int main(){
    int arr[5]={44,54,80,92,99};
    int target=99;
    int n=5;
    int start=0;
    int end=5-1;
    int ans=binosearch(arr,target,n,start, end);
    cout<<ans;
}