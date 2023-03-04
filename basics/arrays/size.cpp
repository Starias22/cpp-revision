#include<iostream>
using namespace std;

int main()
{

    //size=6
    int tab[]={4,5,-6,-9,9,-60};
    //6*
    cout<<"tab occupies "<<sizeof(tab)<<" bytes in memory\n";

    cout<<"tab contains "<<sizeof(tab)/sizeof(int)<<" items\n";
    return 0;
    }