#include <iostream>
#include <cmath>
using namespace std;
double pow(double base, int exp);

int main() {
    cout << "Enter a base: ";
    double base;
    cin >> base;
    cout << "Enter an exponent: ";
    int exp;
    cin >> exp;
    cout << "The result is " << pow(base, exp) << endl;
    return 0;
}

double pow(double base, int exp){
    for(int i=1;i<exp;i++){
        base *= base;
    }
    return base;
}