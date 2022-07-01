#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

long sumFunc(long one, long two, long three=0, long four=0);

int main() {

    long returnVal = sumFunc(1, 2, 3, 4);

    cout << returnVal << endl;
    return 0;

}