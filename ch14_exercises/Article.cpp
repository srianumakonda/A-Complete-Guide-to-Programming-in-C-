#include <iostream>
#include <string>
#include <cmath>
#include "Article.h"
using namespace std;

extern int count = 0;

Article::Article(long number=0, const string& name="noname", double price=0.0){
    setNumber(number);
    setName(name);
    setPrice(price);
    cout << "An object of type Article " << name << " is created." << endl;
    cout << "This is the" << ++count << "Article." << endl;
}
Article::~Article(){
    cout << "The object of type Article " << name << " is destroyed." << endl;
    cout << "There are still" << --count << "articles." << endl;
}   
void Article::print(){
    cout << "Article " << name << " has number " << number << " and price " << price << endl;
}