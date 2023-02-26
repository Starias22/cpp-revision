#include<iostream>
using namespace std;
int main()
{

    //simple pointers
    //ptr is created but not initialized

    int *ptr;
    //it will contains an undetermined anddress as value
    cout<<"ptr="<<ptr<<endl;
    //get the address of ptr
    cout<<"&ptr="<<&ptr<<endl;
    /*the value at the address pointed by ptr:
    an undetermined int value  for ptr has not been initialized*/


    //*ptr=45; //segmentation error(at runtime)
    // creation and initialization of a pointeur to null
    //it doesn't point to any address
    int *pt=nullptr; // or NULL or 0
    //get the address of ptr
    cout<<"&pt="<<&pt<<endl;
    cout<<"pt="<<pt<<endl;
    //cout<<"*pt="<<*pt<<endl;// segmentation error
    *ptr=85;// why no error?
    //cout<<"*pt="<<*pt<<endl; //segmentation error

    int a;
    pt=&a;
    cout<<"&pt="<<&pt<<endl;
    cout<<"pt="<<pt<<endl;
    cout<<"*pt="<<*pt<<endl;
    if(a==*pt)
    cout<<"a equals *ptr\n";

     a=15;
    cout<<"*pt="<<*pt<<endl;
    if(pt==&a)
    cout<<"pt equals &a\n";
    else
    cout<<"pt not equals &a\n";
    int b=50;
    pt=&b;
    if(pt!=&a)
    cout<<"pt's value has been changed\n";
    int c=8;
   *pt=c;
    cout<<"b="<<b<<endl;
    if(pt==&b)
    cout<<"pt's value has not been changed\n";

    return 0;
}