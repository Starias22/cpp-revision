#include<iostream>
using namespace std;
int main()
{
    //a is an int variable
    int a;
    /*ptr is a pointer that contains
    the addreess of a: ptr points on a*/
    int *ptr=&a;
    // Pi: pointer on integer
    cout<<typeid(ptr).name()<<endl;

    return 0;
}