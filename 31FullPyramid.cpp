#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < 2 * n - 1; j++)
        {
            // spaces
            if (j < n - 1 - i)
            {
                cout << "   ";
            }
            //stars
            else if (k < (2 * i) + 1)
            {   
                cout<<"*  ";
                k++;
            }
        }
        cout << endl;
    }
}