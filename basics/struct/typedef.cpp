#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};
typedef person per;// person renamed to per
//both person and per can beused


int main(){
    person p;
    p.desc="Okay let's go";
    strcpy(p.name,"Babalola");
    p.age++;

    per q;
    p.desc="That's great";
    strcpy(p.name,"Typedef");
    p.age+=20;

    return 0;


}