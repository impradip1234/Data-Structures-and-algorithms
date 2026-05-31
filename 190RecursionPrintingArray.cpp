#include<iostream>
#include<algorithm>
using namespace std;
int print(int* arr,int n){
    if(n==0) return 0;
    cout<<*arr<<endl;
    print(arr+1,n-1);
}

int main(){
   int arr[]={1,2,3,4,5,6,7,8,9,10};
   int n=10;
   print(arr,n);
}