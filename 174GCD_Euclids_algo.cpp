#include<iostream>
using namespace std;

class Solution{
    public:
    int GCD(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        while(a>0 && b>0){
            if(a>b){
                a=a-b;
                //a=a%b;
            }
            else{
                b=b-a;
                // b=b%a;
            }
        }
        return a==0 ? b : a;
    }
};

int main(){
    int a=10;
    int b=20;
    Solution sol;
    int ans=sol.GCD(a,b);
    cout<<ans;
}