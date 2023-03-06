#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr=new int;
    *ptr=45;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    (*ptr)+=100;
    cout<<"*ptr: "<<*ptr<<endl;
    delete ptr;
    return 0;
}