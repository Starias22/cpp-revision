#include<iostream>
using namespace std;
void change(int val){
    val=90;
}
int main()
{
    int var=-10;
    cout<<"Before changement: "<<var<<endl;
    change(var);
    cout<<"After changement: "<<var<<endl;
    return 0;
}