#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include "Date.h"
using namespace std;

void Date::init(int m, int d, int y){
    month, day, year = m, d, y;
}
void Date::init(){
    
}

void Date::print(void){
    cout << month << "/" << day << "/" << year << endl;
}