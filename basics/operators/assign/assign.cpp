#include<iostream>
using namespace std;
int main()
{
    /*assignment operators
    these operators are binary operators
    assign or re-assign
    a value to a variable
    the first operand is necc
    a variable and the second
    can be a var or a value
    they are mostly applied to
    numeric variables
    =
    +=
    -=
    *=
    /=
    %=
    <<=
    >>=
    &=
    |=
    ^=
    */
    int age=25;
    cout<<"age: "<<age<<endl;
    //arithmetic

    age+=20;//age=age+20
    cout<<"age: "<<age<<endl;
    short k=45;
    cout<<"k: "<<k<<endl;
    k-=25;//k=k-25
    cout<<"k: "<<k<<endl;
    k*=6;//k=k*6
    cout<<"k: "<<k<<endl;
    k/=2;
    cout<<"k: "<<k<<endl;
    int c=3;
    k/=c;
    cout<<"k: "<<k<<endl;
    k%=3;
    cout<<"k: "<<k<<endl;
    float j=45*89;
    cout<<"j: "<<j<<endl;
    j-=45.8;
    cout<<"j: "<<j<<endl;
    j/=3;
    cout<<"j: "<<j<<endl;
    j*=-15;

    //shift left and right
    cout<<"j: "<<j<<endl;
    k<<=3;//k=k*2^3
    cout<<"k: "<<k<<endl;
    k>>=4;
    cout<<"k: "<<k<<endl;
    k=7;

    //bitwise
    k&=4;//k=k|4
    cout<<"k: "<<k<<endl;
    k|=96;
    cout<<"k: "<<k<<endl;
    k^=88;
    cout<<"k: "<<k<<endl;











    return 0;
}