// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows(must be even):";
//     cin>>n;
// for upper half of the butterfly

// for the stars at the begining of the upper half

// for(int r=0;r<n;r++){
//     for(int c=0;c<r+1;c++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// for space in between the stars of upper half

// for(int r=0;r<n;r++){
//     for(int c=0;c<2*(n-r)-4;c++){
//         cout<<" ";
//     }
// cout<<endl;
// }

// for stars at end of upper half

// for(int r=0;r<n;r++){
//     for(int c=0;c<r+1;c++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }

// for complete upper half

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number of rows(must be even):";
//     cin >> n;
//     for (int r = 0; r <n-1; r++)
//     {
//         for (int c = 0; c < r + 1; c++)
//         {
//             cout << "*";
//         }
//         for(int c=0;c<2*(n-r)-4;c++){
//             cout<<" ";
//         }
//         for(int c=0;c<r+1;c++){
//             cout<<"*";
//         }
//         cout << endl;
//     }
// }

// for lower half of the butterfly

// for the stars at the starting of the lower half
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
// cout<<"enter the rows:";
// cin>>n;
// for(int r=0;r<n;r++){
//     for(int c=0;c<n-r;c++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }

// for space in between stars of the lower half

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the rows:";
//     cin >> n;
//     for (int r = 0; r < n; r++)
//     {
//         for (int c = 0; c < 2*r-n; c++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// for the stars at the last in the lower half

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
// cout<<"enter the rows:";
// cin>>n;
// for(int r=0;r<n;r++){
//     for(int c=0;c<n-r;c++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }

// code for complet lower half

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the rows:";
//     cin >> n;
//     for (int r = 0; r < n; r++)
//     {
//         for (int c = 0; c < n - r; c++)
//         {
//             cout << "*";
//         }
//         for (int c = 0; c < 2 * r; c++)
//         {
//             cout << "s";
//         }
//         for (int c = 0; c < n - r; c++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }



// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the rows:";
//     cin >> n;
//     for (int r = 0; r < n; r++)
//     {
//         
//         cout << endl;
//     }
// }

//code for complete butterfly

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows (must be even): ";
    cin >> n;

    int half = n / 2;

    // Upper half
    for (int r = 0; r < half; r++)
    {
        // Left stars
        for (int c = 0; c < r + 1; c++)
            cout << "*";

        // Middle spaces
        for (int c = 0; c < 2 * (half - r - 1); c++)
            cout << " ";

        // Right stars
        for (int c = 0; c < r + 1; c++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int r = half - 1; r >= 0; r--)
    {
        // Left stars
        for (int c = 0; c < r + 1; c++)
            cout << "*";

        // Middle spaces
        for (int c = 0; c < 2 * (half - r - 1); c++)
            cout << " ";

        // Right stars
        for (int c = 0; c < r + 1; c++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
