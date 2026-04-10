//given pattern to print
//half solid diamond
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * *
// *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the odd number of rows: ";
    cin>>n;

    for(int r=0;r<n;r++){
        if(r<=n/2){
            //upper half of the solid half diamond 
            for(int c=0;c<r+1;c++){
                cout<<"* ";
            }
        }
        else{
            for(int c=0;c<n-r;c++){
                cout<<"* ";
            }
        }
    
        cout<<endl;
    }
}