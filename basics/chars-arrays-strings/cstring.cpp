#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char greet[]="Hello";
    char example[10]="example";
    cout<<"strlen(greet): "<<strlen(greet)<<endl;
    cout<<"strlen(example): "<<strlen(example)<<endl;

    char love[10]{'L','o','v','e','\0'};
    cout<<"strlen(love): "<<strlen(love)<<endl;
    cout<<"strlen(\"peace\"): "<<strlen("peace")<<endl;

    return 0;
}