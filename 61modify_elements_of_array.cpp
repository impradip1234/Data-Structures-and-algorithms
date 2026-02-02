#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    for (int i=0;i<5;i++){
        arr[i]=1;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}