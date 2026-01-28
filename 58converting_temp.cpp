#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        return {kelvin, fahrenheit};
    }
};

int main() {
    Solution s;
    double celsius = 36.5;

    vector<double> ans = s.convertTemperature(celsius);

    cout << "Kelvin: " << ans[0] << endl;
    cout << "Fahrenheit: " << ans[1] << endl;

    return 0;
}
