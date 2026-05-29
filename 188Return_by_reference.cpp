#include<iostream>
using namespace std;
int a;       // it must be a global variable and must be return by reference.......
int& update(){
    return a;
}
int main(){
    update()=45;
    cout<<a;
}