#include <iostream>
#include <iomanip> //this library is used for those manipulator functions
using namespace std;

int main() {
    cout << left << setw(15) << 0.123456 << endl;
    cout << right << fixed << setw(12) << setprecision(2) << 23.987 << endl;
    cout << scientific << setw(10) << setprecision(4) << -123.456 << endl; //not really that useful. because width is really small + decimal rounding, the number is inaccurate i.e. it would be -123.46 vs -123.456
    return 0;
}