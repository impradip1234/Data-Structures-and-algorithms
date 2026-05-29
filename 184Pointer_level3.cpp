#include<iostream>
using namespace std;
int update(int** q){
    **q=**q+1;
}
int main(){
    int a=2;
    int*p=&a;
    int** q=&p;

    cout<<"before"<<a<<endl;

    update(q);

    cout<<"after"<<a<<endl;
}