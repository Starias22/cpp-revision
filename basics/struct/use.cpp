#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};

int main(){
    struct person p;
    cout<<"typeof(person): "<<typeid(p).name()<<endl;
    person q;//without struct
    person p1,p2,p3;//3 persons
    cout<<"age of q: "<<q.age<<endl;
    cout<<"age of p2: "<<p2.age<<endl;
    q.age++;//incr age of q
    cout<<"age of q: "<<q.age<<endl;
    p.desc="A kind person";

    cout<<"desc of p: "<<p.desc<<endl;
    //p1.name="Andrewi";/*error: a cher array cannot be assigned*/
    strcpy(p1.name,"Andrew");//include cstring

    cout<<"name of p1: "<<p1.name<<endl;


    return 0;

}