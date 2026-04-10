#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,2,3};
    int arr2[] = {2,7,9};
    int n = 3;
    int arr3[4];
    int carry = 0;
    int k = n;

    for(int i = n-1; i >= 0; i--) {
        int sum = arr1[i] + arr2[i] + carry;
        arr3[k] = sum % 10;
        carry = sum / 10;
        k--;
    }
    arr3[k] = carry;
    if(arr3[0] == 0)
        for(int i=1;i<=n;i++) cout << arr3[i] << " ";
    else
        for(int i=0;i<=n;i++) cout << arr3[i] << " ";

    return 0;
}