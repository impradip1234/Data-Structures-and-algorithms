#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the side of the triangel: ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"valid triangle sides.";
    }
    else{
        cout<<"sides are not valid for triangle."<<endl;
    }
}