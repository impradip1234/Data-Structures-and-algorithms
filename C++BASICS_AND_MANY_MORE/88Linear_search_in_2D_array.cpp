#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int key;
    cout<<"enter key:";
    cin>>key;
    // linear search 
    int rows=3;
    int cols=4;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                cout<<"index of row:"<<i<<"index of col:"<<j;
                return 0;
            }
        }

    }
    cout<<"element not found"<<endl;
}

//using function named linear_search

// #include<iostream>
// using namespace std;

// bool linear_search(int arr[3][4],int rows,int cols,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//            if(arr[i][j]==key){
//             return true;
//            }
//         }
// }
// return false;
// }

// int main(){
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int key;
//     cout<<"enter key:";
//     cin>>key;
//     // linear search
//     int rows=3;
//     int cols=4;
//     cout<<
//     linear_search(arr,rows,cols,key)<<endl;
// }