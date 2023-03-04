#include<iostream>
using namespace std;

int main()
{
    int tab[5]={2,9,-6};
    cout<<"tab: "<<tab<<endl;
    //deduce the type of tab
    auto v=tab;
    if (typeid(v)==typeid(int *))
        cout<<"tab is a pointer on an integer\n";
    if(tab==&tab[0])
        cout<<"tab points on the first item\n";
//int j=-2;
//tab[-1]=4;
    //cout<<tab[-1];
    return 0;
}