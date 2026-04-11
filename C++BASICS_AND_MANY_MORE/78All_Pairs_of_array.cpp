#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}