#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,9};
    int brr[10]={11,22,33,4,55,6,77,88,9,9};
    vector<int>vec;

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i]==brr[j]){
                //IT IS JUST FOR MARKING VISITED
                brr[j]=INT_FAST8_MIN;
                vec.push_back(arr[i]);
                
            }
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<"  ";
    }
}