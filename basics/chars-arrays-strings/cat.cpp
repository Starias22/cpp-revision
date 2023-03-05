#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char greet[]="Hello";
    char example[10];
    strcat(example,"example");
    cout<<"strlen(example) :"<<strlen(example)<<endl;
    cout<<"example: "<<example<<endl;
    strcat(example,"se");
    cout<<"strlen(example) :"<<strlen(example)<<endl;

    cout<<"example(after): "<<example<<endl;
    /*wrong: execution error*/
    strcat("lglg",example);
    strcat(example,"morelarger");

    strncat(example,"newst",5);
    cout<<"example(after): "<<example<<endl;
    strncat(example,"new",5);
    cout<<"example(after): "<<example<<endl;
    return 0;
}