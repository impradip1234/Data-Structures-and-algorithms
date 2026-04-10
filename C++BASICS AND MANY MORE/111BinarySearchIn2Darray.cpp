#include<iostream>
using namespace std;

int binarySearch(int arr[3][5],int rows,int cols,int target){
    int s=0;
    int e=(rows*cols)-1;
    

    while(s<=e){
        int mid=(s+e)/2;
        int rowIndex=mid/cols;
        int colIndex=mid%cols;
        if(arr[rowIndex][colIndex]==target){
            cout<<"found at : "<<rowIndex<<" "<<colIndex<<endl;
            return 1;
        }
        else if(arr[rowIndex][colIndex]<target){
            s=mid+1;
        }
        else if(arr[rowIndex][colIndex]>target){
            e=mid-1;
        }
    }
    return 0;
}

int main(){
    int arr[3][5]={
        {0,1,2,3,4},
        {5,6,7,8,9},
        {10,11,12,13,14}
    };
    int rows=3;
    int cols=5;
    int target=7;
    
    bool ans=binarySearch(arr,rows,cols,target);

    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    
}  