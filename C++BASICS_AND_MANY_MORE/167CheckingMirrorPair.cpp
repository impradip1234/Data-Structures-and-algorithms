#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    int reverseDigit(int x) {
        int rev = 0;
        while (x > 0) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(nums[i])) {
                ans = min(ans, i - mp[nums[i]]);
            }

            int rev = reverseDigit(nums[i]);
            mp[rev] = i;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
int main(){
    // vector<int>nums={12,21,45,33,54};   
    vector<int>nums={12,210};

    Solution sol;
    int ans=sol.minMirrorPairDistance(nums);
    cout<<ans;
}