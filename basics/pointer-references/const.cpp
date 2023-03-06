#include<iostream>
using namespace std;

int main()
{   int a=10;
    int b=40;
    const int *ptr=&a;
    cout<<"a: "<<*ptr<<endl;
    //ptr re-assigned: ptr points on b
    ptr=&b;
    cout<<"b: "<<*ptr<<endl;
    cout<<"typeof ptr: "<<typeid(ptr).name()<<endl;

    //*ptr=45;//error ptrread-only

    auto q=ptr;
    cout<<typeid(q).name();

    int * pt=(int *)ptr;
    cout<<"typeof pt: "<<typeid(pt).name()<<endl;
    *pt=-102;
    cout<<"b: "<<b<<endl;
    char ch='a';
    char const *pcc=&ch;

    //auto pc=static_cast<char*>(pcc);
 /*error: not allowed*/
    return 0;
}