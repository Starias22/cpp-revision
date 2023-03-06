#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    string filename="fic.txt";
    ofstream cfile{filename};//ouverture du fichier, création si non existence

    cfile<<"Cette phrase a été insérée avec la langage C++";
    cfile<<"Cette phrase de même";

    //constats:
    //le contenu du fichier est vidé s'il est non vide


    //ecrire sans effacer(append)ie ajout de contenu a la fin


      cfile.open(filename,ios_base::app);
    return 0;
}