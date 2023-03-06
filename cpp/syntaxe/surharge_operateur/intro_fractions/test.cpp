#include <iostream>
using namespace std;


struct Fraction{
    int num;
    int den;
};

Fraction add(Fraction f, Fraction g)
{
    int num{f.num*g.den+f.den*g.num},den{f.den*g.den};
    return{num,den};
}

Fraction multiply(Fraction f, Fraction g)
{
    int num{f.num*g.num},den{f.den*g.den};
    return{num,den};
}
int main()
{
    Fraction f{5,4},g,h;
    cout<<"Fraction f:"<<f.num<<"/"<<f.den<<endl;
    g.num=6;
    g.den=11;
    cout<<"Fraction g:"<<g.num<<"/"<<g.den<<endl;
    h=f;
    cout<<"Fraction h:"<<h.num<<"/"<<h.den<<endl;
    //h=f+g; won't work
    h=add(f,g);
    cout<<"Fraction f+g:"<<h.num<<"/"<<h.den<<endl;



    

    return 0;
}