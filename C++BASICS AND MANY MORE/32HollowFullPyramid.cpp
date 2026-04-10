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
                if(k==0 || k==2*i || i==n-1){
                    cout<<"*  ";
                }
                else{
                    cout<<"   ";
                }

                k++;
            }
        }
        cout << endl;
    }
}