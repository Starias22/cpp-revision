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
void set_awesome(bool is_awesome){
(*this).is_awesome=is_awesome;
}
person(string firstname,string lastname,int age,bool awe){
this->firstname=firstname;
this->lastname=lastname;
(*this).age=age;
is_awesome=awe;
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

    person p("Jérémie","ROBERT",20,false);
    p.display();
    p.set_awesome(true);
    p.display();
    person q =person("Fofana","BOB",15,false);
    q.display();

    p=person("Ismael","ZURICH",2,true);
    p.display();






    return 0;
}
