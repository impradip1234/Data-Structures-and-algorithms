#include<iostream>
using namespace std;
int utility(int* ptr2){
    *ptr2=*ptr2+1;
    // ptr2=ptr2+1;
}
int main(){
    int a=5;
    int* ptr1=&a;

    cout<<"before"<<endl;
    cout<<a<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    
    utility(ptr1);

    cout<<"after"<<endl;
    cout<<a<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
}