#include<iostream>
using namespace std;
//using extra space means using another 2d array
// int main(){
//     int arr[4][4]={{1,2,3,4},{5,6,7,8,},{9,10,11,12},{13,14,15,16}};
//     int n=4;
//     int arr2[4][4];

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             arr2[j][(n-1)-i]=arr[i][j];
//         }
//     }
//      for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr2[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// without use of any extra space 
//1.transpose 
//2.reverse each row 
// int main(){
//     int arr[4][4]={{1,2,3,4},{5,6,7,8,},{9,10,11,12},{13,14,15,16}};
//     int n=4;
//     int arr2[4][4];

//     //1.transpose
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i>j){
//           swap(arr[i][j],arr[j][i]);
//             }
            
//         }
//     }
//     //2. reversing each row
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n/2;j++){
//          swap(arr[i][j],arr[i][n-1-j]);
//         }
//     }


//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

//same method 2  but with external functin to do the job
#include<iostream>
using namespace std;

void rotateMatrix(int arr[][4], int n){

    // 1. Transpose the matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i > j){
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    // 2. Reverse each row
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n/2; j++){
            swap(arr[i][j], arr[i][n-1-j]);
        }
    }
}

int main(){

    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int n = 4;

    rotateMatrix(arr, n);   // calling external function

    // Printing matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}