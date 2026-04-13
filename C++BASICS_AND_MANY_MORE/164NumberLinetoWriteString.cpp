#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
    int sum = 0;
    int lines = 1;
    for(int i = 0; i < s.size(); i++){
        int w = widths[s[i] - 'a'];
        if(sum + w > 100){
            lines++;
            sum = w;
        } else {
            sum += w;
        }
    }
    return{lines, sum};
}
};

int main(){
    vector<int>widths={4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    string s="bbbcccdddaaa";
    Solution sol;
    vector<int>ans=sol.numberOfLines(widths,s);
    cout<<ans[0]<<endl;
    cout<<ans[1];
}