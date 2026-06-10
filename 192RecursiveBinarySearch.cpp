#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// this is the simple binary code through loops..........
// int binarySearch(vector<int>&arr , int target){
//     int start=0;
//     int end=11;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==target){    
//             return mid;
//         }
//         else if(arr[mid]>target){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>arr{2,4,5,6,7,8,9,22,31,45,65,71};
//     int target = 32;
//     int ans=binarySearch(arr,target);
//     cout<<ans;
    
// }

// this is the recursive code for binary search .......
    int binarySearch(vector<int>&arr , int target,int start, int end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return (start+(end-start)/2);
        }
        else if(arr[mid]>target){
            end=mid-1;
            binarySearch(arr,target,start, end);
        }
        else{
            start=mid+1;
            binarySearch(arr, target, start, end);
        }
    }
int main(){
    vector<int>arr{2,4,5,6,7,8,9,22,31,45,65,71};
    int target = 22;
    int start=0;
    int end=arr.size()-1;
    int ans=binarySearch(arr,target,start,end);
    cout<<ans;
}