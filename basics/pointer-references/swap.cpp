#include<iostream>
using namespace std;
void swap(int *a,int*b){
  //intermediaire
  int c=*a;
  *a=*b;
  *b=c;
}
int main()
{
    int var1=55, var2=-20;
    cout<<"Before swaping:\n";
    cout<<"var1: "<<var1<<endl;
    cout<<"var2: "<<var2<<endl;

    swap(&var1,&var2);

    cout<<"After swaping:\n";
    cout<<"Before swaping:\n";
    cout<<"var1: "<<var1<<endl;
    cout<<"var2: "<<var2<<endl;

    return 0;
}