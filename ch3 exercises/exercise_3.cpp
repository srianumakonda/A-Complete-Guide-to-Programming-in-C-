#include <iostream>
#include <string>

using namespace std;

int main() {
    string given("I have learned something new again! ");
    cout << "Length of string: " << given.length() << endl;

    string ask_input("input 2 lines of text please!!");
    string line1, line2;

    cout << ask_input << endl;
    cout << "Enter line 1: ";
    getline(cin, line1);
    cout << "Enter line 2: ";
    getline(cin, line2);

    cout << "Concatenated string: " << line1+line2 << endl;

    return 0;
}

// other way of doing this:
/*
sum = str1 + " * " + str2; // Concatenates, assigns
cout << sum << endl; // and outputs strings.
*/