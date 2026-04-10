#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Solution {
public:

    int expandAroundIndex(string s,int i,int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }


    int countSubstrings(string s) {
        int count=0;
        int n=s.length();
        for(int i=0; i<n; i++){
            //odd length
            int oddAns=expandAroundIndex(s,i,i);
            count=count+oddAns;
            //even length 
            int evenAns=expandAroundIndex(s,i,i+1);
            count=count+evenAns;
        }
        return count;
    }
};

int main(){
    string s="noon";
    Solution sol;
    int ans=sol.countSubstrings(s);
    cout<<"number of the palindromic substring is : "<<ans;
}