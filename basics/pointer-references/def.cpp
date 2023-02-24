#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    if (ptr==0)
        cout<<"ptr is null\n";
    else
        cout<<"ptr is not null\n";
    cout<<"ptr: "<<ptr<<endl;
    /*not recommended because ptr is
    not initialized*/
    cout<<"*ptr: "<<*ptr<<endl;
    //segmentation error
    *ptr=55;
        return 0;
}