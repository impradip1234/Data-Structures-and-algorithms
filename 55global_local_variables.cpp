#include<iostream>
using namespace std;
int a=12;                    //---->  global variable declared
int main(){
    int a=48;                //---->  declareing local variable 
    cout<<"local variable"<<a<<endl;           //---->  accessing local variable
    cout<<"global variable"<<::a<<endl;         //---->  accesing global variable
}