#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//two pointer approach.......
// vector<int> twoPointer(vector<int>& arr, int k, int x) {
//     vector<int>ans;
//         int n=arr.size();
//         int start=0;
//         int end=n-1;
//         while(end-start>=k){
//             int mid=start+(end-start)/2;
            
//             if(abs(arr[start]-x)>abs(arr[end]-x)){
//                 start++;
//             }
//             else{
//                 end--;
//             }
//         }
//         for(int i=start;i<=end;i++){
//             ans.push_back(arr[i]);
//         }
//         return ans;
//     }

// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         return twoPointer(arr,k,x);
//     }
// };

// int main(){
//     vector<int>arr={12,16,22,30,35,39,42,40,48,50,53,55,56};
//     int k=4;
//     int x=30;
//     Solution soln;
//     vector<int>ans=soln.findClosestElements(arr,k,x);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }


//using binarySearch ans window approach .........
class Solution {
public:

    // binary search to find insertion position of x
    int binarySearch(vector<int>& arr, int x){
        int start = 0;
        int end = arr.size() - 1;

        while(start <= end){
            int mid = start + (end - start) / 2;

            if(arr[mid] == x){
                return mid;
            }
            else if(arr[mid] < x){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        return start; // insertion index
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int right = binarySearch(arr, x);
        int left = right - 1;

        while(k--){
            if(left < 0){
                right++;
            }
            else if(right >= arr.size()){
                left--;
            }
            else if(abs(arr[left] - x) <= abs(arr[right] - x)){
                left--;
            }
            else{
                right++;
            }
        }

        vector<int> ans;
        for(int i = left + 1; i < right; i++){
            ans.push_back(arr[i]);
        }

        return ans;
    }
};

int main(){
    vector<int> arr = {12,16,22,30,35,39,40,42,48,50,53,55,56};
    int k = 4;
    int x = 30;

    Solution soln;
    vector<int> ans = soln.findClosestElements(arr,k,x);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}