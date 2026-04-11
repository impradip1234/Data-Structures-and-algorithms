#include<iostream>
using namespace std;

int main () {
    int number;
    cout<<"Enter the number:";
    cin>>number;

    if(number%2==0){
        cout<<"the entered number is even.";
    }
    else{
        cout<<"the entered number is odd.";
    }
    return 0;

}