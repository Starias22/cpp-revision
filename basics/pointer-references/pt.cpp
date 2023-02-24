#include<iostream>
using namespace std;
int main()
{  /*p is a pointer on a float variable
 but is not initialize*/
    float *p;
    double*dp=NULL;// dp=o or nullptr
    //Pd
    cout<<typeid(dp).name()<<endl;
    //Pf
    cout<<typeid(p).name()<<endl;
    int a;
    //p=&a;//error
    float x;
    p=&x;
    //pp is type int*
    auto pp=&a;
    if (typeid(pp)==typeid(int *))//or int*
        cout<<"Of course\n";

         /*const int *ppp=&a;
        int c;
        ppp=&c;*/
    return 0;
}