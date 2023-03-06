#include<iostream>
using namespace std;

int main()
{   int const a=20;
    auto ptr=&a;
    cout<<"typeof ptr: "<<typeid(ptr).name()<<endl;
    if(typeid(ptr)==typeid(const int*))
        cout<<"ptr is for read-only\n";
    //*ptr=20;//error ptr is read-only

    // int *pt=&a;//error &a is read-only

    int *q=(int*)ptr;
    int *r=(int*)&a;
    cout<<"q: "<<q<<endl;
    cout<<"r: "<<r<<endl;
    cout<<"ptr: "<<ptr<<endl;


    *q=90;
    cout<<"a after: "<<a<<endl;

    *r=-90;
    cout<<"a after: "<<a<<endl;
    return 0;
}