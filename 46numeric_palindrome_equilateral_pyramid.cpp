#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows :";
    cin >> n;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n - 1 - r; c++)
        {
            cout << " ";
        }
        // increasing part
        for (int num = 1; num <= r + 1; num++)
        {
            cout << num;
        }

        // decreasing part
        for (int num = r; num >= 1; num--)
        {
            cout << num;
        }
        cout << endl;
    }
}