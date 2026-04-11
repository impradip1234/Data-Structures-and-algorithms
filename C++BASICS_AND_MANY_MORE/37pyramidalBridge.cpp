// first of all code for pyramid...

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     for(int r=0;r<n;r++){
//         for(int c=0;c<n-1-r;c++){
//             cout<<"  ";
//         }
//         for(int c=0;c<r*2+1;c++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//codr for pyramidal bridge

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int r=0;r<n;r++){
        for(int c=0;c<n-1-r;c++){
            cout<<"  ";
        }
        for(int c=0;c<r*2+1;c++){
            if(c==0){
                cout<<"* ";
            }
            else if(c==2*r){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}