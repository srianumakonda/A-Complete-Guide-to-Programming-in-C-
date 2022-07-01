#include <iostream>
#include <string>
// #include <cmath>

#define ABS(a) ((a) <= 0? (-a) : (a))
#define MAX(a,b) ((a)>(b)? (a) : (b))

using namespace std;
int main() {
    cout << ABS(5) << MAX(2,3) << endl;
    return 0;
}