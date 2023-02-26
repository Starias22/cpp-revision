#include<iostream>
#include"../header/person.hpp"

using namespace std;
bool person:: get_awesome()
{
return is_awesome;
}
void person:: set_awesome(bool is_awesome){
(*this).is_awesome=is_awesome;
}


void person:: display(){
        cout<<"Firstname: "<<firstname<<endl;
        cout<<"Lastname: "<<lastname<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"is awesome: "<<boolalpha<<is_awesome<<endl;

}

