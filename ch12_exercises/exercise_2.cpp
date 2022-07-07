#include <iostream>
#include <string>
#include <cmath>

using namespace std;
void circle(const double &radius, double &area, double &circumference);

int main() {
    const double radius = 3;
    double area, circumference;

    circle(radius, area, circumference);

    cout << radius << " " << area << " " << circumference << endl;
    return 0;
}

void circle(const double &radius, double &area, double &circumference){
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;
}