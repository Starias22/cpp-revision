#include<iostream>
using namespace std;
int main()
{
    int age=15;
    cout<<"age: "<<age<<endl;

    int *ptr=&age;
    //read age via ptr
    cout<<"age: "<<*ptr<<endl;
    //modify age via ptr
    *ptr=20;
    cout<<"age: "<<age<<endl;
    (*ptr)++;//age is incremented(21)
    cout<<"age: "<<*ptr<<endl;
    cout<<"age: "<<age<<endl;




    return 0;
}