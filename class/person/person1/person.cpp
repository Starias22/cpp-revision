#include<iostream>
using namespace std;
class person{
public:
//all these attributes are public
string firstname,
lastname;
int age=0;
bool get_awesome()
{
    return is_awesome;
}
void set_awesome(bool is_awesome)
{
    (*this).is_awesome=is_awesome;

}


private: bool is_awesome=false;

public:void display(){
    cout<<"Firstname: "<<firstname<<endl;
    cout<<"Lastname: "<<lastname<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"is awesome: "<<boolalpha<<is_awesome<<endl;

}
};

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

