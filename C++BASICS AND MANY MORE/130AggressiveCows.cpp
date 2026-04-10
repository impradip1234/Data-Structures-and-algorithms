#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
    public:

bool isPossibleSolution(vector<int>&stalls,int k,int mid){
    int cow=1;
    int pos=stalls[0];
    for(int i=1;i<stalls.size()-1;i++){
        if(stalls[i]-pos >= mid){
            cow++;
            pos=stalls[i];
        }
        if(cow==k) return true;
    }
    return false;
}

    int solve(int n,int k, vector<int>& stalls){
        sort(stalls.begin(),stalls.end());
        int start=0;
        int end=stalls[stalls.size()-1]-stalls[stalls[0]];

        int ans = -1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(isPossibleSolution(stalls,k,mid)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};


int main(){
    vector<int>stalls={1,2,4,8,9};
    int n=5;
    int k=3;

    Solution s;
    int ans=s.solve(n,k,stalls);
    cout<<ans;
}