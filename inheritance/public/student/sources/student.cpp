#include"../header/student.hpp"
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
/*reg num getter*/
int student::get_reg_number(){
return reg_number;
}
void student::displays()const{
    //cout<<"I'm redifined from my parent"<<endl;
    //call the constructor of the super class
    display();
    cout<<"Reg number:"<<reg_number<<endl;
    //we can accesspublicmembers of person
    cout<<"Test accrss to public member"<<firstname<<endl;

}

student::student():person(){cout<<"xxxx";}

//redeine the display functio inh from person

void student::display()const{
    //display();//error
    //call the display func defined in the parent class
    person::display();
    cout<<"Reg number:"<<reg_number<<endl;
}