#include<iostream>
#include<fstream>



using namespace std ;
int main()
{

    struct person{
    string nom;
    string prenom;
    string sexe;
    int age;
    string couleurPreferee;

};

string filename;
person p;


auto informations=[&](){
    

    cout<<"Nom ? "<<endl;
    cin>>p.nom;

    cout<<"Prénom ? "<<endl;
    cin>>p.prenom;

    cout<<"Sexe ? "<<endl;
    cin>>p.sexe;

    cout<<"Age ? "<<endl;
    cin>>p.age;

      cout<<"Couleur préférée ? "<<endl;
    cin>>p.couleurPreferee;
    
   filename=  p.prenom+"."+p.nom+"."+"csv";   
};

informations();

 ofstream file_stream{filename};

 file_stream<<p.nom+", "+p.prenom+", "+p.sexe+", "+to_string(p.age)+", "+p.couleurPreferee;

 cout<<"Ces données seront enregistrées dans le fichier "+filename+'\n';



    return 0;
}