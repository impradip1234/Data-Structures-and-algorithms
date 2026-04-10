#include<iostream>
#include<vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int l = 0;
    int h = nums.size() - 1;

    while(l <= h) {

        if(nums[l] < 0) {
            l++;
        }
        else if(nums[h] >= 0) {
            h--;
        }
        else {
            swap(nums[l], nums[h]);
            l++;
            h--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
