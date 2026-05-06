#include<iostream>
using namespace std;
int main(){
    int x=1;
    int y=2;
    int xr= x^y;
    int count=0;
    for(int i=0;i<32;i++){
        if((xr>>i)&1==1){
            count++;
        }
    }
    cout<<count;
}