#include <iostream>
using namespace std;

int decimalToBinary(int decimal) {
    int binary = 0;
    int place = 1;

    while (decimal > 0) {
        int remainder = decimal&1;
        binary = binary + remainder * place;
        place = place * 10;
        decimal = decimal>>1;
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
