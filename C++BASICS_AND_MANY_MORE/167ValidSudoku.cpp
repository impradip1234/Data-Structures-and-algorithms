#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
using namespace std;

//method: 01
// class Solution {
// public:

//     bool validBox(vector<vector<char>>& board,int sr,int er,int sc,int ec){
//         unordered_set<char>st;
//         for(int i=sr;i<er;i++){
//             for(int j=sc;j<ec;j++){
//                 if(board[i][j]=='.') continue;
//                 if(st.find(board[i][j]) != st.end()){
//                     return false;
//                 }
//                 else{
//                     st.insert(board[i][j]);
//                 }
//             }

//         }
//         return true;
//     }

//     bool isValidSudoku(vector<vector<char>>& board) {
        
//         //validate rows...
//         for(int rows=0;rows<9;rows++){
//            unordered_set<char>num;
//             for(int cols=0;cols<9;cols++){
//                 if(board[rows][cols]=='.') continue;
//                 if(num.find(board[rows][cols])!=num.end()){
//                     return false;
//                 }
//                 else{
//                     num.insert(board[rows][cols]);
//                 }
//             }
//         }
//         //validate cols....
//         for(int cols=0;cols<9;cols++){
//            unordered_set<char>num;
//             for(int rows=0;rows<9;rows++){
//                 if(board[rows][cols]=='.') continue;
//                 if(num.find(board[rows][cols])!=num.end()){
//                     return false;
//                 }
//                 else{
//                     num.insert(board[rows][cols]);
//                 }
//             }
//         }

//         //validate small boxes...3 * 3(box)
//         for(int sr=0;sr<9;sr+=3){
//             int er=sr+3;
//             for(int sc=0;sc<9;sc+=3){
//                 int ec=sc+3;
//                 if(!validBox(board,sr,er,sc,ec)){
//                     return false;
//                 }

//             }
//         }
//         return true;
//     }
// };

//method: 02
class Solution{
    public:
    bool isValidSudoku(vector<vector<char>>& board){
        unordered_set<string> st;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;

                string row=string(1,board[i][j]) +"_ROW_" + to_string(i);
                string col=string(1,board[i][j]) +"_COL_"+ to_string(j);
                string box=string(1,board[i][j]) +"_BOX_" + to_string(i/3)+"_"+to_string(j/3);
                if(st.find(row)!=st.end() || st.find(col)!=st.end() || st.find(box) != st.end()){
                    return false;
                }
                else{
                    st.insert(row);
                    st.insert(col);
                    st.insert(box);
                }
            }
        }
        return true;
    }
};

int main(){
    vector<vector<char>> board = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
};
    Solution sol;
    bool ans=sol.isValidSudoku(board);
    cout<<ans;
}