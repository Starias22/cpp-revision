#include <iostream>
using namespace std;

int main()
{

struct person{
    string nom;
    string prenom;
    string sexe;
    int age;

};
/*struct*/ person p1,p2,p5; //usage de struct est facultatif
person p3={"Levaccancierier","Jean-Robert","M",37};
person p4{"Daigle","Laurelle","F",28};
struct person p7={"BOGRIYAN","Roland"};
p5={};

cout<<"*****Personne p3*****\n";
cout<<"Nom: "<<p3.nom<<endl;
cout<<"Prénom: "<<p3.prenom<<endl;
cout<<"Sexe: "<<p3.sexe<<endl;
cout<<"Age: "<<p3.age<<endl;


cout<<"*****Personne p1*****\n";
cout<<"Nom: "<<p1.nom<<endl;
cout<<"Prénom: "<<p1.prenom<<endl;
cout<<"Sexe: "<<p1.sexe<<endl;
cout<<"Age: "<<p1.age<<endl;

cout<<"*****Personne p5*****\n";
cout<<"Nom: "<<p5.nom<<endl;
cout<<"Prénom: "<<p5.prenom<<endl;
cout<<"Sexe: "<<p5.sexe<<endl;
cout<<"Age: "<<p5.age<<endl;

//p1 n'a pas été nitialisé

p4.age++;
cout<<"*****Personne p4*****\n";
cout<<"Nom: "<<p4.nom<<endl;
cout<<"Prénom: "<<p4.prenom<<endl;
cout<<"Sexe: "<<p4.sexe<<endl;
cout<<"Age: "<<p4.age<<endl;

//p1.age++; pas cool car p1 nest pas initialisé

p2={};//initialisation de p2

p5.age=10+p3.age;

cout<<"La personne p5 a "<<p5.age<<" ans\n";

cout<<"La personne p7 s'applle "<<p7.prenom<<" "<<p7.nom+"\n";
cout <<"Roland a "<<p7.age<<" ans\n";


















    return 0;
}