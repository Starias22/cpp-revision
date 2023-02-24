#include<iostream>
using namespace std;

int main()
{
    /*arithmetic operators
+ -  * / %
    */
    cout<<"8+9="<<8+9<<endl;
    int a=45-20;
    cout<<"a="<<a<<endl;
    int b=a*5;
    cout<<"b="<<b<<endl;
    auto y=b/25;
    cout<<"y="<<y<<endl;
    cout<<"type(y):"<<typeid(y).name()<<endl;
//in division
    auto z=10/3;
    cout<<"z="<<z<<endl;
    //add 45 to the previous value of z
    z=z+45;
    cout<<"z="<<z<<endl;
    //modulo
    int x=48;
    int k=22;
    cout<<"x%k="<<x%k<<endl;
    x=55;
    k=5;
    cout<<"x%k="<<x%k<<endl;
    int const xx=85;
    cout<<"x+xx="<<xx+x<<endl;
    //unary + and -
    float j=96;
    float l=-j;
    cout<<"l="<<l<<endl;
    l=-l;
    cout<<"l="<<l<<endl;
    l=+l;
    cout<<"l="<<l<<endl;












    return 0;
}