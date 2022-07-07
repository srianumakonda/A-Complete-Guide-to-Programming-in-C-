#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#define MAX 100

using namespace std;

int main() {
    int count, i, end_idx;

    long myarr[MAX], temp;
    cout << "Enter as many numbers (has to be less than 100). To end it, press on a letter." << endl;
    for (i=0; i<MAX && cin >> myarr[i];i++); //&& will also ensure that the cin input is also a long
    count = i;
    end_idx = count;

    bool sorted=false;
    long swap_temp;

// straightforward swap - compare current_idx and idx+1
    while (!sorted){
        sorted=true;
        --end_idx;
        for (i=0;i<end_idx;i++){
            if (myarr[i] > myarr[i+1]){
                sorted=false;
                swap_temp = myarr[i];
                myarr[i] = myarr[i+1];
                myarr[i+1] = swap_temp;
            }
        }
    }

    cout << "The sorted numbers:\n" << endl;
    for( i = 0; i < count; ++i) cout << setw(10) << myarr[i];
    cout << endl;

    return 0;
}