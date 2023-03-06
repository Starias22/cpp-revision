#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};

int main(){
    person tab[10];// array of 10 person
    cout<<"tab contains "<<sizeof(tab)/sizeof(person)<<" persons\n";
    person p;
    p.desc="Okay let's go";
    strcpy(p.name,"Babalola");
    p.age++;
    tab[0]=p;

    cout<<"\nInformations on the first person\n";
    cout<<"Name: "<<tab[0].name<<endl;
    cout<<"Age: "<<tab->age<<endl;
    cout<<"description: "<<p.desc<<endl;

   person *ptr=&p;
   strcpy((tab+3)->name,"Jordan");
    tab[3].age+=5;//25
    tab[3].desc="Strength and determination";
    cout<<"\n\nInformations on the fourth person\n";
    cout<<"Name: "<<tab[3].name<<endl;
    cout<<"Age: "<<tab->age<<endl;
    cout<<"description: "<<tab->desc<<endl;

    return 0;

}