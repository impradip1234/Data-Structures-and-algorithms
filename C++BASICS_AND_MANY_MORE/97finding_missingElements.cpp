#include<iostream>
#include<cmath>
using namespace std;
int findMissing(int arr[], int n){
    for(int i = 0; i < n; i++){
        int index = abs(arr[i]) - 1;
        if(index >= 0 && index < n){
            if(arr[index] > 0){
                arr[index] *= -1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){ 
            cout<<i+1<<" ";
        }
    }
    return n + 1;
}
int main(){
    int arr[] = {1,2,5,5,5};
    int n = sizeof(arr) / sizeof(int);
    findMissing(arr, n);
}