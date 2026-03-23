#include<iostream>
#include<cstring>
using namespace std;

void MakeItCapital(char ch[100]){
    int n=strlen(ch);
    int i=0;
    while(n){
        ch[i]=char(int(ch[i])-32);
        i++;
        n--;
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    MakeItCapital(ch);
    // cout<<int('a'); // 97...
    // cout<<int('A'); //  65....

    cout<<ch;

}