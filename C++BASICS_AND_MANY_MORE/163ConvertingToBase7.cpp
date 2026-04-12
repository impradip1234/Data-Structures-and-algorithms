#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if (num==0) return "0";
        bool isNeg = num < 0 ? true : false;
        string ans="";
        num =abs(num);
        while(num>0){
            int r=num%7;
            ans +=to_string(r);
            num/=7;
        }
        reverse(ans.begin(),ans.end());
        if(isNeg){
            ans = "-" + ans;
        }
        else{
            ans=""+ans;
        }
        return ans;
    }
};

int main(){
    int num=10;
    Solution sol;
    string ans=sol.convertToBase7(num);
    cout<<ans;
}