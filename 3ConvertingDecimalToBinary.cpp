// #include<iostream>
// #include<cmath>
// using namespace std;
// int decimalTobinary(int decimal){
//         int binary=0;
//         int i=0;
//     while(decimal>0){
//         int reminder=decimal%2;
//         // for reversing 
//         binary=reminder*pow(10,i++)+binary;
//         decimal=decimal/2;
//     }
//     return binary;
// }
// int main(){
//     int decimal;
//     cout<<"Enter the decimal number: ";
//     cin>>decimal;
//     int binary=decimalTobinary(decimal);
//     cout<<"binaary of the given decimal is : "<<binary<<endl;
// }
// another approach
#include <iostream>
using namespace std;

int decimalToBinary(int decimal) {
    int binary = 0;
    int place = 1;

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = binary + remainder * place;
        place = place * 10;
        decimal = decimal / 2;
    }
    return binary;
}

int main() {
    int decimal;
    cout << "Enter the decimal number: ";
    cin >> decimal;

    int binary = decimalToBinary(decimal);
    cout << "Binary of the given decimal is: " << binary << endl;
}
