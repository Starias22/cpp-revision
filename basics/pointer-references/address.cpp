#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"(int)The address of a is: "<<&a<<endl;
    a=58;
    cout<<"(int)The address of a is: "<<&a<<endl;
    bool x=true;
    cout<<"(bool)The address of  x is: "<<&x<<endl;
    string str;
    cout<<"(str)The address of str is: "<<&str<<endl;

    return 0;

}