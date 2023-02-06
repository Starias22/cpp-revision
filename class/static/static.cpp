#include<iostream>
using namespace std;
class person{
public:
int static const   N=20;
int static nb_instance;
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
person(){
cout<<"Person construction"<<endl;
firstname="John";
lastname="Doe";
age=18;
is_awesome=true;
}



private: bool is_awesome=false;

public:void display(){
        cout<<"Firstname: "<<firstname<<endl;
        cout<<"Lastname: "<<lastname<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"is awesome: "<<boolalpha<<is_awesome<<endl;

};


};
int person::nb_instance=0;
int main()
{



    person p,q,r;
    p.display();
    cout<<p.nb_instance<<endl;
    cout<<q.nb_instance<<endl;
    p.nb_instance=25;
    cout<<p.nb_instance<<endl;
    cout<<q.nb_instance<<endl;
        cout<<q.N<<endl;





    return 0;
}
