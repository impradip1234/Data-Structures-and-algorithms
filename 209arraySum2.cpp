//reversed methode for finding the minimum number of digits form the array to make the sum of target.......

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& arr, int target, int sum) {
    if(sum == target)
        return 0;

    if(sum > target)
        return INT_MAX;

    int mini = INT_MAX;

    for(int i = 0; i < arr.size(); i++) {
        int ans = solve(arr, target, sum + arr[i]);

        if(ans != INT_MAX) {
            mini = min(mini, ans + 1);
        }
    }

    return mini;
}

int main() {
    vector<int> arr{1,2};
    int target = 3;

    int ans = solve(arr, target, 0);

    cout << ans;
}