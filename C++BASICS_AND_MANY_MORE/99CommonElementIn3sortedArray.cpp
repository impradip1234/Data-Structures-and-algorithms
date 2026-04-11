#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>st;  //for eleminating the dublicate values from the common (used set)
    int arr1[]={1,5,10,20,40,80};
    int arr2[]={6,7,20,80,100};
    int arr3[]={3,4,15,20,30,70,80,120};
    int n1=sizeof(arr1)/sizeof(int);
    int n2=sizeof(arr2)/sizeof(int);
    int n3=sizeof(arr3)/sizeof(int);
    int i=0;
    int j=0;
    int k=0;

    while(i<n1 && j<n2 && k<n3){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            // cout<<arr1[i]<<" ";
            st.insert(arr1[i]); // inserting all the common elements in set 
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    for(int x:st){ //taking output ........
        cout<<x<<" ";
    }
}