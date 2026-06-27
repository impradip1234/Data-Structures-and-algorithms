//this gives --> time limit exceeded;

// #include<iostream>
// #include<climits>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int maxProfit(vector<int>& prices,int i,int j){
//     //base
//     int maxi=INT_MIN;
//     int n=prices.size();
//     if(i >=n ||j>=n) return maxi;

//     // one case solution
//     maxi=max(maxi,prices[j]-prices[i]);
//     //recursive call
//     return max(maxi,maxProfit(prices,i,j+1));
// }
// int main(){
//     vector<int>prices={7,1,5,3,6,4};
//     int ans=INT_MIN;
//     for(int i=0;i<prices.size();i++){
//         ans=max(ans,maxProfit(prices,i,i+1));
//     }
//     cout<<ans<<endl;
// }


//Method :02 --> best recursive approach ...........
#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;

class Solution{
    public:
    void maxProfitFinder(vector<int>& prices,int i,int & minPrice, int & maxProfit){
        //base...........
        if(i==prices.size()) return;
        //solution for one case.....
        if(prices[i] < minPrice){
            minPrice=prices[i];
        }
        int todaysProfit=prices[i]-minPrice;
        if(todaysProfit> maxProfit){
            maxProfit=todaysProfit;
        } 
        //recursive.....
        maxProfitFinder(prices,i+1,minPrice,maxProfit);
    }
    int maxProfit(vector<int>& prices){
        int minPrice=INT_MAX;
        int maxProfit=INT_MIN;
        maxProfitFinder(prices,0,minPrice,maxProfit);
        return maxProfit;

    }
};
int main(){
    vector<int>prices={7,1,5,3,6,4};
    Solution sol;
    int ans=sol.maxProfit(prices);
    cout<<ans;
}