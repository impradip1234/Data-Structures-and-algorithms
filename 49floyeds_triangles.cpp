#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int k=1;
    for(int r=0;r<n;r++){
        for(int c=0;c<r;c++){
            cout<<k<<" ";
            k++;
        }
        k=k;
        cout<<endl;
    }
}