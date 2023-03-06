#include<iostream>
using namespace std;

int main()
{

    int *ptr;
    //allocate memory
    ptr=(int*) malloc(sizeof(int));//or 4
    //use memory
    *ptr=45;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    (*ptr)++;
    cout<<"*ptr: "<<*ptr<<endl;
    (*ptr)*=2;
    cout<<"*ptr: "<<*ptr<<endl;

    --(*ptr);
    cout<<"*ptr: "<<*ptr<<endl;
    //free memory
    free(ptr);
    return 0;
}