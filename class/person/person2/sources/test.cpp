#include"../header/person.hpp"
int main()
{
    /*When we precise a visibility for an property(attribute or method)
    all ther following properties have the same visibility
    until we change it*/
    person p;
    p.display();
    p.firstname="Alain";
    p.lastname="ARON";
    p.display();
    p.age=20;
    //p.is_awesome (Inaccessible)
    p.get_awesome();
    p.set_awesome(true);
    p.display();
    person q;
    q=p;
    q.display();


    return 0;
}
