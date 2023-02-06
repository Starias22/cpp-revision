#include"../header/computer.hpp"

int main()
{
    computer cpt;
    //cpt.show();
    /*computer*c;
    c=new computer;
    c->show();
    delete c;

    monitor *m;
    if(rand()==0)
        m=new monitor;
    else
        m=new computer;
    m->show();
    delete m;
computer cp;
    cp.show();*/

    //m is a pointer on monitor
    monitor *m;
    // m points on an instance of monitor
    m=new monitor;
    m->show();

    /*m points on an object, instance of computer,
     the derived class*/
    m=new computer;
    m->show();
/*Lest's considerate two classes A and B, where
the last one inherits the first one
 Let's call meth a mothod of the class A inherited
 and redifined by B(with the same signature)
 Let's consider a pointer or refrence object
 obj of the base class A
  When we callmeth on obj
we call such a method on a pointer or reference of
 an method operate on*/




    delete m;
    return 0;
}