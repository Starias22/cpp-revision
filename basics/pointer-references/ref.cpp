#include<iostream>
using namespace std;
int main()
{
    int a=99;
    int b=a;
    cout<<"Test 1\n";
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"\n";

    cout<<"Test 2\n";
    //b is decremented
    b--;
    cout<<"b:"<<b<<endl;
    /*a is not affected by the
    decrementation of b
    */
    cout<<"a:"<<a<<endl;
    cout<<"\n";

   //reference
    cout<<"Test 3\n";
    int& h=a;
    cout<<"a:"<<a<<endl;
    cout<<"h:"<<h<<endl;
    cout<<"\n";

    cout<<"Test 4\n";
    h=8;//a is also set to 8
    cout<<"a:"<<a<<endl;
    cout<<"h:"<<h<<endl;
    cout<<"\n";

    cout<<"Test 5\n";
    h*=5;//h=40 a also
    cout<<"h:"<<h<<endl;
    cout<<"a:"<<a<<endl;


    cout<<"Test 6\n";
    a=-45;// h also
    cout<<"h:"<<h<<endl;
    cout<<"a:"<<a<<endl;
    cout<<typeid(h).name()<<endl;
    h=b;
    h=9999;
     cout<<"h:"<<h<<endl;
    cout<<"a:"<<a<<endl;
     cout<<"h:"<<h<<endl;
    cout<<"b:"<<b<<endl;


    return 0;

}