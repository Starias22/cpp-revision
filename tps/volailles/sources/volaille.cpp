#include "../header/volaille.hpp"

volaille::volaille(int n,float p,float prx){
    num=n;
    poids=p;
    prix_kilo=prx;
}
bool volaille::estPretAAbattre(){

     return poids>=poids_abattage;

}
int volaille::getNum(){
    return num;

}
float volaille::getPoids(){
    return poids;

}
void volaille::setPoids(float p){
    poids=p;
    }
float volaille::getPoidsAbattage(){
    return poids_abattage;
}
void volaille::setPoidsAbattage(float p){
    poids_abattage=p;
}
float volaille::getPrixKillo(){
 return prix_kilo;
}
void volaille::setPrixKillo(float p){
    prix_kilo=p;
}

poulet::poulet(int n,float p,float prx):
            volaille( n, p, prx){

}
canard::canard(int n,float p,float prx):
            volaille(n,p,prx){

}

 GererElevage::GererElevage(int nb){

    if(nb>0)
    {
    tab=new volaille[nb];
    max=nb;
    count=0;
    }

  }
GererElevage:: ~GererElevage(){
    delete [] tab;
 }
 void GererElevage::add(volaille vol){
    if(count==max)
    {
        cout<<"Nombre maximal de volaille atteint"<<endl;
    }
    else{
        if(search(vol.getNum())!=nullptr)
        cout<<"Une volaille est déjà ajouté avec"<<
         "le numéro"<<vol.getNum()<<endl;
         else{
    //vol devient l'élément à l'indice count du tableau
    *(tab+count)=vol;
    //incréménter le nombre de volailles
    count++;
         }
    }

 }
 volaille* GererElevage::search(int nm){
    for(int i=0;i<count;i++)
    
        if((tab+i)->getNum()==nm)
            return (tab+i);
    return nullptr;
    
 }
 int GererElevage::getCount(){
    return count;
    
 }
 void GererElevage::display(int nm){
    volaille* v=search(nm);
    if(v!=nullptr)
    {
        
        cout<<"Volaille numéro "<<v->getNum()<<endl;
        cout<<"Poids "<<v->getPoids()<<endl;
        cout<<"Prix du kilo "<<v->getPrixKillo()<<endl;


    }

    else 
    cout<<"Aucune volaille n'id "<<nm<<nm;

 }
 float GererElevage::getPrixPretAbattage(){
    float p=0;
    for(int i=0;i<count;i++)
    {
        if((tab+i)->estPretAAbattre())
        p+=(tab+i)->getPrixKillo()*(tab+i)->getPoids();
    }
    return p;
 }

volaille * GererElevage::aAbatttre(){
    GererElevage g(max);

    for(int i=0;i<count;i++)
    {
       
        if((tab+i)->estPretAAbattre())
        g.add(*(tab+i));

        
    }
    return g.tab;

}

