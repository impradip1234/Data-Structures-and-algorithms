#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number of rows :";
//     cin>>n;

//     for(int r=0;r<n;r++){
//         for(int c=0;c<r;c++){
//             cout<<"   ";
//         }
//         for(int c=0;c<(2*n)-1-(2*r);c++){
//             cout<<"*  ";
//         }
//        cout<<endl;
//     }
// }


int main(){
    int n;
    cout<<"enter the number of rows :";
    cin>>n;

    for(int r=0;r<n;r++){
        for(int c=0;c<r;c++){
            cout<<"  ";
        }
        for(int c=0;c<n-r;c++){
            cout<<"*   ";
        }
       cout<<endl;
    }
}