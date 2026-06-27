#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int rob(vector<int>nums,int i){
        //base case
        if(i>=nums.size()) return 0;
         
        //one case solution 
        int rob1=nums[i]+rob(nums,i+2);
        int rob2=0+rob(nums,i+1);
        return max(rob1,rob2);
    }
};

int main(){
    vector<int>nums={2,7,9,3,7};
    Solution sol;
    int i=0;
    int ans=sol.rob(nums,i);
    cout<<ans<<endl;
}