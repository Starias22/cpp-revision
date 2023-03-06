#include<iostream>
using namespace std;


void display_rectangle(int length,int width)
{
    int i,j;
    for (i=0;i<length;i++)
    {
         for (j=0;j<width;j++)
             cout<<"*";

    cout<<"\n";
    }

}

int main()
{
display_rectangle(4,3);

    return 0;
}

