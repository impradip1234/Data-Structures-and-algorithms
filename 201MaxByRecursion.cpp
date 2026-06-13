#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int maximum(int arr[], int n, int i, int maxi) {
    // Base case
    if (i == n) {
        return maxi;
    }
    // Process current element
    maxi = max(maxi, arr[i]);

    // Recursive call
    return maximum(arr, n, i + 1, maxi);
}
int main() {
    int arr[5] = {1, 2, 3, 5, 4};
    int n = 5;
    int i = 0;
    int maxi = INT_MIN;
    cout << "Maximum element: " << maximum(arr, n, i, maxi);
    return 0;
}