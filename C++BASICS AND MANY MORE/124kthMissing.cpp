#include<iostream>
using namespace std;
// brute force solution
int findingKthMissingBruteForceApproach(int arr[], int n, int k){

    for(int i=0;i<n;i++){
        if(arr[i] <= k){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}

//optimised solution.....
int findingKthMissingOptimizedApproach(int arr[7],int n,int k){
    //using binary.........
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        int missing = arr[mid] - (mid + 1);

        if(missing < k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return start + k;
    
}

int main(){
    int arr[7]={1,3,4,5,8,9,11};
    int n=7;
    int k=5;
    int ans1=findingKthMissingBruteForceApproach(arr,n,k);
    int ans2=findingKthMissingOptimizedApproach(arr,n,k);
    cout<<"solution by brute force approach : " << ans1;
    cout<<"solution by optimized approach : "<<ans2;
}