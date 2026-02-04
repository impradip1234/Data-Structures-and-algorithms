#include<iostream>
#include<vector>
using namespace std;

//function for printing vecter elements
void print(vector<int>vectarr){
    int size=vectarr.size();
    for(int i=0;i<size;i++){
        cout<<vectarr[i]<<"  ";
    }
}
int main(){
    vector<int>vectarr;//initialization ---> vector <datatype> name_of_vector

    //push / insertion of elements..........
    vectarr.push_back(1);
    vectarr.push_back(2);
    vectarr.push_back(3);
    vectarr.push_back(4);
    vectarr.push_back(5);
    vectarr.push_back(6);
    for(int i=0;i<vectarr.size();i++){
        cout<<vectarr[i]<<"  ";
    }

    //infinite loop for printing capacity and size for observation
    vector<int>vect;
    while(1){
        int a;
        cin>>a;
        vect.push_back(a);
        
        cout<<"capacity "<<vect.capacity()<<" size "<<vect.size()<<endl;
    }
    
}