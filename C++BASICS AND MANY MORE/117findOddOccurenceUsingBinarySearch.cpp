#include<iostream>
#include<vector>
using namespace std;


//linear search with O(n) time complexity......
// int main(){
//     int arr[11]={3,3,2,4,4,7,7,3,3,4,4};
//     int n=sizeof(arr)/sizeof(int);
//     for(int i=1;i<=n;i++){
//         if(arr[i]==arr[i+1] || arr[i]==arr[i-1]){
//             // cout<<"khali";
//         }
//         else cout<<"odd occurence element is present at : "<<i<<" and value having odd occurence is : "<<arr[i];
//     }
// }

//using binary search 
int main(){
    int arr[11]={3,3,2,2,4,7,7,3,3,4,4};
    int n=sizeof(arr)/sizeof(int);
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        //single element
        if(start==end){
            cout<<arr[start]<<"and present at index: "<<start;
            break;
        }
        // if even index......
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                start=mid+2;
            }
            else{
                end=mid;
            }

        }
        // if odd index...........
        else{
            if(arr[mid]==arr[mid-1]){
                start=mid+1;

            }
            else{
                end=mid-1;
            }

        }
    }
}
