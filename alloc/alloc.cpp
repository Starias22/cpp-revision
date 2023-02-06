#include<iostream>
#define N 10
#define R 3
#define C 4


using namespace std;
int main()
{
    int *ptr=new int;
    cout<<"ptr="<<ptr<<endl;
    cout<<"*ptr="<<*ptr<<endl;
    cout<<"&ptr="<<&ptr<<endl;
    *ptr=4;
    cout<<"ptr="<<ptr<<endl;
    cout<<"*ptr="<<*ptr<<endl;
    cout<<"&ptr="<<&ptr<<endl;
    delete ptr;//or delete[] ptr;
    cout<<"ptr="<<ptr<<endl;
    cout<<"*ptr="<<*ptr<<endl;
    cout<<"&ptr="<<&ptr<<endl;
    //delete ptr;  //error for ptr has already been freed
   // the size can benot not constant
   int *pt=new int[N];
   for(int i=0;i<N;i++)
        cout<<"pt["<<i<<"]="<<*(pt+i)<<endl;


    for(int i=0;i<N;i++)
    pt[i]=12;

    for(int i=0;i<N;i++)
        cout<<"pt["<<i<<"]="<<*(pt+i)<<endl;

cout<<sizeof(pt)<<endl;
cout<<sizeof(ptr)<<endl;

double *p=new double,*pr=new double[N];
cout<<sizeof(p)<<endl;
cout<<sizeof(pr)<<endl;
delete p;
delete [] pr;
cout<<sizeof(p)<<endl;






delete [] pt;

    ptr=new int;
    *ptr=78;
    delete  ptr;


    auto mat= new int[R][C];
    cout<<"typeid(ptr).name(): "<<typeid(ptr).name()<<endl;
    cout<<"typeid(pt).name(): "<<typeid(pt).name()<<endl;
    cout<<"typeid(mat).name(): "<<typeid(mat).name()<<endl;

    int *mine[C];
    cout<<"typeid(mine).name(): "<<typeid(mine).name()<<endl;

    int (*mr) [4]= new int[R][C];

    delete [] mat;

















    return 0;
}