#include<iostream>
using namespace std;
int main()
{
    /*bitwise operators
    binary operators(integer,integer)

    <<(shift left)
    >>(shift right)


    &(bitwise and)
    |(bitwise or)
    ^(bitwise xor)
    */
    int x=6<<3;//12*2^3
       cout<<"x:"<<x<<endl;

    int a=45,b=4;
    int y=a>>b;//y=a/2^b
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    cout<<"y:"<<y<<endl;
    int k=5&2;//101&010
    cout<<"k="<<k<<endl;

    int l=5|2;//101|010
    cout<<"l="<<l<<endl;
    int m=5^2;//101^010
    cout<<"m="<<m<<endl;
    int comb=55|(45^89)&(8);
    cout<<"comb="<<comb<<endl;





    return 0;
}