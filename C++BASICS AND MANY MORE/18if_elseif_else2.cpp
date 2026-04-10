// check whether the entered number is positive , negative or zero

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;

    if(number==0){
        cout<<"oh! It's a zero."<<endl;
    }
    else if(number>0){
        cout<<"Oh! It's a positive number."<<endl;
    }
    else{
        cout<<"oh! It's a negative number."<<endl;
    }
    return 0;
}