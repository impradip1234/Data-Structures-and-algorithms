#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[100];
    cin>>ch;
    int n=strlen(ch);
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
    cout<<ch;
}