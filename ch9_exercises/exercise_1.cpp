#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1("As time by ..."), s2( "goes ");
    s1.insert(8,s2);
    s1.erase(15,-1);
    s1.replace(3,4,"Bill");
    cout << s1;
    return 0;
}