// using XOR

#include<iostream>
#include<vector>
using namespace std;
int ans=0;
int findUnique(vector<int>arr){
    for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
    }
    return ans;
}

int main(){
    //taking size of the vector as input from user.........
    int n;
    cout<<" enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);

    // taking input ---> elements
    cout<<"enter the elements of the array: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    // passing vector === arr to a function UniqueElement
    int uniqueElement = findUnique(arr);
    cout<<"uniqueElement is: "<<uniqueElement<<endl;

}
