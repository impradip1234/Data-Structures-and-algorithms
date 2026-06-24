#include<iostream>
using namespace std;
//from right to left means from zero to the size of the string .......(Method 01)
// int findLastOccur(string str,char target,int& index, int i){
//     if(i==str.size()) return -1;
//     if(str[i]==target){
//         index=i;
//     }
//     findLastOccur(str, target, index, i+1);
// }

//from left to right means from size of the string to zero index ..(Method 02)
    void findLastOccur(string str,char target,int& index, int i){
        if(i<0) return;
        if(str[i]==target){
            index=i;
            return;
        }
        findLastOccur(str, target, index, i-1);
    }
int main(){
    string str="pradip yadav";
    char target='z';
    int index=-1;
    int i=str.size();
    findLastOccur(str,target,index,i);
    cout<<"using right to left "<<index;
cout<<endl;
    //using STL...... ==> string.rfind(char)
    int ans=str.rfind(target);
    cout<<"using STL "<<ans;
}