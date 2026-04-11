#include <iostream>
#include <climits>
using namespace std;

int main() {
    int x;
    cout << "enter the integer to be reversed ";
    cin >> x;
    int ans = 0;
    bool isNeg = false;
    if (x == INT_MIN) {
        cout << 0;
        return 0;
    }
    if (x < 0) {
        isNeg = true;
        x = -x;
    }
    while (x > 0) {
        int digit = x % 10;
        if (ans > (INT_MAX - digit) / 10) {
            cout << 0;
            return 0;
        }
        ans = ans * 10 + digit;
        x /= 10;
    }
    cout << (isNeg ? -ans : ans);
    return 0;
}