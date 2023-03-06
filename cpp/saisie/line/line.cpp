#include <iostream>
int main()
{
    std::string sentence,name;
    std::cout<<"Enter a sentence: ";

    //cin s'arrete a la rencontre d'un espace blanc(whitespace) (espace, tabulation, retour a la ligne)

     std::cin>> sentence;

     std::cout<<"Votre phrase: "<<sentence;

     //solution:la fonction getline
    //Par défaut le troisième paramètre est\n
    //le caractère ne doit pas etre vide
    /*std::getline(std::cin,sentence,'\n');
    std::cout<<"You sentence is "<<sentence<<"\n";

    std::cout<<"Enter your full name";
     std::getline(std::cin,name,' ');
    std::cout<<"You name is "<<name<<"\n";*/

    
    return 0;
}