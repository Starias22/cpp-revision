#include<iostream>
using namespace std;

class monitor{
    //the type of monitor
string type;
    //the color of monitor
long color;
//the x resolution
int x_reso,
//the y resolution

y_reso;
public:
monitor(string t,long col,int x,int y);
//show informations about monitor
void show_monitor();

};