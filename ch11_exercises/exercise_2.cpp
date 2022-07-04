#include <iostream>
#include <string>
using namespace std;

namespace TOOL1{
    #include "tool1.h"
}

namespace TOOL2{
    #include "tool2.h"
}

int main() {

    cout << TOOL1::calculate(1,2) << endl;
    cout << TOOL2::calculate(1,2) << endl;
    return 0;
}