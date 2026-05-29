#include<iostream>
using namespace std;
int update(int a){
    a++;     // this a is another variable not the previous variable.... 
}

int main(){
    int a=45;
    cout<<"before: "<<a<<endl;
    update(a);
    cout<<"after: "<<a<<endl;
}