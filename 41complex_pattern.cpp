//given pattern 
// 1
// 2 * 2
// 3 * 3 * 3
// 4 * 4 * 4 * 4
// 5 * 5 * 5 * 5 * 5
// 6 * 6 * 6 * 6 * 6 * 6
// 7 * 7 * 7 * 7 * 7 * 7 * 7
// 8 * 8 * 8 * 8 * 8 * 8 * 8 * 8
// 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9

// solution code
//approach : 1

#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number of rows :";
//     cin>>n;
//     for (int r=0;r<n;r++){
//         for(int c=0;c<2*r+1;c++){
//             if(c%2==0){
//                 cout<<r+1;
//             }
//             else{
//                cout<<" * " ;
//             }
//         }
//         cout<<endl;
//     }
// }

//approach : 2
int main(){
    int n;
    cout<<"Enter the number of the rows :";
    cin>>n;

    for(int r=0;r<n;r++){
        int totalcol=r+1;
        for (int c=0;c<totalcol;c++)
        if(c==totalcol-1){
            cout<<r+1;
        }
        else{
            cout<<r+1<<"*";
        }
        cout<<endl;
    }

}
