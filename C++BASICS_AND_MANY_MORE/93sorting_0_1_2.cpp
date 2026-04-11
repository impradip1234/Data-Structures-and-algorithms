#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0, medium = 0;
    int high = nums.size() - 1;

    while (medium <= high) {
        if (nums[medium] == 0) {
            swap(nums[low], nums[medium]);
            low++;
            medium++;
        }
        else if (nums[medium] == 1) {
            medium++;
        }
        else {
            swap(nums[medium], nums[high]);
            high--;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sortColors(nums);

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
