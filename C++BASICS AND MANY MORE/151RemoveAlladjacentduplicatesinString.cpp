#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(ans.length()>0){
                 if(ans[ans.length()-1]==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

int main(){
    string s="ababbcbbc";
    Solution sol;
    string ans;
    ans=sol.removeDuplicates(s);
    cout<<ans;
}