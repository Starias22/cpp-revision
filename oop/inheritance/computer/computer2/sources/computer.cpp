#include"../header/computer.hpp"


monitor::monitor(string t,long col,int x,int y){
    type=t;
    color=col;
    x_reso=x;
    y_reso=y;

}
void monitor::show(){
    cout<<"Type of monitor: "<<type<<endl;
    cout<<"Color of the monitor:"<<color<<endl;
    cout<<"x-resolution of the monitor: "<<x_reso<<endl;
    cout<<"y-resolution of the monitor: "<<y_reso<<endl;

}
motherboard::motherboard(int proc,int spd,int rm){

   processor=proc;
    speed=spd;
    ram=rm;

}
void motherboard::show(){

    cout<<"Processor: "<<processor<<endl;
    cout<<"Speed: "<<speed<<endl;
    cout<<"RAM: "<<ram<<endl;

}
//constructor delegation
computer::computer(string nm,int hd,float rd,
            string t,long col,int x,int y,
            int proc,int spd,int rm):
            monitor(t,col,x,y)
            ,
            motherboard(proc,spd,rm)
{
        //monitor(type,color,x_reso,y_reso);
        //motherboard(processor,speed,ram);
        name=nm;
        hdrive=hd;
        reader=rd;
}
void computer::show(){
    cout<<"Name of the computer: "<<name<<endl;
    cout<<"Hard drive: "<<hdrive<<endl;
    cout<<"Reader: "<<reader<<endl;
    monitor::show();
    motherboard::show();

}