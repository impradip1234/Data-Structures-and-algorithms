#include<iostream>
using namespace std;
void solve(int arr[]){
    cout<<arr<<endl;
    cout<<&arr<<endl;
    arr[0]=30;
}
void solve2(int *ptr){
    *ptr=*ptr+10;
}
int main(){
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // int *ptr=arr;
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
//pointer with arrays.....of integers....

    // int arr[4]={1,2,3,4};
    // int *ptr=arr;
    // int *ptr2=arr+1;
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<ptr2<<endl;
    // cout<<*ptr2<<endl;
    // cout<<*ptr2+1<<endl;
    // cout<<*(ptr2+1)<<endl;
    // cout<<ptr2[1]<<endl;
    // cout<<ptr2[0]<<endl;
    // cout<<ptr2[-1]<<endl;

//pointer with arrays.....of characters....

    // char arr2[5]={'a','b','c','d','e'};
    // char *ptr3=arr2;
    // char *ptr4=arr2+1;
    // cout<<arr2<<endl;
    // cout<<&arr2<<endl;
    // cout<<&arr2[0]<<endl;
    // cout<<ptr3<<endl;
    // cout<<*ptr3<<endl;
    // cout<<ptr4<<endl;
    // cout<<*ptr4<<endl;

//pointer with functions....
    int arr[10]={1,2,3,4};
    //print
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    solve(arr);
    
    //print
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int a=5;
    int *ptr=&a;
    cout<<a<<endl;
    solve2(ptr);
    cout<<a;
}