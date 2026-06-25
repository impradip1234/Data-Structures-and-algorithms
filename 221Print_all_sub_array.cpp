#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr, int start,int end){
    //base case
    if(start>end)return;
    //one case solution
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //recursive call
    print(arr,start,end-1);
}

int main(){
    vector<int>arr={0,1,2};
    for(int i=0;i<arr.size();i++){
        print(arr,i,arr.size()-1);
    }
}