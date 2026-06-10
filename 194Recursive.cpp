#include<iostream>
using namespace std;

    void counting(int n){
        if(n==1){
            cout<<1<<endl;
            return ;
        }
        else{
            cout<<n<<endl;
            counting(n-1);
        }
    }
int main(){
    int n=5;
    counting(n);
}