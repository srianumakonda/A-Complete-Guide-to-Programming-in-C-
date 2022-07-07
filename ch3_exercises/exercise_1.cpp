#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num;

    cout << sqrt(4) << endl;
    cout << sqrt(12.25) << endl;
    cout << sqrt(0.0121) << endl;

    cout << "input a number: " << endl;

    cin >> num;

    cout << sqrt(num) << endl;

    return 0;
}