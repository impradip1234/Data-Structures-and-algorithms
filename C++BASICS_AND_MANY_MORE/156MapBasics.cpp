//basics maths...
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    vector<int>vec;
    map<string,int>mp;
    mp["Pradip Yadav"]=97;
    mp["Aditya Yadav"]=89;
    mp["Stish Yadav"]=93;
    int n;
    for(int i=0;i<5;i++){
        cin>>n;
        mp["Pradip Yadav"]+=n;
    }
    cout<<mp["Pradip Yadav"];
}