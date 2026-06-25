#include<iostream>
using namespace std;
void Addrecursively(const string& str1,int p1,const string& str2,int p2,string& sum,int carry){
    //base case
    if(p1<0 && p2<0){
        if(carry){
            sum=to_string(carry) +sum;
        }
        return;
    }
    //one case solution
    int n1=(p1<0 ? '0' : str1[p1])- '0';
    int n2=(p2<0 ? '0' : str2[p2])- '0';
    int s=n1+n2+carry;
    int digit=s%10;
    carry=s/10;
    sum=to_string(digit)+sum;
    //recursive call
    Addrecursively(str1,p1-1,str2,p2-1,sum,carry);
}

int main(){
    string str1="12345";
    string str2="123";
    int p1=str1.size()-1;
    int p2=str2.size()-1;
    string sum="";
    int carry=0;
    Addrecursively(str1,p1,str2,p2,sum,carry);
    cout<<sum<<endl;
}