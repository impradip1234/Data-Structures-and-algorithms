#include<iostream>
using namespace std;
//method: 01  --> multiplying a , b times to get a to the powre b.. --> time complexity : O(b) 

int slow_find_a_to_power_b(int a, int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}

//method: 02  --> time complexity is: O(log b) 

int fast_find_a_to_power_b(int a,int b){
    int ans=1;
    while(b>0){
        if(b%2!=0){
            ans=ans*a;
        }
        ans=ans*a;
        b=b/2;
    }
    return ans;
}

int main(){
    int a=2;
    int b=3;
    int ans=fast_find_a_to_power_b(a,b);
    cout<<ans;
}