#include<iostream>
using namespace std;
int main(){
    int sum=9;
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int size=10;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if((arr[i]+arr[j]+arr[k])==sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                }
            }
        }
    }
    
}