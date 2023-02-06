#include<iostream>
using namespace std;
class person{
public:
//all these attributes are public
string firstname,
lastname;
int age=0;
bool get_awesome();
void set_awesome(bool is_awesome);
person(string firstname,string lastname,int age,bool awe=false);
person();

person(string firstname,string lastname);



private: bool is_awesome=false;

public:void display();
};

