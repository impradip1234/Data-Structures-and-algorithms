#include<iostream>
using namespace std;

int main(){
    int number,option;
    // option=1,2,3,4,5;
   // while(option==1,2,3,4,5){
    while(true){
        cout<<"1.Increament"<<endl;
        cout<<"2.Decreamment"<<endl;
        cout<<"3.Increament"<<endl;
        cout<<"4.Decreamment"<<endl;

        cout<<"enter option : ";
        cin>>option;
        if(option==5) break;
        if (option==1){
            cout<<"enter the number to be pre increamented";
            cin>>number;
            cout<<"before:"<<number<<endl;
            cout<<"current:"<<++number<<endl;
            cout<<"after:"<<number<<endl;
        }
        if(option==2){
            cout<<"enter the number to be post increamented";
            cin>>number;
            cout<<"before:"<<number<<endl;
            cout<<"current:"<<number++<<endl;
            cout<<"after:"<<number<<endl;
        }
        if (option==3){
            cout<<"enter the number to be pre decreamented";
            cin>>number;
            cout<<"before:"<<number<<endl;
            cout<<"current:"<<--number<<endl;
            cout<<"after:"<<number<<endl;
        }
        if(option==4){
            cout<<"enter the number to be post decreamented";
            cin>>number;
            cout<<"before:"<<number<<endl;
            cout<<"current:"<<number--<<endl;
            cout<<"after:"<<number<<endl;
        }

    }
}