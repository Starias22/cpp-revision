#include<iostream>
#define N 10
using namespace std;


int main()
{
    int tab[N]={0,1,8,-9,9,0,-9,0,4,0};
    //begin,end
    cout<<"begin(tab):"<<begin(tab)<<endl;
    cout<<"end(tab):"<<end(tab)<<endl;
    cout<<"The array contains:"<<end(tab)-begin(tab)
    <<" elements "<<endl;
    cout<<"typeid(begin(tab)).name(): "<<
    typeid(begin(tab)).name()<<endl;
    if(sizeof(tab)/sizeof(N))
    cout<<"Alright"<<endl;

   //min,max
    cout<<"min(2,3):"<<min(2,3)<<endl;
    cout<<"max(10,-3):"<<max(10,-3)<<endl;

    cout<<"max('A','a'):"<<max('A','a')<<endl;
    //wont work without s

    cout<<"min(\"Hello\",\"Hi\"):"<<min("Hello"s,"Hi"s)<<endl;

    cout<<"max(10.,-3):"<<max(10.0,-3.0)<<endl;
    cout<<"min(10.,-3.0):"<<min(10.0,-3.0)<<endl;
    //error
    //cout<<"max(10.,-3):"<<max(10.0,-3)<<endl;
    //cout<<"max(10.,-3):"<<max(10f,-3f)<<endl;

    float a=15,b=-66;
    cout<<"min(a,b):"<<min(a,b)<<endl;

    cout<<"max(10000L,-3L):"<<max(10000L,-3000L)<<endl;

    //sum(1,2);









    return 0;
}