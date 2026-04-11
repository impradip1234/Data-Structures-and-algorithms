#include<iostream>
using namespace std;

int main(){
    int sides;
    cout<<"Enter the no. of sides : ";
    cin>>sides;
    if(sides==3){
        cout<<"Oh! It's a triangle."<<endl;
    }
    else if(sides==4){
        cout<<"Oh! It's a rectange."<<endl;
    }
    else if(sides==5){
        cout<<"Oh! It's a pentagon."<<endl;
    }
    else{
        cout<<"sorry....... It's not a triangle , rectangle or pentagon."<<endl;
    }
}