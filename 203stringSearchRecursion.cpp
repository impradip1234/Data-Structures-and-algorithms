#include<iostream>
using namespace std;

int findchar(string &str,char ch,int n){
    //base case 
    if(n==0) return -1;
    if(n!=0 && ch==str[n-1]){
        return n-1;
    }
    return findchar(str,ch, n-1);
}
int main(){
    string str="pradipyadav";
    int n=str.size();
    char ch='p';
    int ans=findchar(str,ch,n);
    cout<<ans<<endl;
}