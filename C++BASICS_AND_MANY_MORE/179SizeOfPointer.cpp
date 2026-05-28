// sizeof pointer is always same for all data type:  8 for 64bit architecture
                                                    //  4 for 32bit architecture

#include<iostream>
using namespace std;
int main(){
    int a=5;
    int* ptra=&a;
    cout<<sizeof(ptra)<<endl;

    char ch='p';
    char* ptrch=&ch;
    cout<<sizeof(ptrch)<<endl;

    double dob=4939.03;
    double* ptrdob=&dob;
    cout<<sizeof(ptrdob)<<endl;
} 