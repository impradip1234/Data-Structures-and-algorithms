#include<iostream>
using namespace std;
void print(int arr[10], int n,int i){
    //base case 
    if(n<=i) return;
    cout<<arr[i]<<endl;
    print(arr,n,i+1);
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //printing array's elements recursively.........
    int n=10;
    int i=0;
    print(arr,n,i);
}

//OR

// void print(int arr[10], int n){
//     //base case 
//     if(n==0) return;
//     cout<<arr[0]<<endl;
//     print(arr+1,n-1);
// }
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     //printing array's elements recursively.........
//     int n=10;
//     int i=0;
//     print(arr,n);
// }