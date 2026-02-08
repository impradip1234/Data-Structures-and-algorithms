//method :1

// #include<iostream>
// using namespace std;
// bool found(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[10]={2,3,4,5,6,9};
//     int size=6;
//     int key;
//     cout<<"Enter the key : ";
//     cin>>key;
//     if(found(arr,size, key)){
//         cout<<"element found"<<endl;
//     }
//     else{
//         cout<<"element not found."<<endl;
//     }
// }

//method : 2

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10]={2,3,4,5,6,9};
//     bool flag=0;
// //flag=0 --> element not present
// //flag!=0 --> element is present
//     int size=6;
//     int key;
//     cout<<"Enter the key : ";
//     cin>>key;
//     for(int i=0;i<size;i++){
//         if(arr[i]==key)
//         flag=1;
//         break;
//     }
//     if(flag){
//     cout<<"Element is present"<<endl;
//     }
//     else{
//         cout<<"Element is not present"<<endl;
//     }
// }

#include<iostream>
using namespace std;
int linear_search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10]={2,3,4,5,6,9};
    int size=6;
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    bool ans=linear_search(arr,size,key);
    if(ans==true){
        cout<<"Element found."<<endl;
    }
    else{
        cout<<"Element not found."<<endl;
    }
}