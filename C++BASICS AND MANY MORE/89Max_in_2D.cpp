// #include<iostream>
// using namespace std;
// int main(){
//     int max=INT16_MIN;
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             if(arr[i][j]>max){
//                max=arr[i][j];
//             }
//         }
//     }
//     cout<<"maximum of  the given elements is: "<<max<<endl;
// }

// using function 
#include<iostream>
using namespace std;

int find_max(int arr[3][4], int rows,int cols){
    int max=INT16_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]>max){
               max=arr[i][j];
            }
        }
    }
    return max;
}
int main(){
    int rows=3;
    int cols=4;
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<find_max(arr,rows,cols)<<endl;
    
}