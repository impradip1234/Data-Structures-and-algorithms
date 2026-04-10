//given pattern
// * * * * *   * * * * * 
// * * * *       * * * * 
// * * *           * * * 
// * *               * * 
// *                   * 
// *                   * 
// * *               * * 
// * * *           * * * 
// * * * *       * * * * 
// * * * * *   * * * * * 

#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter the number of rows in upper half:";
    cin>>n;

//for upper half

    // for(int r=0;r<n;r++){
    //     for(int c=0;c<n-r;c++){
    //         cout<<"* ";
    //     }
    //     for(int c=0;c<2*r+1;c++){
    //         cout<<"  ";
    //     }
    //     for(int c=0;c<n-r;c++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

//for lower half

    //     for(int r=0;r<n;r++){
    //         for(int c=0;c<r+1;c++){
    //             cout<<"* ";
    //         }
    //         for(int c=0;c<2*(n-r)-1;c++){
    //             cout<<"  ";
    //         }
    //         for(int c=0;c<1+r;c++){
    //             cout<<"* ";
    //         }
    //         cout<<endl;
    //     }
    // }


//combining for final shape 

    for(int r=0;r<n;r++){
        for(int c=0;c<n-r;c++){
            cout<<"* ";
        }
        for(int c=0;c<2*r+1;c++){
            cout<<"  ";
        }
        for(int c=0;c<n-r;c++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int r=0;r<n;r++){
            for(int c=0;c<r+1;c++){
                cout<<"* ";
            }
            for(int c=0;c<2*(n-r)-1;c++){
                cout<<"  ";
            }
            for(int c=0;c<1+r;c++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }