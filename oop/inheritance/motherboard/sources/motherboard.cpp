#include"../header/motherboard.hpp"


motherboard::motherboard(int proc,int spd,int rm){

   processor=proc;
    speed=spd;
    ram=rm;

}
void motherboard::show_motherboard(){

    cout<<"Processor: "<<processor<<endl;
    cout<<"Speed: "<<speed<<endl;
    cout<<"RAM: "<<ram<<endl;

}