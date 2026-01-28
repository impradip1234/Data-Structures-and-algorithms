#include<iostream>
using namespace std;

//method : 1
// int main(){
//     for(int i=0;i<=3;i++){
//         for(int j=0;j<=5;j++){
//             if(i==0 || i==3){
//                 cout<<"*  ";
//             }
//             else{
//                 if(j==0 || j==5){
//                     cout<<"*  ";
//                 }
//                 else{
//                     cout<<"   ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//method : 2
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++){
            if(i==1 || i==4){
                cout<<"*  ";
            }
            else if(j==1 || j==6){
                cout<<"*  ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}