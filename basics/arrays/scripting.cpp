#include<iostream>
using namespace std;

int main()
{
    //size=6
    int tab[]={4,5,-6,-9,9,-60};
    cout<<"for loop\n";
    for(int i=0;i<6;i++)
        cout<<tab[i]<<'\t';
            cout<<endl;


    int j=0;
    /*or int  i=0, since i doesn't exist*/
    cout<<"while loop\n";
    while(j<6)
    {
        cout<<tab[j]<<'\t';
        j++;

    }
    cout<<endl;
    return 0;
}