#include<iostream>
using namespace std;

int main(){
    int num,k;
    cout << "Enter the number : ";
    cin>>num;
    cout<< "Enter the value (k) which bit has to be set : ";
    cin>>k;
    int mask =1<<k;
    int ans = mask | num;
    cout<<ans;
}