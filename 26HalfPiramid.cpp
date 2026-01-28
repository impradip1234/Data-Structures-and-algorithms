#include<iostream>
using namespace std;
//method : 1
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"*  ";
//         }
//         cout<<endl;
//     }
// }

//method : 2
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==j || i>j){
                cout<<"*  ";
            }
            if(i<j){
               cout<<"   ";
            }
        }
        cout<<endl;
    }
}