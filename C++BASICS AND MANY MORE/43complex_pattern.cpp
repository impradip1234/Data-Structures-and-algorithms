//pattern for printing
// 1 
// 1 2 
// 1   3 
// 1     4 
// 1       5 
// 1         6 
// 1           7 
// 1             8 
// 1 2 3 4 5 6 7 8 9 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c <= r; c++) {

            // first column OR diagonal OR last row
            if (c == 0 || c == r || r == n - 1) {
                cout << c + 1 << " ";
            }
            else {
                cout << "  ";
            }

        }
        cout << endl;
    }

    return 0;
}