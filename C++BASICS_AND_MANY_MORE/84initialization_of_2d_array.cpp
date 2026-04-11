#include<iostream>
using namespace std;
int main(){
    // initialization of the 2-d array
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //accessing any particular index of the array
    cout<<"this is by methode like matrix --> 2-d array: " << arr[2][3]<<endl;
    
    // printing row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //printing column wise
    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}