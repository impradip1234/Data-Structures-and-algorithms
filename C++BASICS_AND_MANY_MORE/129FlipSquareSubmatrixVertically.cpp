#include<iostream>
using namespace std;

int main(){
    int grid[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int x=1;
    int y=0;
    int k=3;

    int rowStart=x;
    int rowEnd=x+k-1;

    int colStart=y;
    int colEnd=y+k-1;

    for(int i=rowStart;i<=rowEnd;i++){
        for(int j=colStart;j<=colEnd;j++){
           swap(grid[i][j],grid[rowEnd][j]);
        }
        rowEnd--;
    }

    //print.....
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}