#include<iostream>
using namespace std;
class person{
public:
//all these attributes are public
string firstname,
lastname;
int age=0;
bool get_awesome()const;
//should't be applied to constant objects
void set_awesome(bool is_awesome);
person(string firstname,string lastname,int age,bool awe=false);
person();

person(string firstname,string lastname);



private: bool is_awesome=false;

public:void display()const;
};


//derived from person
class student:public person{
    //a student has a registration number
private : int reg_number=-1;
public:int get_reg_number();
void displays()const;
void display()const;
//only constructors take base initializoe
//void set():person(){};

student();

/*student():person(){
    //execute this code
    cout<<"flkgrkkkketytkllllll";
    //and then and call the base constructor
    }*/



};
