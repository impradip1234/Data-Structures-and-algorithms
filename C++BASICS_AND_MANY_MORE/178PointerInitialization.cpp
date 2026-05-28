#include<iostream>
using namespace std;
int main(){
    int a=120;
    int* ptr=&a;
    cout<<"value at a: "<<a<<endl;
    cout<<"value stored in ptr: "<<ptr<<endl;
    cout<<"value address of a: "<<&a<<endl;
    cout<<"value at the address stored in ptr: "<<*ptr<<endl;
    cout<<"value address of ptr: "<<&ptr<<endl;
}