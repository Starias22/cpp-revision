#include<iostream>
using namespace std;
int main()
{
    //let's print * 10 times
    //cout<<"**********"<<endl;
    //but if count so enorm
    int count=0;
    while (count!=10)
    {
        cout<<"*\t";
        count++;//or ++count
    }
    cout<<"\n";
    //print count
    cout<<"count= "<<count<<endl;
    if(count==10)
    cout<<"Of course\n";
    //print fom 1 to 10
    for(count=1;count<=10;count++)
    //{
        cout<<count<<'\t';
    //}
    cout<<"\n";
    cout<<"count= "<<count<<endl;//11
    //print from 10 to 1 using do while
    count=10;
    do{
        cout<<count<<'\t';
        count--;

    }while(count!=0);
        cout<<"\n";

    if(count==0)
    cout<<"Of course :count=0\n";
while (true)

        cout<<"Hello infinite loop";

    return 0;
}