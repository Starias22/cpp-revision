#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream file_stream("file.txt");
    if(file_stream)
    {
      cout<<"Fichier ouvert avec succès"<<endl;
      //demarrer avec u fichier existant et vide
      file_stream<< "Cette première phrase sera écrite dans le fichier";
      // executer et aller observer le conteu du fichier
      file_stream<< "Cette deuxième phrase sera insérée dans le fichier";
      // executer et aller observer le conteu du fichier

      //remarq retourner a la ligne : endl et \n
      file_stream<< "\nUne autre phrase avec retour à la ligne\n";
      int age=20;
      file_stream<<"J'ai "<<age<<" ans\n";
    }
    
    else 
    cout<<"Une erreur s'est produite"<<endl;


    
  return 0;  
}
