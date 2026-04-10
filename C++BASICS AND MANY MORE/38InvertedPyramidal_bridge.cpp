#include<iostream>
using namespace std;
//This if for inverte full pyramid 

// int main(){
//     int n;
//     cout<<"enter the number of rows :";
//     cin>>n;

//     for(int r=0;r<n;r++){
//         for(int c=0;c<r;c++){
//             cout<<"   ";
//         }
//         for(int c=0;c<2*(n-r)-1;c++){
//             cout<<"*  ";
//         }
//         cout<<endl;
//     }
// }

//this is for inverted hollow pramid of inverted pyramidal bridge

int main(){
    int n;
    cout<<"enter the number of rows :";
    cin>>n;

    for(int r=0;r<n;r++){
        for(int c=0;c<r;c++){
            cout<<"   ";
        }
        for(int c=0;c<2*(n-r)-1;c++){
            if(c==0 || c==2*(n-r)-2){
                cout<<"*  ";
            }
            else{
                cout<<"   ";
            }
            
        }
        cout<<endl;
    }
}