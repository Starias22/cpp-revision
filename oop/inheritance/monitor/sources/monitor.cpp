#include"../header/monitor.hpp"


monitor::monitor(string t,long col,int x,int y){
    type=t;
    color=col;
    x_reso=x;
    y_reso=y;

}
void monitor::show_monitor(){
    cout<<"Type of monitor"<<type<<endl;
    cout<<"Color of the monitor"<<type<<endl;
    cout<<"x-resolution of the monitor"<<type<<endl;
    cout<<"y resolution of the monitor"<<type<<endl;

}