#include<iostream>
#define N 10
using namespace std;

int main()
{
    //10 items: 8 initialized
    int tab[N]{-2,6,10,9,8,7,5,6};
    cout<<"Second element: "<<*(tab+1)<<endl;
    *(&tab[4])=55;
    cout<<"5th element: "<<*(tab+4)<<endl;
    tab[5]++;
    cout<<"6th element: "<<*(tab+5)<<endl;
    int *ptr=tab;//ptr points on tab[0] too
    //now ptr points on tab[5]
    ptr+=5;
    cout<<*ptr<<endl;
    ptr-=2;//now ptr points on tab[3]
        cout<<*ptr<<endl;

    int *q=tab+2; //q points on tab[2]
    cout<<*q<<endl;
    q--;//now q points on tab[1]
    auto j=&tab[1]+2;//j points on tab[3]
        cout<<*j<<endl;
        cout<<j[0]<<endl;

        //cout<<j[45]<<endl;
        //tab[45]=20;
    return 0;
}