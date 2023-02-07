#include "../header/employe.hpp"

employe::employe(int mat,string nm,int ind)
{
    matricule=mat;
    nom=nm;
    indice=ind;

}
/*bool employe::search(int mat)const{
    return false;
}*/
void employe::affiche ()const{
    cout<<"Nom de l'employé: "<<nom<<endl;
    cout<<"Indice salarial de l'employé: "<<indice<<endl;
    cout<<"Valeur salariale l'employé: "<<valeurSalaire<<endl;
}
double employe::salaire()const{
    return    valeurSalaire*indice;

}
void employe::setValeurSalaire(double val){
    employe::valeurSalaire=val;

}
responsable::responsable(int mt,string nm,int ind,
    string tit,double prm,employe *in,int nb=1):
    employe(mt,nm,ind)
    {
        titre=tit;
        prime=prm;
        inf=in;
        nb_inf=nb;

    }


    void responsable::afficheSubordonnesDirects(){
    for(int i=0;i<nb_inf;i++)
      ( inf+i)->affiche();

}

void responsable::affiche() {
    employe::affiche();
    cout<<"Titre de responsabilité"<<titre<<endl;
    cout<<"Prime de responsabilité"<<prime<<endl;
    afficheSubordonnesDirects();

}
double responsable::salaire()const{
    return prime+employe::salaire();
}

commercial:: commercial(int mt,string nom="John Doe",int ind=0,
int inf=0):employe(mt,nom,ind){
    info=inf;
}

void commercial:: enregistreVentes(int i){
    info=i;

 }
 double commercial::salaire()const{
    return employe::salaire()+100*info;
 }
