#include<iostream>
using namespace std;

int findsqrt(int n){
    int start=0;
    int end=n;
    int ans=-1;
    while(start<end){
        int mid=(start+end)/2;
        if((mid*mid)==n){
            ans=mid;
            return ans;
        }
        else if((mid*mid)<n){
            ans=mid;
            start=mid+1;
        }
        else if((mid*mid)>n){
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number for which , needs to find the square root: ";
    cin>>n;
    int squareroot=findsqrt(n);
    cout<<"square of the given element is: "<<squareroot<<endl;
}