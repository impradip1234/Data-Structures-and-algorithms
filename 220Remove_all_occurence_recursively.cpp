#include<iostream>
using namespace std;

void removing_all_occurence(string& s, string part){
    int pos=s.find(part);
    //base case....
    if(pos==string::npos){
        return;
    }
    
    // one case solution........
    s.erase(pos,part.size());

    //recursive sol
    removing_all_occurence(s,part);
}

int main(){
    string s="abcbcabccacbabc";
    string part="abc";
    cout<<"String befor removing all occurence of part substring : "<<s<<endl;
    removing_all_occurence(s,part);
    cout<<"string after removing all occurence of part substing : "<<s<<endl;
}