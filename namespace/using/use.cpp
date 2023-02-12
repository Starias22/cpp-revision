#include<iostream>
using std::cout;
//using std::cin

namespace nmsp
{
    int var=25;
    int k=15;
    void say_hello(){
        cout<<"Hello world!\n";
    }
}

namespace nmsp2
{
    int var=100;
    int k=19;
    bool val=true;
    float tl=1.75;

}


using namespace nmsp;
using nmsp2::val;
//using namespace nmsp2; // will lead to ambig
int main()
{
    cout<<"How are are things?\n";
    //cin not accessible
    cout<<"var="<<var<<std::endl;
    val=false;
    cout<<"val="<<std::boolalpha<<val<<std::endl;
    //tl=0;//not access

    return 0;
}