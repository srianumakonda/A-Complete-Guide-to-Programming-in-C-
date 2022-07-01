#include <iostream>
using namespace std;

inline double Max(double a, double b);
// inline char Max(char a, char b);

int main() {
    double a = 1.0, b = 2.0;
    // ORIGINAL MAX FUNCTION
    cout << "Max of " << a << " and " << b << " is " << Max(a, b) << endl;

    // OVERLOADING TESTING -> char
    char c = 'a', d = 'b';
    cout << "Max of " << c << " and " << d << " is " << Max(c, d) << endl;

    // OVERLOADING TESTING -> int
    int e = 1, f = 2;
    cout << "Max of " << e << " and " << f << " is " << Max(e, f) << endl;

    return 0;
}

inline double Max(double a, double b) {
    return a > b ? a : b;
}

// inline char Max(char a, char b) {
//     return a > b ? a : b;
// }