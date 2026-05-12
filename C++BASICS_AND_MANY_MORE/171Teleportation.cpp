#include<iostream> 
#include<vector>
using namespace std;

class Solution {
public:
    int minJumps(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int count=0;
        while(i<=n-1){
            if(nums[i]%2==0){
                //jump to index n-2
                count++;
                i=n-2;
            }
            else{
                i++;
                count++;
            }

        }
        return count;
    }
};

int main(){
    vector<int>nums={1,2,5,3,6,7};
    Solution sol;
    int ans=sol.minJumps(nums);
    cout<<ans;
}