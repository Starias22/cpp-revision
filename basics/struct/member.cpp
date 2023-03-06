#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
    //member functions
    void display()
{
    cout<<"\nInformations\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"description: "<<desc<<endl;
}/*; not required*/
void set_infos(string d,int a=10)
{
    desc=d;
    age=a;
}/*; not required*/

};



int main(){
    person p;
    p.desc="Okay let's go";
    strcpy(p.name,"Babalola");
    p.age++;
    p.display();
    person q;
   strcpy(q.name,"Roland");
    auto ptr=&q;
    ptr->set_infos("Just a test",60);
    q.display();

    q.set_infos("Fine well");

    ptr->display();
    return 0;


}