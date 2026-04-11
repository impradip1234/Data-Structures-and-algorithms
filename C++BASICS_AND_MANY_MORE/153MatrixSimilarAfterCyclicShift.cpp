#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Solution {
public:
//method 01:
//using extra space in the form of ans matrix......
    // bool areSimilar(vector<vector<int>>& mat, int k) {
    //     int rows = mat.size();
    //     int cols = mat[0].size();
    //     k = k % cols;
    //     vector<vector<int>> ans(rows, vector<int>(cols));
    //     for(int i = 0; i < rows; i++){
    //         for(int j = 0; j < cols; j++){
    //             if(i % 2 == 0){
    //                 ans[i][(j + k) % cols] = mat[i][j];
    //             }
    //             else{
    //                 ans[i][(j - k + cols) % cols] = mat[i][j];
    //             }
    //         }
    //     }
    //     for(int i = 0; i < rows; i++){
    //         for(int j = 0; j < cols; j++){
    //             if(ans[i][j] != mat[i][j]){
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
//method 02:
// without using any extra space ..........
     bool areSimilar(vector<vector<int>>& mat, int k) {
        int rows = mat.size();
        int cols = mat[0].size();
        k = k % cols;
        int future;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(i % 2 == 0){
                    future=(j+k)%cols;
                }
                else{
                    future=(j-k+cols)%cols;
                }

                if(mat[i][j]!=mat[i][future]){
                    return false;
                }
            }
        }
        return true;
     }
};

int main(){
    vector<vector<int>>mat={
        {1,2,1,2},
        {5,5,5,5},
        {6,3,6,3}
    };

    int k=2;
    Solution sol;
    int ans=sol.areSimilar(mat,k);
    cout<<ans;
}