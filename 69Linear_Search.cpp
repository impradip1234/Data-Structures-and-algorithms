#include<iostream>
using namespace std;
bool found(int arr[],int size,int key){
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
    if(found(arr,size, key)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found."<<endl;
    }
}
