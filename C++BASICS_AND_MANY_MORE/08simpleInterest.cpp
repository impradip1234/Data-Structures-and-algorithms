#include<iostream>
using namespace std;
int main(){
    int P,R,T;
    float SI;
    cout<<"enter the price(P):";
    cin>>P;
    cout<<"enter the rate(R):";
    cin>>R;
    cout<<"enrer the timePeriod(T):";
    cin>>T;
    SI=(P*R*T)/100;
    cout<<"The simple interest is : "<<SI<<endl;
    
}