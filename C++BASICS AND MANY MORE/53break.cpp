#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of times you want to runn the loop:";
    cin>>n;
    for (int i=0;i<=n;i++){
        
        if(i==3){
            break;
        }
        cout<<i<<endl;
    }
    cout<<"hii";
}