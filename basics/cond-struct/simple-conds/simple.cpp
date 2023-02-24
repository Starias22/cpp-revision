#include<iostream>
using namespace std;
int main()
{
    int var=55;
    int mark=15;
    //if
    if (mark>=12)
        cout<<"You succed\n";
        //change it before continue
        //mark=8

    //if else
    mark=10;
    if(mark>=12)
        cout<<"You succed\n";

    else
        cout<<"You fail\n";


    mark=-20;
    if (mark<0)
    {
        //2 instrucions: brackets required
        cout<<"Not a mark: ";
        cout<<"Negative"<<endl;
        cout<<"var: "<<var<<endl;
    }
    //with else if mark>=0
    else if (mark<10)
    {//single instruction:brackets not required
        cout<<"So bad!";
    }
    else if(mark<12)
        cout<<"bad!"<<endl;
    else if (mark==12)
        cout<<"just validate!"<<endl;


    else if (mark<16)
    cout<<"good!";
    else if(mark<=20)
    cout<<"Congrats";

    else //mark>20
    {
    cout<<"Not a mark";
    cout<<"Greayter than 20\n";
    cout<<"var: "<<var<<endl;
    }
    return 0;
}