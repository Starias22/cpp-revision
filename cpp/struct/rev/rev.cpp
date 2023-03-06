#include <iostream>
#include <array>
#include <fstream>



using namespace std;



int main()
{

string nom,prenom,sexe,filename;


    int age;
auto informations=[&](){
    

    cout<<"Nom ? "<<endl;
    cin>>nom;

    cout<<"Prénom ? "<<endl;
    cin>>prenom;

    cout<<"Sexe ? "<<endl;
    cin>>sexe;

    cout<<"Age ? "<<endl;
    cin>>age;
   filename=  prenom+"."+nom+"."+"csv";   
};

informations();

 ofstream file_stream{filename};

 file_stream<<nom+", "+prenom+", "+sexe+", "+to_string(age);

 cout<<"Ces données seront enregistrées dans le fichier "+filename+'\n';


    return 0;
}