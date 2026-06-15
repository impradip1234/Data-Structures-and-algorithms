#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int solve(vector<int>& arr,int target){
    //base case 
    if(target==0){
        return 0;
    }
    if(target<0) return INT_MIN;
    
    //let's solve one case 
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        int ans=solve(arr,target-arr[i]);
        if(ans!=INT_MIN){
            maxi = max(maxi,ans+1);
        }
    }
    return maxi;
}

int main(){
    // vector<int>arr{5,2,2};
    vector<int>arr{3,3,3};

    int target=8;
    int ans=solve(arr,target);
    if(ans<0){
        ans=0;
    }
    cout<<ans;
}