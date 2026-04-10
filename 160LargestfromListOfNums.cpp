#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    class Solution {
public:
    static bool comparator(string a, string b){
        string str1=a+b;
        string str2=b+a;
        return str1>str2 ? true : false;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>snums;
        string largest="";
        for(auto n: nums){
            snums.push_back(to_string(n));
        }
        sort(snums.begin(),snums.end(),comparator);
        if(snums[0]=="0") return "0";
        for(int i=0;i<snums.size();i++){
            largest+=snums[i];
        }
        return largest;
    }
};

int main(){
    vector<int>nums={3,30,34,5,9};
    Solution sol;
    string largestNum=sol.largestNumber(nums);
    cout<<largestNum;
    
}