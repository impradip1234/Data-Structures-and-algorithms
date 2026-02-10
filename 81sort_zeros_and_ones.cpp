#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[10] = {1,0,0,1,0,1,1,1,0,1};
    int size = 10;
    int start = 0;
    int end = size - 1;

    for(int i = 0; i <= end; i++){
        if(arr[i] == 0){
            swap(arr[i], arr[start]);
            start++;
        }
        else if(arr[i] == 1){
            swap(arr[i], arr[end]);
            end--;
            i--;
        }
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
