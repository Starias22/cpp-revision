#include <iostream>
#include <vector>
#include <algorithm>
#include <array>




using namespace std;
int main()

{

int var=45;

    //lambda


    [] {
            //cout<<"a="<<a<<endl;
            //cout<<"var="<<var<<endl; var is not captured yet



    };


    //capture par valeur
// auto ::: non dynamique
     auto lam= [var] {
            cout<<"var="<<var<<endl; 
    
    };

    lam();


    auto x= [var] {
            cout<<"var="<<var<<endl;
            //var++;  error : incrementation d'une read-only variable
            //var--;
            //var=20;
            //var*=2;
    
    };

    lam();

    //regles avec auto

   /* l'initialisation dpit suivre la déclaration
   le type ne peut pas etre changé après*/

    //capture par référence
    var=58;
    char c='A';

    auto y=[&var]{
        cout<<"var="<<var<< endl;

        var*=100;
        cout<<"var="<<var<< endl;


    };
    y();
     cout<<"var="<<var<< endl;

     //capture de plusieurs variables
     int k=20;
     auto z=[var,c,k]{

        cout<<"var="<<var<< endl;
        cout<<"c="<<c<< endl;
        cout<<"k="<<k<< endl;

     };
     z();

auto m=[&var,&c,&k]{

        cout<<"var="<<var<< endl;
        cout<<"c="<<c<< endl;
        cout<<"k="<<k<< endl;
        k++;
        c++;

     };

     auto n=[&var,&c,k]{

        cout<<"var="<<var<< endl;
        cout<<"c="<<c<< endl;
        cout<<"k="<<k<< endl;
        c++;

     };


     z();
     m();

     //capture de toutes les variables par valeur

     auto p=[=]{
        cout<<"\nlambda p: exécution"<<endl;
        cout<<"var="<<var<< endl;
        cout<<"c="<<c<< endl;
        cout<<"k="<<k<< endl;
        //cout<<"j="<<j<< endl; error
 
     };
     p();

     int j=1000;


auto q=[&]{
        cout<<"\nlambda q: exécution"<<endl;
        cout<<"var="<<var<< endl;
        cout<<"c="<<c<< endl;
        cout<<"k="<<k<< endl;
        c++;
        k++;
        var++;
        j++;
 
     };

     auto r=[&,var]{
        k++;
        c++;
        //var++;  error
     };

     auto s=[=,&var,&k]{

        //seuls var et k
        k++;
    
        //var++;  error
     };

      /*auto r=[var,&]{
        k++;
        c++;
        //var++;  error
     };*/  //error

     

    vector<int> tab{1,10,15,20,11,44,22,36,8,4,2};


//STL algorithm
    int  cpt_even=count_if(tab.begin(),tab.end(),[](int num){
        return num%2==0;
        //return true ...

    }) ;

    int  cpt_odd=count_if(tab.begin(),tab.end(),[](int num){
        return num%2!=0;

    }) ;
    

    cout <<"Ce tableau contient "<<cpt_even<<"nombres pairs et "<<cpt_odd<<" nombres impairs\n";

    //count the numbers of  miniscules vowels in a string;

    string mine="antigouvernementalisation";
    int cpt_vowels=count_if(mine.begin(),mine.end(),[](char character){
        return character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||character=='y';
    });

    cout<<"Nombre de voyelles dans la phrase: "<<cpt_vowels<<endl;

    vector<string> const chaines { "Un mot","Autre chose", "Du blabla",
     "Du texe", "Des lettres" };

   for_each(begin(chaines),end(chaines),
[](string const & message) -> void
{
cout << "Message reçu : " << message << endl;
});

/*for_each exécute l'instruction du lambda qu'elle prend en argument sur chacun des 
éléments du tableau dynamique dont les pointeurs lui sont passés en premiers arguments*/

 array<double, 4/*u*/> tableau { 1, 3.1415, 2.1878, 1.5 };

 sort(tableau.begin(),tableau.end(),[](double x, double y){

    return x>y;

 });

 cout<<"Tableau après tri par ordre décroissant\n";

 for (auto each : tableau)
 cout<<each<<endl;





    return 0;
}