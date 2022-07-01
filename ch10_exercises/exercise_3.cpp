#include <iostream>
#include <cmath>
using namespace std;

double factorial(unsigned int n);
double factorialR(unsigned int n);

int main(){
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    cout << "Factorial of " << n << " is " << factorialR(n) << endl;
    return 0;
}

double factorial(unsigned int n){
    double result = 1;
    for(int i=1;i<=n;i++){
        result *= (double)i;
    }
    return result;
}

double factorialR(unsigned int n){
    if(n==0){
        return 1;
    }
    return (double)(n*factorialR(n-1));
}
