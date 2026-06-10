#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0 || n==1) return n;
    else return fibo(n-1)+fibo(n-2);
}
int main(){
    int n=8;//I have to return the 5th term of the fibo series .....
    int ans=fibo(n);
    cout<<ans;
}