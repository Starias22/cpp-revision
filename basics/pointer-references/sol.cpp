#include<iostream>
using namespace std;
void change(int *ptr){
    /* chage the value of the
      variable pointed by ptr*/
    *ptr=90;
}
int main()
{
    int var=-10;
    cout<<"Before changement: "<<var<<endl;
    change(&var);
    cout<<"After changement: "<<var<<endl;
    return 0;
}