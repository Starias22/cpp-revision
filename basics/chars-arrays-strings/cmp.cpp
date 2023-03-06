#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n=strcmp("Bmstrong","amstrong");
    cout<<"n="<<n<<endl;

    n=strcmp("HELLO","HELLO");
    cout<<"n="<<n<<endl;

    n=strcmp("hello","HELLO");
    cout<<"n="<<n<<endl;

    n=strncmp("hello","hello4",5);
    cout<<"n="<<n<<endl;

    n=strcasecmp("heLlo","HElLO");
    cout<<"n="<<n<<endl;

    n=strcmp("hello","hello5");
    cout<<"n="<<n<<endl;



    return 0;
}