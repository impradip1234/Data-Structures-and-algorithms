#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
vector<bool>Seive(int n){
    vector<bool>seive(n+1,true);
    seive[0]=seive[1]=false;
    for(int i=2;i<=sqrt(n);i++){ // optimizatin 02 -> i=(2 to n) == i=(2 to sqrt(n))
        if(seive[i]==true){
            int j=i*i;// optimization : 01 -> j=i*2 == j=i*i
           while(j<=n){
            seive[j]=false;
            j+=i;
           }
        }
    }
    return seive;
}

int main(){
    vector<bool>seive=Seive(25);
    for(int i=0;i<25;i++){
        if(seive[i]){
            cout<<"prime: "<<i<<endl;
        }
    }
}