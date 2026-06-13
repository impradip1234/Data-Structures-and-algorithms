#include<iostream>
using namespace std;

void digits(int num){
    //base case
    if(num==0) return;
    // recursive call
    digits(num/10);
    //process
    int digit=num%10;
    cout<<digit<<endl;
}
int main(){
    int num=1234;
    cout<<010<<" "<<012<<" "<<020<<endl;
    digits(num);
}