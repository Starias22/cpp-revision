#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char greet[]="Hello";
    char example[10];
    strcpy(example,"example");
    cout<<"example: "<<example<<endl;
    strcpy(example,greet);
    cout<<"example(after): "<<example<<endl;
    /*wrong: execution*/
    /* strcpy("lglg",example);
    strcpy(example,"morelarger");*/

    strncpy(example,"newst",5);
    cout<<"example(after): "<<example<<endl;
    strncpy(example,"new",5);
    cout<<"example(after): "<<example<<endl;
    return 0;
}