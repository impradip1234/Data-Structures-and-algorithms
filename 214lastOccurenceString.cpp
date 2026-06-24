#include<iostream>
using namespace std;
//method one form left to right .........
// int last_occurence(string str,char target){
//     for(int i=str.size();i>=0;i--){
//         if(str[i]==target){
//             return i;
//         }
//     }
// }


//method two form right to left .....
// int last_occurence(string str, char target){
//     int curr_index=0;
//     for(int i=0;i<str.size();i++){
//         if(str[i]==target){
//             curr_index=i;
//         }
//     }
//     return curr_index;
// }

//method three using STL

int last_occurence(string str,char target){
    size_t pos = str.rfind(target);
    if(pos!=string::npos){
        cout<<"char target is found at index "<<pos<<endl;
    }
    else{
        cout<<"target is not found."<<endl;
    }
}
int main(){
    string str="pradip yadav";
    char target='p';
    last_occurence(str,target);

}