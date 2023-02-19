#include<iostream>
using namespace std;

int main()
{
    cout<<"Variable in C++\n";


    int age;
    cout<<"age="<<age<<endl;
    age=28;
    cout<<"age="<<age<<endl;

    //an integer variable
    int a=25;
    cout<<"a="<<endl;
    float tail=1.77;
    cout<<"I'm "<<tail<<" meters long\n";
    double price=1568254.457;
    cout<<"The jacket costs $"<<price<<endl;
    bool am_good=true;
    cout<<"I'm I good? "<<am_good<<endl;
    tail=1.88;
    cout<<"Codjo is "<<tail<<" meters long\n";
    am_good=false;
    cout<<"I'm I good? "<<am_good<<endl;
    char ch='a';
    cout<<"ch: "<<ch<<endl;
    cout<<boolalpha<<am_good<<endl;
    cout<<true<<endl;
    cout<<noboolalpha;
    cout<<am_good<<endl;
    long ln=145968236789;
    cout<<"A long integer:"<<ln<<endl;

    long x=9;
    cout<<"x: "<<x<<endl;

    short sh=25;
    cout<<"sh="<<sh<<endl;
    unsigned int uint=25;
    cout<<"uint="<<uint<<endl;
    unsigned long long  ull=8578999999999987899;
    cout<<"ull: "<<ull<<endl;
    age=a;
    cout<<"age:"<<age<<endl;

    int ascii='A';
    cout<<"asci_A: "<<ascii<<endl;
    ascii='B';
    cout<<"asci_B: "<<ascii<<endl;
    ascii='Z';
    cout<<"asci_Z: "<<ascii<<endl;
    ascii='a';
    cout<<"asci_a: "<<ascii<<endl;
    ascii='D';
    cout<<"asci_D: "<<ascii<<endl;
    ascii='b';
    cout<<"asci_b: "<<ascii<<endl;
    ascii='%';
    cout<<"asci_%: "<<ascii<<endl;
    ascii='+';
    cout<<"asci_+: "<<ascii<<endl;
ascii='0';
    cout<<"asci_0: "<<ascii<<endl;
    ascii='1';
    cout<<"asci_1: "<<ascii<<endl;
    ascii='9';
    cout<<"asci_9: "<<ascii<<endl;

    ch=68;
    cout<<"ch: "<<ch<<endl;
    float f=15.8f;
    float g=2.;
    cout<<"f: "<<f<<endl;
    cout<<"g: "<<g<<endl;


    //type
    cout<<"typeid(ch).name(): "<<typeid(ch).name()<<endl;
    cout<<"typeid(age).name(): "<<typeid(age).name()<<endl;
    cout<<"typeid(am_good).name(): "<<typeid(am_good).name()<<endl;
    cout<<"typeid(g).name(): "<<typeid(g).name()<<endl;
    cout<<"typeid(f).name(): "<<typeid(f).name()<<endl;
    cout<<"typeid(sh).name(): "<<typeid(sh).name()<<endl;
    cout<<"typeid(ln).name(): "<<typeid(ln).name()<<endl;
    cout<<"typeid(uint).name(): "<<typeid(uint).name()<<endl;

    cout<<"typeid(double).name(): "<<typeid(double).name()<<endl;
    cout<<"typeid(int).name(): "<<typeid(int).name()<<endl;
    cout<<"typeid(float).name(): "<<typeid(float).name()<<endl;

    //in so one


        cout<<"6: "<<typeid(6).name()<<endl;
        cout<<"689745: "<<typeid(689745).name()<<endl;
        cout<<"689745L: "<<typeid(689745L).name()<<endl;
        cout<<"6897.56: "<<typeid(6897.56).name()<<endl;
        cout<<"6897.56f: "<<typeid(6897.56f).name()<<endl;
        ln=8974L;
        f=78.f;
        //float t=55.d;







       //size
    cout<<"sizeof(int)"<<sizeof(int)<<endl;
    cout<<"sizeof(float)"<<sizeof(float)<<endl;
    cout<<"sizeof(bool)"<<sizeof(bool)<<endl;
        cout<<"sizeof(ong long)"<<sizeof(long long)<<endl;

        cout<<"sizeof('5')"<<sizeof('5')<<endl;


    cout<<"sizeof(0.89)"<<sizeof(.89)<<endl;
    cout<<"sizeof(.89L)"<<sizeof(.89789L)<<endl;
    double k(89);
    int z(78);
    k=56.f;

    //-2^(n-1)  2^(n-1) -1

    bool xy=-259;
    cout<<"xy="<<xy<<endl;

    auto val=66.f;
    cout<<"val:"<<typeid(val).name()<<endl;
            auto pp=78Ull;


int min_int=-2147483648;
int max_int=2147483647;
cout<<"min_int: "<<min_int<<endl;
cout<<"max_int: "<<max_int<<endl;
cout<<"type(min_int):"<<typeid(-2147483648).name()<<endl;
cout<<"type(min_int):"<<typeid(min_int).name()<<endl;

cout<<"type(max_int):"<<typeid(2147483647).name()<<endl;
cout<<"type(max_int):"<<typeid(max_int).name()<<endl;
int exced_right=2147483648;
cout<<"exced right: "<<exced_right<<endl;





        return 0;
}