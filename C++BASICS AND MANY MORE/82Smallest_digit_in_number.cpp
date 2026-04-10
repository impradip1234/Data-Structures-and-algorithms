#include<iostream>
using namespace std;
int main(){
    
    int nums;
    while(true){
       cout<<"Enter the number";
    cin>>nums;
    int digit;
    int smallest=INT8_MAX;
    while(nums!=0){ 
        digit=nums%10;
        if(digit<smallest){
           smallest=digit;
        }
        nums=nums/10;
    }
    cout<<"smallest digit is:"<<smallest<<endl;
    }
}