#include<iostream>
#include<vector>
#include<sstream>
using namespace std; 
int main(){
    string nums="2 3 4";
    stringstream n(nums);
    int a,b,c;
    n>>a>>b>>c;
    int sum=a+b+c;
    cout<<sum;
}

// int main(){
//     string str="Pradip is a good person";
//     stringstream s(str);
//     string token;
//     vector<string>words;
//     while(s>>token){
//         words.push_back(token);
//     }
//     int n=words.size();
//     for(int i=0;i<n;i++){
//         cout<<words[i]<<" ";
//     }
// }