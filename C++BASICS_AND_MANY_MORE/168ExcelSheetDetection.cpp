#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber>0){
            columnNumber--;
            int c=columnNumber%26;
            ans=ans+char(c+'A');
            columnNumber=columnNumber/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    int ColumnNumber=701;
    Solution sol;
    string ans=sol.convertToTitle(ColumnNumber);
    cout<<ans;
}