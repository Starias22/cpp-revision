#include<iostream> 
#include<tuple> 


using namespace std::literals;
using namespace std;
int main()
{
      //std::tuple { "Clem"s, "Lagrume"s, "Fruit"s, 4 };
      auto infos = std::make_tuple("Ezéchiel"s, "ADEDE"s, 15,1.75,65);


      //accès aux éléments

      cout<<"Prénom: "<<get<0>(infos)<<endl;
      cout<<"Nom: "<<get<1>(infos)<<endl;
      cout<<"Age: "<<get<2>(infos)<<endl;
      cout<<"Taille: "<<get<3>(infos)<<endl;
      cout<<"Masse: "<<get<4>(infos)<<endl;

      //accès en écriture

      get<2>(infos)++;
      cout<<"Age: "<<get<2>(infos)<<endl;
      get<3>(infos)=1.89;
      cout<<"Taille: "<<get<3>(infos)<<endl;

      //perte de poids
      get<4>(infos)-=5;
      cout<<"Masse: "<<get<4>(infos)<<endl;


      auto my_tuple=make_tuple("Ezéchiel"s,20,1.55);
  
      cout<<"Prénom: "<<get<string>(my_tuple)<<endl; //mettre necess le s
       get<int>(my_tuple)++ ;
            cout<<"Age: "<<get<int>(my_tuple)<<endl;


            cout<<"Taille: "<<get<double>(my_tuple)<<endl;

            //mettre l'accent sur l'sage de float et double

         auto other_tuple=make_tuple(20,1.55);
                     cout<<"Taille por other_tuple: "<<get<double>(other_tuple)<<endl;

          auto tuple=make_tuple(1,2,3);
          //get<int>(tuple)--; //it won't compile

















    return 0;

  
}