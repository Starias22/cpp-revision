#include<iostream>
#include<cmath>

using namespace std;

int main()

{

double x,y;
x=sqrt(64);

cout<<"sqrt(64)="<<x<<endl;

/*y= sqrt(-5);
cout<<"y="<<y<<endl;*/

try{

    y= sqrt(-5);
cout<<"y="<<y<<endl;
}
catch(domain_error & e)
{

   cout<<"An exception occured: domain error"<<e.what()<<endl;
}

    return 0;
}