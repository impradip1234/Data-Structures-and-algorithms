#include<iostream>
using namespace std;
int main(){
    int arr[20]={0,1,0,0,0,0,0,1,1,1,0,0,0,1,0,0,0,1,0,1};
    int size=20;
    int count_zeros=0;
    int count_ones=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count_zeros++;
        }
        if(arr[i]==1){
            count_ones++;
        }
    }
    cout<<"number of zeros: "<<count_zeros<<endl;
    cout<<"number of ones: "<<count_ones<<endl;
}