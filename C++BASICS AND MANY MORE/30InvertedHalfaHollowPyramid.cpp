#include<iostream>
using namespace std;

//method :1
// int main(){
//     for(int i=0;i<=4;i++){
//         for(int j=0;j<=4;j++){
//             if(j==0 || i==0){
//                 cout<<"*  ";
//             }
//             else if(j==4-i){
//                 cout<<"*  ";
//             }
//             else{
//                 cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
// }

//method : 2
int main(){
    for (int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || j==1){
                cout<<"*  ";
            }
            else if(i+j==6){
                cout<<"*  ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}