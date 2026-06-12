#include<iostream>
using namespace std;
//using recursion function
int countingways(int n){
    //base 
    if(n==1 || n==0) return 1;
    return countingways(n-1)+countingways(n-2);  
}
int main(){
    int n;
    cout<<"enter the number of stairs: ";
    cin>>n;

    int ans=countingways(n);
    cout<<ans;
}