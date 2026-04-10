#include <iostream>
using namespace std;

// static memory allocation
//  int main(){
//      int elements;
//      int arr[5];
//      //input--> elements
//      for (int i=0; i<5;i++){
//          cin>>arr[i];
//      }
//      //output-->elements
//      for(int i=0;i<5;i++){
//          cout<<arr[i]<<" ";
//      }
//  }

// static memory allocation-- > another way
int main()
{
    int n;
    cout << "enter size of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
