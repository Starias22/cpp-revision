#include<iostream>

using namespace std;
int main()

{

int a;
try
{
     a=2/0;
    cout<<"a="<<a<<endl;
}
catch(runtime_error & e)
{
    cout<<"Division by zero error:"<<e.what();
}
    return 0;
}