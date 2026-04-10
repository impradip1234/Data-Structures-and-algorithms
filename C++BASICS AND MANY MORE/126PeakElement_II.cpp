#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//optimized solution .......
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        int low = 0;
        int high = col - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            // find max element in this column
            int maxRow = 0;
            for(int i = 0; i < row; i++){
                if(mat[i][mid] > mat[maxRow][mid]){
                    maxRow = i;
                }
            }

            int left  = (mid > 0) ? mat[maxRow][mid-1] : -1;
            int right = (mid < col-1) ? mat[maxRow][mid+1] : -1;

            // peak found
            if(mat[maxRow][mid] > left && mat[maxRow][mid] > right){
                return {maxRow, mid};
            }
            // move right
            else if(mat[maxRow][mid] < right){
                low = mid + 1;
            }
            // move left
            else{
                high = mid - 1;
            }
        }

        return {-1, -1};
    }
};

int main(){
    vector<vector<int>> mat = {
        
        {10,20,15,},
        {21,30,14,},
        {7,16,32,}
        
    };

    int row = mat.size();
    int col = mat[0].size();
    //optimized approach......
    Solution ans;
    vector<int>result=ans.findPeakGrid(mat);
    for(int i=0;i<2;i++){
        cout<<result[i]<<" ";
    }

    // brute force for finding peak element....... 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){

            int up    = (i > 0) ? mat[i-1][j] : INT_MIN;
            int down  = (i < row-1) ? mat[i+1][j] : INT_MIN;
            int left  = (j > 0) ? mat[i][j-1] : INT_MIN;
            int right = (j < col-1) ? mat[i][j+1] : INT_MIN;

            if(mat[i][j] > up && mat[i][j] > down &&
               mat[i][j] > left && mat[i][j] > right){

                cout <<"This is using brute force approach : "<< "row: " << i << " and col: " << j<<" and the element is : "<<mat[i][j]<<endl;
                return 0;
            }
        }
    }
}

