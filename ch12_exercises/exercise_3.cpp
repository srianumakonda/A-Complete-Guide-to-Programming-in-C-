// A version of swap() with incorrect logic.
// Find the error!

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void swapP(float *p1, float *p2)
{
    float temp; // Temporary variable
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swapR(float *p1, float *p2)
{
    float temp; // Temporary variable
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    float x = 11.1F, y=22.2F;
    swapP(&x, &y);
    cout << x << " " << y << endl;
}