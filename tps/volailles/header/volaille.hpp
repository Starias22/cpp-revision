#include<iostream>
#include<algorithm>

using namespace std;
#define MAX 10
/*classe des volailles*/
class volaille{
    //shouldn't change
   int num;
    float poids;
   static float prix_kilo;
   static float poids_abattage;
    public:
    volaille(int n=0,float p=0,float prx=0);
    int getNum();

    float getPoids();
    void setPoids(float p);

    static float getPrixKillo();
    static void setPrixKillo(float p);

    static float getPoidsAbattage();
    static void setPoidsAbattage(float p);
    bool estPretAAbattre();
};
/*Classe des canards*/
class canard:public volaille {
    public:
    //the num should be specified
    canard(int n,float p=0,float prx=0);


};
/*Classe des poulets*/
class poulet:public volaille{
    public:
    poulet(int n,float p=0,float prx=0);

};
class GererElevage{
    //Pointeur sur la première volaille
    volaille * tab;
    //le nombre de volailles
    static int count;
    //max de volailles à gérer
    int max;
    public :
   GererElevage(int nb=MAX);
   ~GererElevage();
  //obtenir le nombre total de volailles
  static int getCount();
  //ajouter une volaille
  void add(volaille vol);
  //afficher une vollaille 
  void display(int nm);
  //rechercher une volaille par son numéro
  volaille *search(int nm);
   float getPrixPretAbattage();
   volaille  * aAbatttre();


};
