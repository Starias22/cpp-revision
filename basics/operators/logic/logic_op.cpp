#include<iostream>
using namespace std;
int main()
{
    /*logical operator:return true or false
    &&(and)
    ||(or)
    !(not)(unary) */
bool a=true&&true;
bool b=true&&false;
bool c=false&&true;
bool d=true&&false;
cout<<"a: "<<a<<endl;
cout<<"b: "<<b<<endl;
cout<<"c: "<<c<<endl;
cout<<"d: "<<d<<endl;
cout<<boolalpha<<"!a:"<<(!a)<<endl;
a=true||true;
 b=true||false;
 c=false||true;
 d=true||false;
cout<<"a: "<<a<<endl;
cout<<"b: "<<b<<endl;
cout<<"c: "<<c<<endl;
cout<<"d: "<<d<<endl;
bool x=3>=5&& 9!=6;
cout<<"x: "<<x<<endl;
x=3>=5|| 9!=6;
cout<<"x: "<<x<<endl;
auto y=!a+(x-b)||(c&&d*3);
cout<<noboolalpha<<"y: "<<y<<endl;
//short-circuit


/*cout<<"true xor false "<<(true^^false)<<endl;
cout<<"false xor false "<<(false^false)<<endl;
cout<<"true xor true "<<(true^true)<<endl;*/




    return 0;
}