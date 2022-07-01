#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputText;
    cin >> inputText;
    bool isPal = true;
    int len = inputText.length(), left = 0, right = len-1, middle = len/2;

    while (left<=middle){
        if (inputText[left]!=inputText[right]){
            isPal = false;
        }
        left++;
        right--;
    }

    if (isPal) cout << "The word " << inputText << " IS a palindrome!" << endl;
    else cout << "The word " << inputText << " is NOT a palindrome!" << endl;
    
    return 0;
}