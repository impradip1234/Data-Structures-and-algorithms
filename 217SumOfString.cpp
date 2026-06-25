//if both strings are of same size .....
#include<iostream>
using namespace std;
void sum_of_string(string str1,int p1,string str2, int p2,string& sum,int carry){
    //base case
    if(p1<0 || p2<0){
        if(carry){
            sum=to_string(carry)+sum;
        }
        return;
    }
    // one case solution 
    int s=(str1[p1]-'0')+(str2[p2]-'0')+carry;
    int digit=s%10;
    carry=s/10;
    sum=to_string(digit)+sum;
    //recursive call
    sum_of_string(str1,p1-1,str2,p2-1,sum,carry);
    return;
}
int main(){
    string str1="123";
    string str2="124";
    string sum="";
    int carry=0;
    int p1=str1.size()-1;
    int p2=str2.size()-1;
    sum_of_string(str1,p1,str2,p2,sum,carry);
    cout<<sum;
    
}