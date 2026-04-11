#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<ch;
    cout<<endl;
    
    int n=strlen(ch);
    for(int i=0;i<n;i++){
        if(ch[i]==' '){
            ch[i]='@';
        }
    }
    cout<<ch;
}