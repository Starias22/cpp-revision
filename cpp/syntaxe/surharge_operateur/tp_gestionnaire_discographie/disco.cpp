#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<map>



using namespace std;
//représentation d'un morceau de chanson
struct Morceau{
    string nom,
    album,
    artiste;
};
// renommage(alias) du tableau dynamique de morceaux
using discographie=vector<Morceau>;
//tuple d'album et artiste
using my_tuple=tuple<string,string>;
using my_tab=vector<my_tuple>;
using tab_string=vector<string>;
ostream & operator<<(ostream &stream,Morceau morceau);
auto controler_ajout(vector<string> line);

void ajouter_morceau(Morceau morceau,discographie d);
void afficher_discographie(discographie d, string motif);
void afficher_par_morceau(discographie d);
void afficher_par_album(discographie d);
void afficher_par_artiste(discographie d);
void enregistrer_discograhie(string nom_fichier);
void charger_discograhie(string nom_fichier);
void quitter();
map<my_tuple,tab_string> give_map(discographie d);
void gerer_disographie(string cmd_line, discographie d);
vector<string> split(string str,string sub_str);

auto give_tuple_vector(discographie d);
int main()
{
   // tuple<string>
    string line;
    discographie d;

    /*auto var=split("Apprenons à programmer en C++ moderne"," ");
    for (auto elt:var)
    cout<<elt<<endl;*/

    getline(cin,line);
    gerer_disographie(line,d);
    cout<<d.size();
    
    return 0;
}
ostream & operator<<(ostream &stream,Morceau morceau){

  cout<<morceau.nom<<" "<<morceau.album<<" "<<morceau.artiste;
    return stream;
}

vector<string> split(string str,string sub_str){
    string my_str;
    
    // un tableau dynamique de strings
    vector<string> tab_str;
    //des itérateurs sur string
    int i=0;
    string::iterator current_res,last_res=str.begin() ,iterator_str=str.begin();
    while(iterator_str!=str.end())

    {
        current_res =search(iterator_str,str.end(),
        sub_str.begin(),sub_str.end() );
       
        /*retourne un itérateur sur la première 
        occurence de sub_str dans la chaine*/

        if(current_res==str.end()) // sub_str non trouvé
        break;
        my_str={last_res,current_res};//extraction
        tab_str.push_back(my_str);
       iterator_str=current_res+1;
        last_res=current_res;
    
    }
    my_str={last_res,str.end()};
            tab_str.push_back(my_str);
            return tab_str;


}
void ajouter_morceau(Morceau morceau,discographie d)
{
    d.push_back(morceau);
}
 auto controler_ajout(vector<string> line)
    {
        bool test=true;
        Morceau morceau;
        string nom_morceau="Morceau inconnu",
        album="Album inconnu",artiste="Artiste inconnu";
     string const invalid_tmb="Commande invalide:Trop de séparateurs(|)\n",
     invalid_bar="Commande invalide: séparateurs(|) manquants\n";
    int nb_bar_vertical;
   if(line.size()==1)
        {
            
      
        }
       else if(line.size()==2)
        {
            nom_morceau=line[1];
            album="Album inconnu";
            artiste="Artiste inconnu";
        }
        else // line.size >=3
        {
            
           nb_bar_vertical=count(line.begin(),line.end(),"|") ;

           if(nb_bar_vertical>=3)
           cout<<invalid_tmb;

           else if(nb_bar_vertical==0)// 
            cout<<invalid_bar;
           
           else if (nb_bar_vertical==1)
           {
            if(line.size()==3)
            {
                if(line[1]=="|")
                album=line[2];
                else
                cout<<"Commande invalide\n";
            }
            else if(line.size()==4)
            {

          if(line[2]=="|")
          {
            nom_morceau=line[1];
                album=line[3];
          }
                else
                cout<<"Commande invalide\n";
            }
            else
            cout<<"commande invalide:Trop d'arguments\n";


           }
           else // 2 séparateurs
           {
            if(line.size()==4)
            {
            if(line[1]=="|" && line[2]=="|")
            {
                artiste=line[4];

            }
            else
             cout<<"Commande invalide\n";

            }
            else if(line.size()==5){
                if(line[2]=="|" && line[3]=="|")
            {
                nom_morceau=line[1];
                artiste=line[4];

            }
           else  if(line[1]=="|" && line[3]=="|")
            {
                album=line[1];
                artiste=line[4];

            }
            
            else
            cout<<"Commande invalide\n";

            }
            else if(line.size()==6)
            {
                  if(line[2]=="|" && line[4]=="|")
            {
                nom_morceau=line[1];
                album=line[3];
                artiste=line[5];

            }
            else
            cout<<"Commande invalide\n";
                
            }
           }



        }
        morceau={nom_morceau,album,artiste};
        return make_tuple(test,morceau);
    }
void afficher_discographie(discographie d, string motif){
    if(motif=="morceaux")
    afficher_par_morceau(d);

    else if(motif=="albums")
    afficher_par_album(d);

    else if(motif=="artistes")
    afficher_par_artiste(d);
    else 
    cout<<"Commande invalide\n";
}
void afficher_par_morceau(discographie d){
for(auto morceau:d)
cout<<"--> "<<morceau.nom<<" | "<<morceau.album<<" | "<<morceau.artiste<<endl;

}

 auto  give_tuple_vector(discographie d){
    //tableau de tuples<string(album), string(artiste)>
    my_tab tab;
    for (auto morceau:d)
    {
        auto[album,artiste]=make_tuple(morceau.album,morceau.artiste);
        //si le tuple n'est pas dans le tableau
        //if(search(tab.begin(),tab.end(),make_tuple(album,artiste))==tab.end())
        //l'ajouter au tableau
        tab.push_back(make_tuple(album,artiste));
    }
    //trier le tableau par odre croissant d'albums
    sort(tab.begin(),tab.end(),[](my_tuple a,my_tuple b){
        string album_a, album_b;
        tie(album_a,ignore)=a;
        tie(album_b,ignore)=b;
        return a<b;
    } );
    return tab;
}
void afficher_par_album(discographie d){
    auto map=give_map(d);
    for(auto item:map)
    {
        auto tuple=item.first;//le tuple qui est la clé du dictionnaire
        auto[album,artiste]=tuple;
        cout<<"--> "<<album<<" | "<<artiste<<endl;
        auto morceaux=item.second;//tableau de morceaux(string)
        //parcours des morceaux pour le tuple courant
        for(auto morceau:morceaux)
        cout<<"/--> "<<morceau<<endl;

    }
    


}
map<my_tuple,tab_string> give_map(discographie d){
    //my_dict et un dictionnaire ordonné
    /*il possède en clé les tuples d'album et artistes puis en valeur les morceaux
     correspondants*/
    map<my_tuple,tab_string> my_dict;
    //tab est le tableau des tuples d'album et artistes
    auto tab=give_tuple_vector(d);

    /* destiné à contenir pour chacun des tuples d'album et artistes
    les différents morceaux concernés*/
    tab_string tab_morceaux;
//parcours du tableau de tuples
    for(auto[album,artiste]:tab)
    {

    for (auto morceau:d)
    
    if(morceau.album==album && morceau.artiste==artiste)
    tab_morceaux.push_back(morceau.nom);
    sort(tab_morceaux.begin(),tab_morceaux.end());
    
    my_dict.insert({make_tuple(album,artiste),tab_morceaux});
    }
    return my_dict;

    //for(auto var: my_dict)


}
void afficher_par_artiste(discographie d){

}
void enregistrer_discograhie(){

}
void charger_discograhie(string nom_fichier){

}
void quitter();
void gerer_disographie(string cmd_line,discographie d){
    
    auto line=split(cmd_line," ");
    string cmd=line[0];//pour récupérer la commande exécuteée
    if(cmd=="ajouter")
    {
       auto[check,morceau] =controler_ajout(line);
       if(check)
       {
       ajouter_morceau(morceau,d); 
       //cout<<",,fk";
       }  

       else if(cmd=="afficher")
       {
        if(line.size()==1)
        cout<<"Un argument manquant\n";
        else if(line.size()==2)
        afficher_discographie(d,line[1]);
        else //line.size()>2
    
        cout<<"Trop d'arguments\n";
        
    
        
       }

    }

}
   





