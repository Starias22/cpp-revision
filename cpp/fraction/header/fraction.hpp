#include <iostream>
#include <vector>
#include <algorithm>
#include <regex>
using namespace std;
 using tabstr=vector<string>;
 int gcd(int a,int b);
tabstr split(string,string sep="/");
int power(int a,int n);
class fraction{
    
    int num;
    int den;
    void simplify();
    public :
            fraction(int num,int den,bool symp=false);
            fraction(string frac);
            fraction inverse();
            fraction(float dec);
            fraction(double dec);
            //fraction(fraction & f);
            
            bool operator==(fraction f);
            void operator =(string frac);
            void operator =(float frac);
            bool operator!=(fraction f);
            fraction operator!();
            bool operator<(fraction f);
            bool operator>=(fraction f);
            bool operator>(fraction f);
            bool operator<=(fraction f);
            fraction operator+(fraction f);
            fraction operator+(int number);
            fraction operator-(int number);
            fraction operator/(int number);
            fraction operator*(int number);
            fraction operator-(fraction f);
            fraction operator+();
            fraction operator-();
            fraction operator*(fraction f);
            fraction operator/(fraction f);
            fraction operator+=(fraction f);
            fraction operator-=(fraction f);
            fraction operator*=(fraction f);
            fraction operator/=(fraction f);
            fraction operator+=(int);
            fraction operator-=(int);
            fraction operator*=(int);
            fraction operator/=(int);
            fraction operator++();
            fraction operator--();



            void operator<<(fraction f);
            void displayn(bool frac=false);
            void display(bool frac=false);

        

};