#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows :";
    cin>>n;

    for(int r=0;r<n;r++){
    if(r<=n/2){ 
        for(int c=0;c<n-r-1;c++){
            cout<<"  ";
        }
        for(int c=0;c<r+1;c++){
            cout<<"*   ";
        }
            cout<<endl;
        
    }
    else if(r<=n-1){
        for(int c=0;c<r;c++){
            cout<<"  ";
        }
        for(int c=0;c<n-r;c++){
            cout<<"*   ";
        }
       cout<<endl;
    }
    cout<<endl;
    }
}