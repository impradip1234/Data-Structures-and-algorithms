#include<iostream>
using namespace std;
int main(){
    int a=5;
    int &b=a; // b is a reference variable pointing to same address as a...

    cout<<a<<endl;
    cout<<b<<endl;
    a=a+2;
    b=b+1;

    cout<<a<<endl;
    cout<<b<<endl;
}