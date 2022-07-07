// note: review exercise wih zayn

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#define MAX 100 //limit for amount of primes - assuming that it's 100
using namespace std;

int main() {

    bool isprime;
    int myarr[MAX], idx=0, i, j;

    for (i=2; i<=1000; i++){
        isprime=true;
        for (j=2;j<i;j++){
            if (i%j==0){
                isprime=false;
            }
        }
        if (isprime){
            myarr[idx] = i;
            ++idx;
        }
    }

    cout << idx << endl;
    cout << "The prime numbers:\n" << endl;
    for(i = 0; i < idx; ++i) cout << setw(10) << myarr[i];
    cout << endl;

    return 0;
}