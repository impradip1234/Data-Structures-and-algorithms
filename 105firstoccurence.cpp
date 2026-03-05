#include <iostream>
using namespace std;

// function for first occurence
int FirstOccurence(int arr[7], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            // search in left
            // start = 0;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            // search in left

            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int arr[7] = {2, 3, 4, 4, 5, 5, 7};
    int n = sizeof(arr) / sizeof(int);
    int key = 4;

    // searching like binary with little difference
    int ans = FirstOccurence(arr, n, key);

    cout << "first occurence is at index: " << ans;
    return 0;
}