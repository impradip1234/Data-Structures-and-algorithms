#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

//solution 1.........Using set 

// int main(){
//     // vector<int>arr={1,3,4,1,5};
//     vector<int>arr={1,2,3,4,5};
//     int n=arr.size();
//     int k=1;
//     set<pair<int,int>>s;
    
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(abs(arr[i]-arr[j])==k){
//                 int a=min(arr[i],arr[j]);
//            int b=max(arr[i],arr[j]);
//            s.insert({a,b});
//             }
//         }
//     }
//     cout<<s.size()<<endl;
// }

//solution 2.... Using 2 pointer approach and sorting 
// int main(){
//     // vector<int>arr={1,2,3,4,5};
//     vector<int>arr={1,3,5,1,4};
//     int n=arr.size();
//     int k=2;
//     int i=0;
//     int j=1;
//     int count=0;
//     set<pair<int,int>>ans;
//     sort(arr.begin(),arr.end());
//     while(i<n && j<n){
//         if(i==j){
//             j++;
//             continue;
//         }
//         if(abs(arr[i]-arr[j])==k){
//             ans.insert({arr[i],arr[j]});
//             i++ ,j++;
//         }
//         else if(abs(arr[i]-arr[j])>k){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
    
// cout<<ans.size();
// }

//solution : 03  ..using binary search to find the (nums[i]-k) in the existing array .........

class Solution {
public:

int binarySearch(vector<int>&nums,int start,int x){
    int end=nums.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==x){
            return mid;
        }
        else if(x>nums[mid]){
            start=mid+1;
        }
        else{ 
            end=mid-1;
        }
    }
    return -1;
}
    
    int findPairs(vector<int>& nums, int k) {
            sort(nums.begin(),nums.end());
    set<pair<int,int>>ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(binarySearch(nums,i+1,nums[i]+k)!=-1){
            ans.insert({nums[i],nums[i]+k});
        }
    }
    return ans.size();
    }
};

int main(){
    // vector<int>nums={1,1,1,1,1,1};
    vector<int>nums={1,3,5,1,4};
    // int k=0;
    int k=2;
    Solution so;
    int ans=so.findPairs(nums,k);
    cout<<ans;
}
