//Pattern for printing 
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows :";
    cin>>n;
    for(int r=0;r<n;r++){
        char ch;
        for(int c=0;c<r+1;c++){
            int number=c+1;
            ch=number+'A'-1;
            cout<<ch;
        }


        //jab tak A tak nahi pohochate 
        // tab tak print karenge 
        for (char alphabet=ch;alphabet>'A';){
            --alphabet;
            cout<<alphabet;
        }
        cout<<endl;
    }
}