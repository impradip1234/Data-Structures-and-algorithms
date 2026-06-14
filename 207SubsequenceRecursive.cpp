#include<iostream>
using namespace std;
#include<vector>


void subsequence(string& str, string output,int i,vector<string>& vect){
    //base case 
    if(i>=str.length()) {
        // cout<<output<<endl;
        //store
        vect.push_back(output);
        return;
    }
    //exclude
    subsequence(str,output,i+1,vect);
    //include
    output.push_back(str[i]);
    subsequence(str,output,i+1,vect);
}
int main(){
    string str="abc";
    int i=0;
    string output="";
    vector<string>vect;
    subsequence(str,output,i,vect);
    
    for(auto val:vect){
        cout<<val<<endl;
    }

} 