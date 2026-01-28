#include <iostream>
using namespace std;
//this is for full diamond 

// int main()
// {
//     int n;
//     cout << "enter any odd number of rows : ";
//     cin >> n;
//     for(int r=0;r<n;r++){
//         if(r<(n+1)/2){
//             for(int c=0;c<n-1-r;c++){
//             cout<<"  ";
//             }
//         for(int c=0;c<r*2+1;c++){
//             cout<<"* ";
//             }
//         }
//         else{
//             for(int c=0;c<r;c++){
//             cout<<"  ";
//             }
//             for(int c=0;c<2*(n-r)-1;c++){
//             cout<<"* ";
//             }

//         }
       
//         cout<<endl;
//     }
// }

//this is for hollow diamond 

int main()
{
    int n;
    cout << "enter any even number of rows : ";
    cin >> n;
    for(int r=0;r<n;r++){
        if(r<(n+1)/2){
            for(int c=0;c<n-1-r;c++){
            cout<<"  ";
            }
        for(int c=0;c<r*2+1;c++){
            if(c==0){
                cout<<"* ";
            }
            else if(c==r*2+1-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
            }
        }
        else{
            for(int c=0;c<r;c++){
            cout<<"  ";
            }
            for(int c=0;c<2*(n-r)-1;c++){
                if(c==0){
                    cout<<"* ";
                }
                if(c==2*(n-r)-2){
                   cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }

        }
       
        cout<<endl;
    }
}