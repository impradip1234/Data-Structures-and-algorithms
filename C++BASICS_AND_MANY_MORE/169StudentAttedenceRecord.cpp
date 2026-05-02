#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s="PAAPLLAPPLLL";
    int absent=0;
    int count=0;
    int consu_late=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            absent++;
        }
        if(s[i]=='L'){
            count++;
            consu_late=max(consu_late,count);
        }
        else{
            count=0;
        }
        
    }
    cout<<absent<<endl;
    cout<<consu_late;
}