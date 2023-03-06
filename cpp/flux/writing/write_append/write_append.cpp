//utiliser u fichier non vide au depart

#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    //ouvrir dabord en simple ecriture

   // ofstream stream ("append.txt");

    ofstream stream ("append.txt,ios::app");
    return 0;


}