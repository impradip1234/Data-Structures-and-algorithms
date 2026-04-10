#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* ptr=&a;
    int* ptr2=ptr;
    cout<<"value in ptr: "<<ptr<<endl;
    cout<<"value in ptr2: "<<ptr2<<endl;
}