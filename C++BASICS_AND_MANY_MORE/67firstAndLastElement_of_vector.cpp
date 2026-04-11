#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vect1{'a','b','c','d','e'};

    //for first element 
    cout<<"first element is: "<<vect1[0]<<endl;
    cout<<"first element is: "<<vect1.front()<<endl;

    //for last element
    cout<<"last element is: "<<vect1[vect1.size()-1]<<endl;
    cout<<"last element is: "<<vect1.back()<<endl; 
}