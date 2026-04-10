#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,4,5,3,2};
    //for(data type  variable : container){  }
    for(int i:arr){   // this line is equavalent to for(int i=0;i<n;i++)
    cout<<i;
    }
}