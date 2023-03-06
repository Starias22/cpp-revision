#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};

int main(){
    person p;
    p.desc="Okay let's go";
    strcpy(p.name,"Babalola");
    cout<<"Informations\n";
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"description: "<<p.desc<<endl;

   person *ptr=&p;
    cout<<"Addess of p: "<<ptr<<endl;
    (*ptr).age+=5;//25
    ptr->age--;//24
    ptr->desc="Strength and determination";
    cout<<"Informations\n";
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"description: "<<p.desc<<endl;

    return 0;

}