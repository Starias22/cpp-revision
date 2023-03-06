#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};
void display(person p)
{
 cout<<"\nInformations\n";
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"description: "<<p.desc<<endl;
}

person create (string desc,int age=10){
    person p;
    p.desc=desc;
    strcpy(p.name,"Name");
    p.age=age;
    return p;

}

int main(){
    person p;
    p.desc="Okay let's go";
    strcpy(p.name,"Babalola");
    p.age++;
    display(p);
auto q=create("A strong person",45);
    display(q);
    person r;
    r=create("You'r the best");
    r.age++;
    display(r);
    return 0;

}