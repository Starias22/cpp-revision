#include <iostream>
#include<vector>


int main(){
    std::vector<double>depenses;
    std::vector <int> notes {1,2,3,4,5};// =
     std::vector <std::string> noms(5);
      std::cout<<"Taille du tableau noms: " <<noms.size()<<std::endl;

    std::cout<<notes[0]<<std::endl;
    notes[0]=20;
    std::cout<<notes[0]<<std::endl;
     std::cout<<"Premier élément: "<<notes.front()<<std::endl;
     std::cout<<"Dernier élément: "<<notes.back()<<std::endl;
     std::cout<<"Taille du tableau: " <<notes.size()<<std::endl;

     std::vector <std::string> villes(6,"cotonou");
     int i{0};
     for (i=0;i<villes.size();i++)
     std::cout<<villes[i]<<std::endl;

     for (int elt:notes)
     std::cout<<"elt="<<elt<<std::endl;

     std::cout<<"notes vide?: "<< notes.empty();
     notes.push_back(10);
     std::cout<<"Dernier élément: "<<notes.back()<<std::endl;
     notes.pop_back();
std::cout<<"Dernier élément: "<<notes.back()<<std::endl;

   std::vector<float> tab{};
   tab.assign(10,2);
   for(float e : tab)
   std::cout<<e<<std::endl;

   std::vector<float> tableau;
   float f,sum=0;
   while(true)
   {
    std::cout<<"Entrer une valeur positive, une valeur négative pour finir: ";
    std::cin>>f;
    if(f<0)
    break;
    tableau.push_back(f);
    sum+=f;
   }
   if(tableau.size())
   sum/=tableau.size();
   std::cout<<"La moyenne des valeurs entrées est "<<sum<<"\n";

   //min max
   std::vector<int> set{10,6,3,20,7,8,17,15,1,22};
   int min=set.front();
   int max=set.back();
   for(int element : set)
   {
    if(element>max)
    max=element;
    else if(element<min)
    min=element;
   }
   std::cout<<"min="<< min<<std::endl;
   std::cout<<"max="<<max<<std::endl;

   std::vector<int> pairs,impairs;
   for(int element : set)
   {
   if(element%2==0)
   pairs.push_back(element);
   else 
   impairs.push_back(element);
   }
   
   std::cout<<"Pairs:\n";
   for(int element : pairs)
   std::cout<<element<<"\t";

   std::cout<<"\nImpairs:\n";
   for(int element : impairs)
   std::cout<<element<<"\t";

//nb_occu

std::vector<char> chr{'a','b','c','a','b','c','u','d','i','a'};
int cpt=0;
for (char e : chr)
  if(e=='a')
    cpt++;

 std::cout<<"\nNombre d'occurences de 'a': "<<cpt<<"\n";











}