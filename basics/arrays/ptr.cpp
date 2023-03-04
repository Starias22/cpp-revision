#include<iostream>
using namespace std;

int main()
{
    int tab[5]={2,9,-6};
    cout<<"tab: "<<tab<<endl;
    auto v=tab;
    if (typeid(v)==typeid(int *))
        cout<<"tab is a pointer on an integer\n";

    cout<<"tab points on element with value "<<*tab<<endl;

    if(*tab==tab[0])
        cout<<"Of course\n";

    *tab=45;
    cout<<"First item: "<<tab[0]<<endl;

    tab[0]++;
    cout<<"First item:(after) "<<*tab<<endl;
    if(tab==&tab[0])
        cout<<"equal\n";
    int x;
            const int *p=&x;
            int a;
            p=&a;

    return 0;
}