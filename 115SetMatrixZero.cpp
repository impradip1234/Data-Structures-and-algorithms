#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 0, 8},
        {0, 10, 11, 12},
        {13, 14, 15, 16}};
    int n = sizeof(arr[0]) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                // row zero
                for (int a = 0; a < n; a++)
                {
                    if (arr[a][j] != 0)
                    {
                        arr[a][j] = -1;
                    }
                }
                // col zero
                for (int a = 0; a < n; a++)
                {
                    if (arr[i][a] != 0)
                    {
                        arr[i][a] = -1;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

//leetcode optimized :01
// class Solution{
// public:
//     void setZeroes(vector<vector<int>>& matrix) {

//         int row = matrix.size();
//         int col = matrix[0].size();

//         vector<int>row0(row,0);
//         vector<int>col0(col,0);
//         // int row0[row] = {0};
//         // int col0[col] = {0};

//         for(int i = 0; i < row; i++){
//             for(int j = 0; j < col; j++){
//                 if(matrix[i][j] == 0){
//                     row0[i] = 1;
//                     col0[j] = 1;
//                 }
//             }
//         }

//         for(int i = 0; i < row; i++){
//             for(int j = 0; j < col; j++){
//                 if(row0[i] == 1 || col0[j] == 1){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };

//optmized : 02
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {

//         int row = matrix.size();
//         int col = matrix[0].size();
//         int col0 = 1;

//         for(int i = 0; i < row; i++){

//             if(matrix[i][0] == 0)
//                 col0 = 0;

//             for(int j = 1; j < col; j++){
//                 if(matrix[i][j] == 0){
//                     matrix[i][0] = 0;
//                     matrix[0][j] = 0;
//                 }
//             }
//         }

//         for(int i = row - 1; i >= 0; i--){
//             for(int j = col - 1; j >= 1; j--){
//                 if(matrix[i][0] == 0 || matrix[0][j] == 0){
//                     matrix[i][j] = 0;
//                 }
//             }

//             if(col0 == 0)
//                 matrix[i][0] = 0;
//         }
//     }
// };