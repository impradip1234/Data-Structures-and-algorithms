#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        //first of merge the array...
        vector<int>merged(m+n);
        int i=0;
        int j=0;
        int k=0;
        while(i<m &&j<n){
            if(nums1[i] <= nums2[j]){
                merged[k++]=nums1[i];
                i++;
            }
            else{
                merged[k++]=nums2[j];
                j++;
            }
        }
        while(i<m){
            merged[k++]=nums1[i++];
        }
        while(j<n){
            merged[k++]=nums2[j++];
        }
        int size=merged.size();
    double median ;
    if(size%2!=0){
        median = merged[size/2];
    }
    else{
        int index=size/2;
        median = (merged[index-1]+merged[index])/2.0;
    }
    return median;
    }
};

int main(){
    vector<int>nums1={1,3};
    vector<int>nums2={2,4};
    Solution sol;
    double ans=sol.findMedianSortedArrays(nums1,nums2);
    cout<<ans;
}