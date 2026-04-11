#include <iostream>
#include <climits>
using namespace std;

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;

    int rev = 0;

    while(x!=0){

        int digit = x % 10;
        x=x/10;

        // Overflow check
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
            cout << 0;
            return 0;
        }

        rev = rev * 10 + digit;
    }

    cout << "Reversed number: " << rev;

    return 0;
}