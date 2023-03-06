#include <iostream>
#include <unordered_map>
//#include <tuple>

using namespace std;
using namespace std::literals;

//ecrire une fonction simple qui gere l'existence de clé

//utiliser ensuite les exceptions

unordered_map<char, int> cpt_letters(string const phrase){
    unordered_map<char,int> occur_dict;
    for (char character:phrase)
    {
        if(occur_dict.find(character)!=occur_dict.end())//la clé(char) existe 
        occur_dict[character]++; //donc on incrémente sa valeur qui es le nb_occu du char
        else //sinon(la clé n'existe pas)
        occur_dict.insert({character,1});// on l'insère avec la valeur 1
    }


    return occur_dict;

}
void format_occu(string const phrase){
    cout<<"***Nombres d'occurences des lettres de la phrase***";
        unordered_map<char,int> occur_dict =cpt_letters(phrase);
        for (auto elt: occur_dict)
        cout<<elt.first<<"->"<<elt.second<<endl;
}



int main()
{
 unordered_map<string,int> my_dict
 {
    //subjects with mark of a sudent
{"Anglais",15},
{"Fançais",18},
{"Géographie",17},
{"SVT",16},
{"Espagnol",19}
 };

 cout<<"Résultats de l'apprenant\n";
 for (auto elt: my_dict)
 cout<<elt.first<<"->"<<elt.second<<endl;

 //insertion

 my_dict.insert({"EPS",15});

 //insertion de plusieurs éléments

  my_dict.insert({
    {"Conduite",15},
    {"Mathématiques",13}
    });



cout<<"Résultat de  l'apprenant\n";
 for (auto elt: my_dict)
 cout<<elt.first<<"->"<<elt.second<<endl;

 // autre manière d'insérer une paire de clé valeur

 my_dict["PCT"]=17;

 cout<<"Résultat final de  l'apprenant\n";
 for (auto elt: my_dict)
 cout<<elt.first<<"->"<<elt.second<<endl;

 //modification

 //faire +2 en math et -3 n PCT

//attention pour clés non existantes
 my_dict["Mathématiques"]+=2;

  my_dict["PCT"]-=3;

 cout<<"Résultat final de  l'apprenant\n";
 for (auto elt: my_dict)
 cout<<elt.first<<"->"<<elt.second<<endl;

 cout<<"L'élève en question a "<<my_dict["Mathématiques"]<<" sur 20 en Maths\n";

 //effacer une clé (donc savaleur aussi)

 my_dict.erase("PCT");
 //my_dict["PCT"]++;
 //cout<<my_dict["PCT"];

 cout<<"Résultat final de  l'apprenant\n";
 for (auto elt: my_dict)
 cout<<elt.first<<"->"<<elt.second<<endl;

 //calculer la moyenne en prenant tos les crédits égaux à 1

 //cas de clé déja  existante

 auto check=my_dict.insert({"Mathématiques",14}); //existe déjà
 auto check2=my_dict.insert({"Allemand",14}); // n'exste pas encore
 
auto elt=check.first;
auto elt2=check2.first;
 if(check.second)
 {
 cout<<"L'elémént a été inséré avec succès\n";
  cout<<"Il a pour clé "<<elt->first<<" et pour valeur "<<elt->second;

 }
 else 
 {
 cout<<"La clé existe déja\n";
cout<<"Il s'agit de la clé "<<elt->first<<"ayant pour valeur "<<elt->second<<endl;
 }

 if(check2.second)
 {
 cout<<"L'elémént a été inséré avec succès\n";
  cout<<"Il a pour clé "<<elt2->first<<" et pour valeur "<<elt2->second<<endl;

 }
 else 
 {
 cout<<"La clé existe déja\n";
cout<<"Il s'agit de la clé "<<elt2->first<<"ayant pour valeur "<<elt2->second<<endl;
 }

 
//my_dict.insert_or_assign("Yoruba",16);

//to find a key

 auto res=my_dict.find("key");//n'existe pas
 auto res2=my_dict.find("EPS");//existe

 if(res!=my_dict.end())
 cout<<"La clé existe";
 else 
 cout<<"La clé n'existe pas";

 if(res2!=my_dict.end())
 cout<<"La clé existe\n";
 else 
 cout<<"La clé n'existe pas\n";

int cpt=0;
 auto i=my_dict.begin();

 //cout<<"Premier élément: "<<*i;
 while(i!=my_dict.end())
 {
 cpt++;
 i++;
 }

 cout<<"Le dictionnaire contient "<<cpt<<" éléments\n";

unordered_map<string,int>::iterator j;

string const phrase="J'apprends à programmer en C++\nC'est vraiment très interressant.";

format_occu(phrase);
 


    return 0;
}