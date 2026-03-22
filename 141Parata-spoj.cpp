#include<iostream>
#include<vector>
using namespace std;

int findMaxRank(vector<int>& cooksRanks){
    int maxRank = cooksRanks[0];
    for(int i = 0; i < cooksRanks.size(); i++){
        if(cooksRanks[i] > maxRank){
            maxRank = cooksRanks[i];
        }
    }
    return maxRank;
}

bool isPossibleSolution(vector<int>& cooksRanks, int numberOfParatas, int mid){
    int currParatas = 0;

    for(int i = 0; i < cooksRanks.size(); i++){
        int R = cooksRanks[i];
        int j = 1;
        int timeTaken = 0;

        while(timeTaken + j * R <= mid){
            currParatas++;
            timeTaken += j * R;
            j++;

            if(currParatas >= numberOfParatas){
                return true;
            }
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int>& cooksRanks, int numberOfParatas){
    int start = 0;
    int maxRank = findMaxRank(cooksRanks);
    int end = maxRank * (numberOfParatas * (numberOfParatas + 1) / 2);

    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(isPossibleSolution(cooksRanks, numberOfParatas, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int TestCases; 
    cin >> TestCases;

    while(TestCases--){
        int numberOfParatas, numberOfCooks;
        cin >> numberOfParatas;
        cin >> numberOfCooks;

        vector<int> cooksRanks;

        for(int i = 0; i < numberOfCooks; i++){
            int rank; 
            cin >> rank;
            cooksRanks.push_back(rank);
        }

        cout << minTimeToCompleteOrder(cooksRanks, numberOfParatas) << endl;
    }

    return 0;
}
//input 
// example:   
// 2
// 10
// 4
// 1 2 3 4
// 8
// 8
// 1 1 1 1 1 1 1 1