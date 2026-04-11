#include<iostream>
#include<cmath>
using namespace std;

int BinaryToDecimal(int binary){
    int decimal=0;
    int i=0;
    while(binary){

        int digit=binary%10;
        decimal=decimal+digit*pow(2,i++);
        binary/=10;
    }
    return decimal;
}

int main(){
    int binary;
    cout<<"enter the binary number: ";
    cin>>binary;
    cout<<BinaryToDecimal(binary);
}