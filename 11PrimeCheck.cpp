#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime=true;
    cout<<"enter the number: ";
    cin>>n;
    if (n<=1){
        isPrime=false;
    }
    else{
        for(int i=2;i<=n/2; i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
            else{
                isPrime=true;
            }
        }
    }
    if(isPrime){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"not Prime"<<endl;
    }
}