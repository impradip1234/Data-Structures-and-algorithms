#include<iostream>
using namespace std;
void update(int** ptr){
    **ptr=**ptr+1;
}
int main(){
    int a=5;
    int *ptr1=&a;
    int**ptr2=&ptr1;

    cout<<"befor update function: "<<"value of x = "<<a<<endl;
    
    update(ptr2);

    cout<<"befor update function: "<<"value of x = "<<a<<endl;

}