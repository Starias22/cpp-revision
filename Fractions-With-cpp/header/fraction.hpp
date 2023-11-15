#include <iostream>
#include <vector>
#include <algorithm>
#include <regex>
using namespace std;
using tabstr=vector<string>;
int gcd(int a,int b);
tabstr split(string,string sep="/");
int power(int a,int n);
/*This classis intended for mathematical fraction numbers operaions */
class fraction{
    /*Each fraction has a numeretor and a denominetor*/

    int num;
    int den;
    /*The rule of this method is to simplify a fraction*/
    void simplify();
    public :
            fraction();
            fraction(int num,int den,bool symp=true);
            fraction(string frac);
            ~fraction();
            //fraction operator[](const int dim);
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
            bool operator<(int );
            bool operator<=(int );
            bool operator>(int );
            bool operator>=(int );
            bool operator!=(int );
            bool operator==(int );
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
            //friend ostream &operator<<( ostream &output, const fraction &f );
            friend ostream& operator<<( ostream &output,  fraction &f )
    {
    f.display();
    return output;
}
            friend istream &operator>>( istream  &input, fraction &f ) {
            input >> f.num >> f.den;
            return input;
        }
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
            void displayt(bool frac=false);



};