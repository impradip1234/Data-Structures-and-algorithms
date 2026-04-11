#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int maxOfarr(vector<int>arr, int n){
        int max=arr[0];
        for(int i=0;i<n;i++){
           if(arr[i]>max){
            max=arr[i];
           }
        }
        return max;
    }

    int findCutLenth(vector<int>arr,int n,int mid){
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid){
                sum=sum+(arr[i]-mid);
            }
        }
        return sum;
    }

    int ans(vector<int>arr,int n,int m){
        int start=0;
         int ans=0;
        int end=maxOfarr(arr,n);
        while(start<=end){
           
            int mid=start+(end-start)/2;
            int lengthCut=findCutLenth(arr,n,mid);
            if(lengthCut>=m){
                ans= mid;
                start=mid+1;
            }
            if(lengthCut<m){
                end=mid-1;
            }
        }
        return ans;
    }
    
};

int main(){
    vector<int>arr{20,15,10,17};
    cout<<"enter the number of trees (n) and required wood amount(m): ";
    int n,m;
    cin>>n>>m;
    Solution s;
    int ans=s.ans(arr,n,m);
    cout<<ans;
}