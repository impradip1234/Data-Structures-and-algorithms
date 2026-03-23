#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

//finding length of string .............
int getlenght(char name[]){
    int length=0;
    for(int i=0;i<100;i++){
        if(name[i]=='\0'){
            return i;
        }
    }
}

int main(){
    char name[100];
    // input and output at once >>>>>>>>>>
    // cin>>name;
    // cout<<name[3];
    
    //input and output at once >>>>>>>>>>>
    // for(int i=0;i<100;i++){
    //     cin>>name[i];
    // }

    // for(int i=0;i<100;i++){
    //     cout<<name[i]<<" ";
    // }

    // for full length with space .........
    // cin.getline(name,50);
    // cout<<name;

    cin>>name;
    int ans=getlenght(name);
    cout<<ans;
    
    cout<<strlen(name);
}