#include<iostream>
#include<vector>
using namespace std;
int main(){
    //declare ==> vector of vector...........
    vector<vector<int> >arr;
    
    //initialization.............
    //1D
    vector<int>a{1,2,3};
    vector<int>b{4,5,6};
    vector<int>c{7,8,9};
    //2D
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    // print 2d vector 
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<a.size()/*arr[i].size()*/;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //another way of declaration of variable
    vector<vector<int> >arr2(3,vector<int>(3,0));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

}