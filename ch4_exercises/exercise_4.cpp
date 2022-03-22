#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int num;
    char num_to_char;

    cout << "please enter a number: " << endl;
    cin >> num;
    num_to_char = num;


    cout << num_to_char << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;
    cout << dec << num << endl;
    return 0;
}

/* why is P the number 336? here's what we know -> 336 in binary = 101010000 which is 9 bits. that's a problem
according to the textbook, when >8 bytes, we need to get rid of the first digit (256). this leaves us with 80. 
but because we know it's > 8 bytes and because the range [0,255] has 256 numbers, 256+80 = 336.
*/