#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
            //a=a-b;
        }
        else{
            b=b%a;
            //b=b-a;
        }
    }
    return a==0 ? b : a;
}

int main(){
    int a=25;
    int b=10;
    //as we know (gcd* lcm)=a*b --> lcm=(a*b)/gcd;
    int GCD=gcd(a,b);
    cout<<GCD<<endl;
    int lcm=(a*b)/GCD;
    cout<<"lcm of the given number is :"<<lcm<<endl;
}