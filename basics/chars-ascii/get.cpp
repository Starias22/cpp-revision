#include<iostream>
using namespace std;

int main()
{
    char ch='A';
    char ch2('z');
    char ch3='m',ch4('\n'),ch5('7');
    //implicit casting
    int A=ch;
    cout<<"ASCII code of A: "<<A<<endl;
    //explicit casting
    cout<<"ASCII code of B: "<<(int)'B'<<endl;
    cout<<"ASCII code of Z: "<<(int)'Z'<<endl;
    cout<<"ASCII code of a: "<<(int)'a'<<endl;

    cout<<"ASCII code of Y: "<<static_cast<int>('Y')<<endl;

     int Z=ch2;
    cout<<"ASCII code of z: "<<Z<<endl;
    //explicit casting
    cout<<"ASCII code of y: "<<(int)'y'<<endl;

    cout<<"ASCII code of 0: "<<(int)'0'<<endl;
    cout<<"ASCII code of 1: "<<(int)'1'<<endl;
    cout<<"ASCII code of 9: "<<(int)'9'<<endl;
    auto x='a'-'A',y='z'-'Z';
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<x<<endl;
    cout<<"The ASCII code of space is:"<<(int)' '<<endl;
    cout<<"The ASCII code of \n is:"<<(int)'\n'<<endl;
    cout<<"The ASCII code of the en of string char is:"<<(int)'\0'<<endl;


    return 0;
}