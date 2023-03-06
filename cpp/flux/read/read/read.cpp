#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    string line;
    ifstream  input_stream ("file.txt");

if(input_stream)
{
//cout<<"Fichier ouvert en lecture\n";
//Recupération d'une ligne:getline
//getline(input_stream,line);
//cout<<"Première ligne: "<<line;
//Remarque: retour a la lligne non stockée
//string s="\n";

//search(line.begin(),line.end(),s,s);
/*

getline(input_stream,line);
cout<<"\nDeuxième ligne: "<<line;

getline(input_stream,line);
cout<<" \nTroisième ligne: "<<line<<endl;*/

/*Fin de fichier atteint
getline(input_stream,line);
cout<<"Deuxième ligne:"<<line;*/

/*while(!input_stream.eof())
{
    getline(input_stream,line);
cout<<" \nLigne lue : "<<line<<endl;
}*/
//input_stream.rewind();

/*while(getline(input_stream,line))
cout<<" \nLigne lue : "<<line<<endl;*/



//word by word

string word;
//input_stream>>word;

//cout <<"Mot lu: "<<word<<endl;

char letter;
input_stream.get(letter);//lit les caractères, espaces y compris
cout<< "Lettre lue: "<<letter<<endl;


int pos=input_stream.tellg();

cout<<"Position courante du curseur: "<<pos<<endl;

//fermeture du fichier

input_stream.close();
 pos=input_stream.tellg();

cout<<"Position courante du curseur: "<<pos<<endl;

}
else 
cout<<"Ouverture du fichier impossible\n";
    return 0;
}