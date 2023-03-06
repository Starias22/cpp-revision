#include<iostream>
#include<vector>
#define N 10
using namespace std;



//typedef vector<int> v;

int main()
{
    /*without this the generated numbers
    won't change from an execution to another*/
    srand(time(0));

    vector<int> tab;
    for(int i=0;i<N;i++)
    tab.push_back(rand());
    auto ptr=tab.begin();
    while(ptr!=tab.end())
    {
    cout<<*ptr<<endl;
    ptr++;
    }



    return 0;
}