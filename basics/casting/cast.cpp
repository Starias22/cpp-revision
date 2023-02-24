#include<iostream>
using namespace std;
int main()
{
    int x=4/2;
    float k=1/1.5;
    cout<<"x="<<x<<endl;
    cout<<"k="<<k<<endl;

    x=4/3;
    cout<<"x="<<x<<endl;
    float z=4/3;
    cout<<"z="<<z<<endl;
    cout<<"typeid(z).name()"<<typeid(z).name()<<endl;    cout<<"z="<<z<<endl;

    //solutions

    //using 3 as double
    z=4/3.;//or 3.0
    cout<<"z="<<z<<endl;
    z=2./3;
    cout<<"z="<<z<<endl;
    //use 3 as float
    z=8/3.0f;
    cout<<"z="<<z<<endl;
    z=55.0f/3;
    cout<<"z="<<z<<endl;
    z=(float)7/3;
    cout<<"z="<<z<<endl;
    z=7/(float)3;
    cout<<"z="<<z<<endl;
    //simple casting :use (type)value
    auto j=(float)45;
    float l=j/6;
    cout<<"j="<<j<<endl;
    cout<<"l="<<l<<endl;
    //static cast
    auto db=static_cast<double>(3)/8;
    cout<<"db="<<db<<endl;










    return 0;
}