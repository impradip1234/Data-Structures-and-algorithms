#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
//largest number---> using linearsearch
int max_num(int arr[],int sizeof_arr){
    int ans = arr[0];
    for(int i=1;i<sizeof_arr;i++){
        ans = max(ans,arr[i]);
    }
    return ans;
}

int main(){
//test case 1: 
    int arr[4]={3,6,7,11};
    int h=8;

//test case 2:
    // int arr[5]={30,11,23,4,20};
    // int h=5;
    int sizeof_arr=sizeof(arr)/sizeof(int);
    int maxof_arr=max_num(arr,sizeof_arr);
    
    // for finding the min value of k.....
    
    // for(int k=1;k<=maxof_arr;k++){
    //     int sum=0;
    //     for(int i=0;i<sizeof_arr;i++){
    //         sum=sum+ceil((double)arr[i]/k);
    //     }
    //     if(sum<=h){
    //         cout<<k;
    //         break;
    //     }
    // }
int start=1;
int end=maxof_arr;

     while(start<=end){
        int mid=start+(end-start)/2;
        int sum=0;
        for(int i=0;i<sizeof_arr;i++){
            sum=sum+ceil((double)arr[i]/mid);
        }
        if(sum<=h){
            end=mid-1;
        }
        if(sum>h){
            start=mid+1;
        }
    }
    cout<<start;
}