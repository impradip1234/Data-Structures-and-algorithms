#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vect;
    int arrA[]={3,4,5,6};
    int arrB[]={1,2,8,7,9};
    int sizeA=4;
    int sizeB=5;
    for(int i=0;i<sizeA;i++){
        vect.push_back(arrA[i]);
    }
    for(int i=0;i<sizeB;i++){
        vect.push_back(arrB[i]);
    }
    cout<<"union array is :"<<endl;
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<"  ";
    }
}