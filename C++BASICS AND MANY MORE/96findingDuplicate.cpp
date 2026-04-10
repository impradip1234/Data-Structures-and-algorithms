#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //     for (int i = 0; i < nums.size() - 1; i++) {
    //         if (nums[i] == nums[i + 1]) {
    //             return nums[i];
    //         }
    //     }
    //     return -1;
    // }

    while(nums[0]!=nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
}
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int duplicate = obj.findDuplicate(nums);

    if (duplicate != -1)
        cout << "Duplicate element is: " << duplicate;
    else
        cout << "No duplicate found";


    return 0;
}