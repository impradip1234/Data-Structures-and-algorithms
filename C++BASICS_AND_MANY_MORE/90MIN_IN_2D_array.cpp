#include<iostream>
using namespace std;
int main(){
    int min=__INT16_MAX__;
    int arr[3][4]={{7,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]<min){
               min=arr[i][j];
            }
        }
    }
    cout<<"maximum of  the given elements is: "<<min<<endl;
}

// using function 
// #include<iostream>
// using namespace std;

// int find_min(int arr[3][4], int rows,int cols){
//     int min=INT16_MAX;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             if(arr[i][j]<min){
//                min=arr[i][j];
//             }
//         }
//     }
//     return min;
// }
// int main(){
//     int rows=3;
//     int cols=4;
//     int arr[3][4]={{3,2,3,4},{5,6,7,8},{9,10,11,12}};
//     cout<<find_min(arr,rows,cols)<<endl;
// }