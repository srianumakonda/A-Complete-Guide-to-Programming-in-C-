// note -> im just doing one exercise, because all of them are siilar in nature
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Article
{
    private:
        long number;
        string name;
        double price;
    public:
        Article(long, const string&, double);
        ~Article();
        void print();
        void setNumber(long number){this->number = number;}
        void setName(const string& name){
            if (name.length() > 0) this->name = name;
            else this->name = "noname";
        }
        void setPrice(double price){this->price = price < 0.0? 0.0 : price;}
        inline const long getNumber() const {return number;}
        inline const string& getName() const {return name;}
        inline const double getPrice() const {return price;}
};