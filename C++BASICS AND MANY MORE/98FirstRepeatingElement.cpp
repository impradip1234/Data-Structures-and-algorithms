// brute force approach .........

// #include<iostream>
// using namespace std;
// int findrepeating(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 return i+1;
//             }
//         }
//     }
//     return -1;
// }
// int main(){
//     // int arr[]={1,7,3,4,3,5,6};
//     int arr[]={1,2,3,5};
//     int n=sizeof(arr)/sizeof(int);
//     int ans=findrepeating(arr,n);
//     cout<<ans;
// }

//efficient way of finding first repeating element 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int findrepeating(int arr[],int n){
//     unordered_map<int,int>hash;
//      for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//      }

//      for(int i=0;i<n;i++){
//         if(hash[arr[i]]>1){
//             return i+1;
//         }
//      }
//      return -1;
// }

// int main(){
//     int arr[]={1,5,3,4,3,5,6};
//     int n=sizeof(arr)/sizeof(int);
//     int ans=findrepeating(arr,n);
//     cout<<ans;
// }

//creating a hash table stroring a cound of all elements frequency .......
  
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,3,4,3,5,6};
    int n=sizeof(arr)/sizeof(int);
    int brr[n]={0};
    for(int i=0;i<n;i++){
        brr[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        cout<<i<<"  "<<brr[i] <<endl;
    }
}   