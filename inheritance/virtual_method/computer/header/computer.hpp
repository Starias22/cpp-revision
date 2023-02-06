#include<iostream>
using namespace std;

class motherboard{

//the x resolution
protected :int processor,
//the y resolution

speed,
//the ram
ram;
public:
motherboard(int proc,int spd,int rm);
//show informations about motherboard
void show();

};

class monitor{
    protected:
    //the type of monitor
string type;
    //the color of monitor
long color=0;
//the x resolution
int x_reso,
//the y resolution

y_reso;
public:
monitor(string t="",long col=0,int x=0,int y=0);
//show informations about monitor
virtual void show();

};

class computer:public monitor,motherboard{
    string name;
    int hdrive;
    float reader ;
    public:
    computer(string nm="",int hd=0,float rd=0,
            string t="",long col=0,int x=0,int y=0,
            int proc=0,int spd=0,int rm=0);
    virtual void show();

};