#include<iostream>
using namespace std;
int update(int &a){
    a++;// here the a is pointing to the same variable a ..... so the value is updated directly to a and becomer 56.
}
int update2(int*& p){
    *p=*p+1;
}
int main(){
    int a=55;
    // update(a);
    int *p=&a;
    update2(p);
    cout<<a<<endl;
}