#include"../header/person.hpp"
bool person:: get_awesome()const
{
return is_awesome;
}void person:: set_awesome(bool is_awesome){
(*this).is_awesome=is_awesome;
}
 person::person(string firstname,string lastname,int age,bool
 awe){
this->firstname=firstname;
this->lastname=lastname;
(*this).age=age;
is_awesome=awe;
}
person::person(){
firstname="John";
lastname="Doe";
age=18;
is_awesome=true;
}

person::person(string firstname,string lastname){
    person();
this->firstname=firstname;
this->lastname=lastname;

is_awesome=true;;
}
void person:: display()const{
        cout<<"Firstname: "<<firstname<<endl;
        cout<<"Lastname: "<<lastname<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"is awesome: "<<boolalpha<<is_awesome<<endl;

}