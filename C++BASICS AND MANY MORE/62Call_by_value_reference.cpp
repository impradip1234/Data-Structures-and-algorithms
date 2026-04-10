#include<iostream>
using namespace std;

// int main(){
//     int n=4;
//     int &k=n;//k is a reference variable : like nick name of n. 
//     int &b=n;
//     cout<<"n:"<<n<<endl;// n, k and b are the nick name of n.
//     cout<<"k:"<<k<<endl;
//     cout<<"b:"<<b<<endl;
// }

//call by value === new memory is created and actual value is passed to that memory 
// int increase_by_1(int n){
//     n=n+1;
//     return n;
// }
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;

//     n=increase_by_1(n);
//     cout<<"increamented value of n is : "<<n;
// }


//call by reference === no new memory direct changes will reflect to main variable 
void increamented(int &n){
    n=n+1;
}
int main(){
    int n;
    cout <<"enter number :";
    cin>>n;
    increamented(n);
    cout<<"incremented value of n is: "<<n<<endl;

}