#include<iostream>
using namespace std;

int main()
{
    char str[5]{'H','e','l','l','o'};
    //print str
    cout<<str<<endl;
    cout<<str[0]<<endl;
    str[3]='!';
    cout<<str<<endl;
    *(str+4)='O';
    cout<<str<<endl;
    char *pr=str+1;//pr points on str[1]
    pr++;//pr points on str[2]
    pr[0]='L';//str[2]='L'
    pr[-1]='E';//str[1]='E'
    cout<<str<<endl;

    char str2[]("Hello gays");
    char str3[]=("Hello girls!");
    char str4[]="Good morning\n";
    char *st="eer";
    //no erro but forbidden(not recommended)
    cout<<st<<endl;



    return 0;
}