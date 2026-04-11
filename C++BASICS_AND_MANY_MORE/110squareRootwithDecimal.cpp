#include<iostream>
using namespace std;

int findsqrt(int n){
    int start=0;
    int end=n;
    int ans=-1;
    while(start<=end){
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
    int precision;
    cout<<"enter the number for which , needs to find the square root: ";
    cin>>n;
    cout<<"enter the presition digit : ";
    cin>>precision;
    int squareroot=findsqrt(n);
    double exactAns=squareroot;
    double step=0.1;
    for(int i=0;i<precision;i++){
        for(double j=exactAns;j*j<n;j=j+step){
            exactAns=j;
        }
        step=step/10;
    }

    cout<<"square of the given element is: "<<squareroot<<" and exact value is: "<<exactAns<<endl;
}