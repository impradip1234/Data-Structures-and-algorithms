#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos=s.find(part);
        while(pos != string::npos){
            s.erase(pos,part.length());
            pos=s.find(part);
        }
        return s;
    }
};

int main(){
    string s="daabcbaabcbcbda";
    string part="abc";
    Solution sol;
    string ans=sol.removeOccurrences(s,part);
    cout<<ans;
}