#include <iostream>
using namespace std;
class employe{
  
    int matricule;
    string nom;
    int indice;
      static double valeurSalaire;
    public:
       
  static void setValeurSalaire(double val);
    void affiche() const;
    double salaire() const;
    employe(int m,string nom="John Doe",int indice=1);
    //bool search(int mat)const;
    };
class responsable:public employe{
    string titre;
    double prime;
    employe * inf;
    int nb_inf;
    public:
    responsable(int mt,string nom,int indice,
    string titre,double prime,employe *inf,int nb);
    void affiche();
    void afficheSubordonnesDirects(); 
    double salaire()const;
};

class commercial:public employe
{
private:
 int info;
public:
  commercial(int mt,string nom,int indice,int info);
 void enregistreVentes(int i);
 double salaire()const;
};



