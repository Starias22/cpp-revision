#include<iostream>
#include <unordered_set>

using namespace std;
void display_set(unordered_set <string> set)
{
  for(auto item:set)
    cout<<item<<"\t";
    cout<<endl;  
}

using namespace std;
int main()
{

    unordered_set <string> animaux={"lion","chat","chien","mouton","chèvre"};

    cout<<"Quelques animaux\n";
    for(auto animal:animaux)
    cout<<animal<<"\t";
    cout<<endl;

    display_set(animaux);

    animaux.insert("guépard");

        display_set(animaux);
        auto var = animaux.find("lion");
        auto var2 = animaux.find("éléphant");
 //recherche de lion dans l'ensemble
        if(var!=animaux.end())
        cout<<"L'animal est dans l'ensemble\n";
        else 
        cout<<"L'animal n'est pas dans l'ensemble\n";
 //recherche de "éléphant" dans l'ensemble

        if(var2!=animaux.end())
        cout<<"L'animal est dans l'ensemble\n";
        else 
        cout<<"L'animal n'est pas dans l'ensemble\n";
        //suppression

        animaux.erase("lion");

        if(animaux.find("lion")==animaux.end())
        cout<<"Le lion n'est pas dans la liste\n";

        




    return 0;
}