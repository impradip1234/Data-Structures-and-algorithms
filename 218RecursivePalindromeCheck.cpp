#include<iostream>
using namespace std;

bool checkPalindrome(string str,int start,int end){
    //base case
    if(start>=end){
        return true;
    } 
    //once case solution 
    if(str[start]!=str[end]){
        return false;
    }
    //recursive call
    return checkPalindrome(str,start+1,end-1);
}

int main(){
    string str="racer";
    int start=0;
    int end=str.size()-1;
    bool ans=0;
    ans=checkPalindrome(str,start,end);
    cout<<ans;
}