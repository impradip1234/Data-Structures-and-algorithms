#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool cmp(char first,char second){
    return first>second;
}

int main(){
    string str="abdccssaavvbbcaa";
    sort(str.begin(),str.end(),cmp);
    cout<<str;
}