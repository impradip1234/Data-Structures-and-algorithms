#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int solve(vector<int>& days, vector<int>& costs, int i){
        //base case
        if(i>=days.size()) return 0;

        // solution for one case 
        //for one day pass
        int cost1=costs[0]+solve(days,costs,i+1);

        //for seven days pass
        int passEnd=days[i]+7-1;
        int j=i;
        while(j<days.size() && days[j]<=passEnd ){
            j++;
        }
        int cost2=costs[1]+solve(days,costs,j);

        //for thirty days pass
        passEnd=days[i]+30-1;
        j=i;
        while(j<days.size() && days[j]<=passEnd ){
            j++;
        }
        int cost3=costs[2]+solve(days,costs,j);
        return min(cost1,min(cost2,cost3));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int i=0;
        int ans=solve(days,costs,i);
        return ans;
    }
};
int main(){
    vector<int>days={1,4,6,7,8,20};
    vector<int>costs={2,7,15};
    Solution sol;
    int ans=sol.mincostTickets(days,costs);
    cout<<ans;
}