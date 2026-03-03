#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()) return {};
        
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        
        int total_element = m * n;
        int startingcol = 0;
        int endingcol = n - 1;
        int startingrow = 0;
        int endingrow = m - 1;
        int count = 0;

        while(count < total_element) {
            for(int i = startingcol; i <= endingcol && count < total_element; i++) {
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;

            for(int i = startingrow; i <= endingrow && count < total_element; i++) {
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;

            for(int i = endingcol; i >= startingcol && count < total_element; i--) {
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;

            for(int i = endingrow; i >= startingrow && count < total_element; i--) {
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;
        }

        return ans;
    }
};

int main(){
    vector<vector<int>>matrix={{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31,32,33,34,35}};
    Solution sol;
    vector<int>solution=sol.spiralOrder(matrix);
    for(int i=0;i<solution.size();i++){
        cout<<solution[i]<<" ";
    }
    return 0;
}