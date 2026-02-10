#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vect;
    int arrA[]={3,4,9,6};
    int arrB[]={1,2,8,7,9};
    int sizeA=4;
    int sizeB=5;
    for(int i=0;i<sizeA;i++){
        for(int j=0;j<sizeB;j++){
            if(arrA[i]==arrB[j]){
                arrA[i]=INT_FAST8_MIN;
            }
        }
    }
    // making union now after updating all the element which are in both the arrays with INT_MIN

    for(int i=0;i<sizeA;i++){
        if(arrA[i]!=INT_FAST8_MIN){
            vect.push_back(arrA[i]);
        }
    }
    for(int i=0;i<sizeB;i++){
        vect.push_back(arrB[i]);
    }
    cout<<"union array is :"<<endl;
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<"  ";
    }
}