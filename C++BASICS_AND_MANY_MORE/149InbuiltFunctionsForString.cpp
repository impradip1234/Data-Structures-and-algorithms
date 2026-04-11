#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1="This is for revising the concept of string builtin functions";
    string str2="memorising";
   
    //finding length....
    cout<<str1.length();
    cout<<endl;

    //checking is the string empty....
    cout<<str2.empty();
    cout<<endl;

    //push....
    str1.push_back('P');
    cout<<str1;
    cout<<endl;

    //pop....
    str2.pop_back();
    cout<<str2;
    cout<<endl;

    //taking out substing....
    string str3=str1.substr(0,20);
    cout<<str3;
    cout<<endl;

    //compare......>>> 0 or 1 or -1.....
    cout<<str1.compare(str2);
    cout<<endl;

    //find...... return starting index if found.....
    cout<<str1.find(str3);
    cout<<endl;
    
    //replace ....
    str1.replace(0,5,"hello");
    cout<<str1;
    cout<<endl;
    
    //erase.
    str1.erase(0,5);
    cout<<str1;

}