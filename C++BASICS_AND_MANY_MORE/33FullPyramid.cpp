#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows :";
    cin>>n;

    for(int r=1;r<=n;r++){
        int k=0;
        for(int c=1;c<=2*n-1;c++){
            if(c<=n-r){
                cout<<"   ";
            }
            else if(k<2*r-1){
                cout<<"*  ";
                k++;
            }
            else{
                cout<<"   ";
            }
            }
            cout<<endl;
    }
}


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number of rows :";
//     cin>>n;

//     for(int r=1;r<=n;r++){
//         int k=0;
//         for(int c=1;c<=n-r;c++){
//             cout<<"   ";
//             }
//         for(int c=1;c<=2*r-1;c++){
//             cout<<"*  ";
//         }
//             cout<<endl;
//     }
// }