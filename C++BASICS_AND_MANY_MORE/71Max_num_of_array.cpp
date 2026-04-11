#include<iostream>
using namespace std;
int main(){
    int arr[20]={1,2,3,4,5,6,7,8,9,12,21,3,42,46,78,98,34,12,12,34};
    int size=20;
    int max=INT_FAST16_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max num in the given array is: "<<max;
}