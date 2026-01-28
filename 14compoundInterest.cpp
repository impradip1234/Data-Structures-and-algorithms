#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    float P, R, T;
    float A, CI;

    cout << "Enter Principal amount: ";
    cin >> P;

    cout << "Enter Rate of Interest: ";
    cin >> R;

    cout << "Enter Time (in years): ";
    cin >> T;

    A = P * pow((1 + R / 100), T);

    CI = A - P;

    cout << "Final Amount = " << A << endl;
    cout << "Compound Interest = " << CI << endl;

    return 0;
}
