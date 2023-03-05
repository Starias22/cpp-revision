#include<iostream>
#include<cstring>

using namespace std;

int main()
{

    char str[6]{'H','e','l','l','o','\0'};
    char str2[6]={'H','e','l','l','o'};
    cout<<"The first element of str is:"<<*str<<endl;

    cout<<"dd: "<<&str[0]<<endl;
    auto x=&str[0];
    char *y=str;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    auto z=static_cast<void*>(x);
    cout<<"z: "<<(void*)x<<endl;


    if(*str==str2[0])
        cout<<"Of course\n";

    if (str[5]=='\0'&& *(str2+5)=='\0')
        cout<<"That's right\n";

        char tab[]={'H','o','w','?','\0'};//size=5
        char tab2[]="How?";
    cout<<"sizeof(tab)/sizeof(char): "<<sizeof(tab)/sizeof(char)<<endl;
    cout<<"strlen(tab): "<< strlen(tab)<<endl;
cout<<"sizeof(tab2)/sizeof(char): "<<sizeof(tab2)/sizeof(char)<<endl;
    cout<<"strlen(tab2): "<< strlen(tab2)<<endl;
    char hello[]="Hello world!";
        cout<<"strlen(hello): "<< strlen(hello)<<endl;

    //char chr[5]="HELL\0";
    //print str
    /*cout<<str<<endl;
    cout<<str[0]<<endl;

    str[3]='!';
    cout<<str<<endl;

    *(str+4)='O';

    cout<<str<<endl;
                //return 0;

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
    cout<<st<<endl;*/

    //char xxx[10];
    //cout<<"xxx:"<<xxx;


    return 0;
}