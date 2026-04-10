#include<iostream>
using namespace std;

class Solution {
public:
    int valueforI(string s, string romanSymbols[], int j){
        int n = 7;
        for(int i = 0; i < n; i++){
            if(s[j] == romanSymbols[i][0]){
                return i;
            }
        }
        return -1;
    }

    int romanToInt(string s) {
        string romanSymbols[] = {"M", "D", "C","L","X", "V", "I"};
        int values[] = {1000,500,100,50,10,5,1};
        
        int ans = 0;
        
        for(int j = 0; j < s.size() - 1; j++){
            int valueforj = valueforI(s, romanSymbols, j);
            int valueforj1 = valueforI(s, romanSymbols, j + 1);

            if(values[valueforj] >= values[valueforj1]){
                ans += values[valueforj];
            }
            else{
                ans -= values[valueforj];
            }
        }

        ans += values[valueforI(s, romanSymbols, s.size()-1)];

        return ans;
    }
};

//method: 02...>
// class Solution{
//     public:
//     int getValue(char c){
//         switch(c)
//         {
//             case 'I': return 1;
//             case 'V': return 5;
//             case 'X': return 10;
//             case 'L': return 50;
//             case 'C': return 100;
//             case 'D': return 500;
//             case 'M': return 1000;
//             default : return -1;
//         }
//     }
//     int romanToInt(string s){
//         int ans=0;
//         int i=0;
//         while(i<s.size()-1){
//             if(getValue(s[i])>=getValue(s[i+1])){
//                 ans+=getValue(s[i]);
//             }
//             else{
//                 ans-=getValue(s[i]);
//             }
//             i++;

//         }
//         ans+=getValue(s[i]);
//         return ans;
//     }
// };

int main(){
    string s="IV";
    Solution sol;
    int ans=sol.romanToInt(s);
    cout<<ans;

}