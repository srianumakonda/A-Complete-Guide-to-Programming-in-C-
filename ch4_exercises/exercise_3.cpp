#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int ar_num, quantity;
    float price;

    cout << "please enter an article number: " << endl;
    cin >> ar_num;

    cout << "please enter the quantity: " << endl;
    cin >> quantity;

    cout << "please enter the unit price: " << endl;
    cin >> price;

    cout << "Article number: " << ar_num << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Unit price: " << setprecision(2) << price << endl;
    return 0;
}