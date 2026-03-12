#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int firstOcc(vector<int>& nums,int target){
        int start=0,end=nums.size()-1,ans=-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }

    int lastOcc(vector<int>& nums,int target){
        int start=0,end=nums.size()-1,ans=-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);

        ans[0]=firstOcc(nums,target);
        ans[1]=lastOcc(nums,target);

        return ans;
    }
};

int main(){
    Solution obj;

    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> result = obj.searchRange(nums,target);

    cout<<"First Position: "<<result[0]<<endl;
    cout<<"Last Position: "<<result[1]<<endl;

    return 0;
}