#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int nb_line=0,nb_char=0,nb_word=0;
    string str;
    int pos;
ifstream input_stream("file.txt");

if(input_stream)
{
cout<<"Fichier ouvert avec succès\n";

while(getline(input_stream,str))
++nb_line;
/*pos=input_stream.tellg();
cout<<"La position actuelle du fichier est: "<< pos<<endl;*/

//se placer au debut

input_stream.clear();
input_stream.seekg(0);

//input_stream.seekg(0,ios::beg);
while(!input_stream.eof())
{
    input_stream>>str;
    nb_char+=str.size();
    //cout<<"size= "<<str.size()<<endl;
    ++nb_word;
}


input_stream.close();//on n'a plus besoin du fichier donc on le ferme juste pour liberer des ressources

cout<<"Nombre de lignes: "<<nb_line<<endl;

cout<<"Nombre de caractères sans les espaces: "<<nb_char<<endl;

cout<<"Nombre de mots: "<<nb_word<<endl;



}
else
cout<<"Impossible d'ouvrir le fichier\n";
    return 0;
}