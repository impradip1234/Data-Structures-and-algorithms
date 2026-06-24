#include<iostream>
using namespace std;
void reversing_string(string& str,int start,int end){
    if(start>end) return;
    else{
        swap(str[start],str[end]);
        reversing_string(str, start+1, end-1);
    }
}
int main(){
    string str="pagalu yadav";
    int start=0;
    int end=str.size()-1;
    cout<<"string befor reversing."<<str<<endl;
    reversing_string(str,start,end);
    cout<<"string after reversing ."<<str<<endl;
}