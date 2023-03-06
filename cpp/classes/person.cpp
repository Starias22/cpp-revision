#include<iostream>
using namespace std;

class Person{
    public://private après
    string prenom="John";//ne pas intit
    string nom="Doe";
    int age=0;
    //méthodes
    void afficher_infos(){
        cout<<"Informations personnelles:\n";
cout<<"Nom: "<<this->nom<<endl;
cout<<"Prénom: "<<this->prenom<<endl;
cout<<"Age: "<<this->age<<endl;
        
    }
    //setters
    void setNom(string nom){
        this->nom=nom;
    }
    
     void setPreNom(string prenom){
        this->prenom=prenom;
    }
    void setAge(int age){
             this->age=age;


    }

    //getters
    string getNom(){
        return this->nom;
    }
     string getPrenom(){
        //return this->prenom;
        return prenom;
    }
     int getAge(){
        return this->age;
    }
    //grandir
    void grandir(){
        age++;
    } 
    //constructeur
    Person (){
     prenom="John";
    string nom="Doe";
    age=0;


    }

     


};

int main(){
Person p;
cout<<"Informations personnelles:\n";
cout<<"Nom: "<<p.nom<<endl;
cout<<"Prénom: "<<p.prenom<<endl;
cout<<"Age: "<<p.age<<endl;

Person q,r;
q.nom="SNOW";
q.prenom="John";
q.age=22;
q.afficher_infos();



    return 0;
}