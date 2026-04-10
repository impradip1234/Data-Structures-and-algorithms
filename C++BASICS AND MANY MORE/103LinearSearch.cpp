#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int key;

    cout<<"enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter the key : ";
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"present at index : "<<i<<endl;
        }
    }

    return 0;
}