#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:

//function for finding low;
    int maxOfWeight(vector<int>& weights){
        int ans=weights[0];
        for(int i=0;i<weights.size();i++){
            if(ans<weights[i]){
                ans=weights[i];
            }
        }
        return ans;
    }

//function for finding high;
    int sumOfWeight(vector<int>& weights){
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        return sum;
    }

// function for finding the days will take with that particular weights limit..
    int findMaxDays(vector<int>& weights,int mid){
        int maxDay=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i] <=mid){
                sum+=weights[i];
            }
            else{
                maxDay++;
                sum=weights[i];
            }
        }
        return maxDay;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low=maxOfWeight(weights);
        int high=sumOfWeight(weights);
        
        int ans=high;

        while(low<=high){
            int mid=low+(high-low)/2;
            
            int maxDays=findMaxDays(weights,mid);
            if(maxDays<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
           
        }
        return ans; 
    }
};

int main(){
    vector<int>weights={1,2,3,4,5,6,7,8,9,10};
    int days=2;

    Solution s;
    int ans=s.shipWithinDays(weights,days);
    cout<<ans;
}