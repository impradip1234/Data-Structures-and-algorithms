#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> edge = {{0,1},{0,2},{0,3},{1,2},{1,4},{1,5},{2,3},{4,5}};
    int size=6;
    // vector<vector<int>> arr ={{1,2,3},{2,4,5},{3},{},{5},{}};
    vector<vector<int>> arr(size);
    for(int i=0;i<edge.size();i++){
        arr[edge[i][0]].push_back(edge[i][1]);       
    }
    //for printing ....
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}