#include<iostream>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] - 'A' + 'a';
            }
        }
        return s;
    }
};

int main(){
    string s="PRADIP";
    Solution sol;
    string ans=sol.toLowerCase(s);
    cout<<ans;
}