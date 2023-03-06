#include<iostream>
using namespace std;
enum class Day{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Satursday,
    Sunday
};
void check(Day d){
    if(d==Day::Satursday|| d==Day::Sunday)
    cout<<"Good week bro!\n";
    else 
    cout<<"Work hard bro!\n";
}

int main()
{
    Day d1{Day::Satursday}, d2=Day::Friday;
    check(d1);
    check(d2);
return 0;
}