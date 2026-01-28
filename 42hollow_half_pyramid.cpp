#include<iostream>
using namespace std;

// step : 1 print half pyramid 

// int main(){
//     int n;
//     cout<<"enter the number of rows :";
//     cin>>n;
//     for (int r=0;r<n;r++){
//         for(int c=0;c<n-r;c++){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }
// }

// * * * * * * * 
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

//step : 2 apply condition to just print the required stars

int main(){
    int n;
    cout<<"enter the number of rows :";
    cin>>n;
    for (int r=0;r<n;r++){
        for(int c=0;c<n-r;c++){
            if(r==0 || c==0 ){
               cout<<"* ";
            }
            else if(c==n-r-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

//final output and the answer of the question is 
// * * * * * * * 
// *         * 
// *       * 
// *     * 
// *   * 
// * * 
// * 