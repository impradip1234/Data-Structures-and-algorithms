#include<iostream>
#include<cstring>
using namespace std;

bool ispalindrom(char ch[100]){
    int n=strlen(ch);
    int start=0;
    int end=n-1;
    
    while(start<=end){
        if(ch[start]==ch[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    bool ans=ispalindrom(ch);
    cout<<ans;
}