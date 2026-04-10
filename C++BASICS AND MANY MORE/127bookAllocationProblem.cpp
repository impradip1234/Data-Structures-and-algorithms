#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
//finding the maximum of the array for low ........
int maximum(int arr[],int n){
    int maxelement=arr[0];
    for(int i=0;i<n;i++){
        maxelement=max(maxelement,arr[i]);
    }
    return maxelement;
}

//finding the sum of all the elements for the high....
int SumOfAll(int arr[],int n){
    int sum=0;
     for(int i=0;i<n;i++){
        sum=sum+arr[i];
     }
     return sum;
}
//count how much students getting the book allocated one by one increasing the number of pages ....
int counting(int arr[],int page, int n){
    int student=1;  int pageStudent=0;
    for(int i=0;i<n;i++){

        if(arr[i]>page) return INT_MAX;
    if(pageStudent+arr[i]<=page){
        pageStudent +=arr[i];
    }
    else{
    student++;
    pageStudent=arr[i];
    }
    }
    
    return student;
}




int main(){
    int arr[4]={12,34,67,90};
    int n=sizeof(arr)/sizeof(int);
    int m;
    cout<<"enter the number of students: ";
    cin>>m;

    if(m>n){
        cout<<-1;
        return 0;
    }
    
    int low=maximum(arr,n) ;
    int high=SumOfAll(arr,n);
    int ans=-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        int countStudent=counting(arr,mid, n);
        if(countStudent<=m){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans;
    return 0;
}