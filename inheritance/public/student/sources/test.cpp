#include"../header/student.hpp"
int main()
{

student std;
std.display();
//student has ineherited the attribute(even private) of person
cout<<"Firstname of the student:"<<std.firstname<<endl;
cout<<"Lastname of the student:"<<std.lastname<<endl;
cout<<"Age of the student:"<<std.age<<endl;

std.age++;
cout<<"Age of the student:"<<std.age<<endl;

//access the public attr of student, inh from person
cout<<"Is the student awesome?:"<<boolalpha<<std.get_awesome()<<endl;

 std.set_awesome(false);
 cout<<"Is the student awesome?:"<<boolalpha<<std.get_awesome()<<endl;


//student s("","",5,true);
cout<<"Reg num"<<std.get_reg_number()<<endl;
std.displays();
std.display();
return 0;
}