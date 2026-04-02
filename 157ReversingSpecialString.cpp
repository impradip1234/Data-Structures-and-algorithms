#include<iostream>
#include<cctype>
using namespace std;

class Solution{
public:
    string reverseOnlyLetters(string s) {
        int n=s.length()-1;
        int start=0;
        int end=n;
        while(start<end){
            if(isalpha(s[start]) && isalpha(s[end])){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(!isalpha(s[start]) && isalpha(s[end])){
                start++;
            }
            else if(isalpha(s[start]) && !isalpha(s[end])){
                end--;
            }
            else{
                start++;
                end--;
            }

            }
        return s;
    }
};

int main(){
    string s="nnnmffa384093oinl?>LNnfnffas>>..,v";
    Solution sol;
    string ans=sol.reverseOnlyLetters(s);
    cout<<ans;
}