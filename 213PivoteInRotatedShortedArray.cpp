#include<iostream>
#include<vector>
using namespace std;

int PivoteFinder(vector<int>arr){
    int n=arr.size();
    int left=0;
    int right=n-1;
    while(left<right){
        int mid=left+(right-left)/2;
        if(arr[mid]>arr[right]){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    return left;
}
int main(){
    vector<int>arr={5,6,7,8,9,1,2,3,4};
    int n=0;
    int index=PivoteFinder(arr);
    cout<<"the pivote is : "<<arr[index];
}