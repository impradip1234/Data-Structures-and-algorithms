#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    for(int r=0;r<n;r++){
        for(int c=0;c<(n-1)*2-r;c++){
            cout<<"*";
        }
            for(int i=0;i<2*r+1;i++){
                if(i%2==0){
                    cout<<r+1;
                }
                else{
                    cout<<"*";
                }
        }
        for(int c=0;c<(n-1)*2-r;c++){
            cout<<"*";
        }
        cout<<endl;
    }

}