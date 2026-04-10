#include<iostream>
#include<vector>
using namespace std;

int pivot_finder(vector<int>& arr,int n){

    int start = 0;
    int end = n - 1;

    while(start < end){

        int mid = start + (end - start)/2;

        if(start==end){
            return start;
        }

        if(mid < end && arr[mid] > arr[mid+1]){
            return mid;
        }

        if(mid > start && arr[mid-1] > arr[mid]){
            return mid-1;
        }

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return start;
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    int n=arr.size();
    int pivot=pivot_finder(arr,n);
    cout<<"pivot of the given vector is : "<<arr[pivot];
}