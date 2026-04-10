//bruteforce

// #include<iostream>
// using namespace std;

// int peak(int arr[],int n){
//     for(int i=1;i<n;i++){
//         if(arr[i-1]>arr[i]){
//             return i;
//         }
//     }
// }

// int main(){
//     int arr[7]={2,4,7,9,3,1,0};
//     int n=sizeof(arr)/sizeof(int);
//     int ans=peak(arr,n)-1;
//     if(ans>-1){
//         cout<<"Peak element is present at "<<ans<<endl;
//     }
// }

//using binary

#include<iostream>
using namespace std;

int findPeak(int arr[], int n){

    int start = 0;
    int end = n - 1;

    while(start < end){

        int mid = (start + end) / 2;

        if(arr[mid] < arr[mid + 1])
            start = mid + 1;

        else
            end = mid;
    }

    return start;//or end 
}
int main(){

    int arr[] = {1,3,8,12,9,5,2};
    int n = 7;

    int indexofpeak=findPeak(arr,n);
    cout<<"Peak value is present at index : "<<indexofpeak<<endl;
}