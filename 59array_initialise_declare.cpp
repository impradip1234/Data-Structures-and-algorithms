#include<iostream>
using namespace std;
int main (){
    // int arr[10];//initialize with size 10
    // cout<<arr; // this will print base address
    // int arr[10]={1,2,3,4,5,6,7,8,9};// for declaration of array

    // taking output each element of the array  
    // for(int i=0;i<10;i++){
    //     cout<<arr[i];
    // }

    //no error but bad practice 
    // int n;
    // cin>>n;
    // int arr[n];

    //accessing any particular value by its index
    // int arr[5]={12,34,26,67,58};
    // cout<<"value at index 3 is: "<<arr[3];

    // printing all values of arr
    // int arr[5]={12,34,26,67,58};
    // for (int i=0; i<5;i++){
    //     cout<<"value at index "<<i<<"="<<arr[i]<<endl;
    // }

    // taking input all values of arr
    int array[10 ];
    cout<<"enter elements";
    for (int i=0;i<10;i++){
        cin>>array[i];
    }
    for (int i=0;i<10;i++){
        cout<<array[i]<<endl;
    }
}