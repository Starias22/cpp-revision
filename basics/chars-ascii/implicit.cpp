#include<iostream>
using namespace std;

int main()
{
    char ch=65;//A
    cout<<"ch: "<<ch<<endl;
    char x(122);//z
    cout<<"x: "<<x<<endl;
    char y{100};//d
    cout<<"y: "<<y<<endl;
    char z(9);//not printable
    cout<<"z: "<<z<<endl;
    ch=99;
    cout<<"ch: "<<ch<<endl;
    ch++;//100(d)
    cout<<"ch: "<<ch<<endl;

    return 0;
}