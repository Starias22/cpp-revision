#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //cout<<"Hello gys\n";
    char  hello[10]="Hello";
    char const * x=NULL;
    x=strchr(hello,'e');
    const char *y;
    y=strchr("Hello",'E');

    cout<<"addr(x):"<<(void*)x<<endl;
    cout<<"adr(y):"<<(void*)y<<endl;

    cout<<"x:"<<x<<endl;
    //cout<<"y:"<<y;
    if(y==NULL)//or nullptr
    cout<<"y is nullptr\n";


    //cout<<"kfgkk\n";
    char*ptr=(char *)x;
    cout<<"ptr: "<<ptr<<endl;
    *ptr='E';//error

    cout<<"hello(after): "<<hello<<endl;

    auto z= strstr("Hello","lo");
   //strcasestr("vv","k");
    cout<<"z: "<<z<<endl;
   //strrchr("kjfk",5);



    return 0;
}