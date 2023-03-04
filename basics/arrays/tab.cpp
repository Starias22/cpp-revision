#include<iostream>
using namespace std;

int main()
{
    //arrays initialization
    //array of 5 integers
    int tab[5]={1,2,3,4,5};
    //=can be omited
    float tabf[5]{6.55,-8.8,6,7,9};

    //deduce the size
    double tabd[]{6,8,9.8,10};
    //daclaration without init: all elements are 0(false)
    bool tabb[5];
    //5 items,3 initialized
    string tabs[5]{"First","Second","Third"};
    cout<<tabb[2]<<endl;
    return 0;
}