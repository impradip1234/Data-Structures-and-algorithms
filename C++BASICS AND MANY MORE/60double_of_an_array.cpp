#include<iostream>
using namespace std;
int main(){
    int arrA[10];
    int arrB[10];

    cout<<"enter the elements of the array:";
    for (int i=0;i<10;i++){
        cin>>arrA[i];
    }

    cout<<"the element entered are:"<<endl;
    for(int i=0;i<10;i++){
        cout<<2*arrA[i]<<" ";
    }
}