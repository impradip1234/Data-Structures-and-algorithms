#include<iostream>
using namespace std;

int main(){
    int age;
   cout<<"Enter you age: ";
   cin>>age;
   if(age>=18){
    cout<<"You are eligible for voting in upcomming election."<<endl;
   }
   else{
    cout<<"You are not eligible for voting in upcomming election."<<endl;
   }
   return 0;

}