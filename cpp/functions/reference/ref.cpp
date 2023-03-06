#include <iostream>

using namespace std;

void test(int a){
    a++;
}

void incr(int & a)
{
    a++;
}
void test_2(int const & var){
    cout<<"var="<<var<<endl;

}
int main()
{

    int var=55;
      cout<<"Avant l'appel de le fonction test var="<<var<<endl;
      test(var);
        cout<<"Après l'appel de le fonction test var="<<var<<endl;


    int a=20;
    /*une reference doit etre declarée et initialisée simultanément
     car une reference ne peut pointer sur rien */
    //int & ref_a; error

    int & ref_sur_a =a;

    cout<<"a="<<a<<endl;
    cout<<"ref_sur_a="<<ref_sur_a<<endl;

    a++;

     cout<<"a="<<a<<endl;
    cout<<"ref_sur_a="<<ref_sur_a<<endl;

    ref_sur_a=45;

     cout<<"a="<<a<<endl;
    cout<<"ref_sur_a="<<ref_sur_a<<endl;

    /*double  pi=3.14;
    int  & ref_sur_pi=pi; error */

    double  pi=3.14,e=2.718;
    //double   & ref_sur_pi=pi; 
    double   &ref_sur_pi=pi; 

    cout<<"pi="<<pi<<endl;
    cout<<"ref_sur_pi="<<ref_sur_pi<<endl;

    //on ne peut pas changer la cible d'une reference

    ref_sur_pi=e;

    cout<<"pi="<<pi<<endl;
    cout<<"ref_sur_pi="<<ref_sur_pi<<endl;
    cout<<"e="<<e<<endl;

//ref et non &ref
pi=3.14,e=2.718;
//double & ref1=2; error

double &ref1=pi, &ref2=e;

    cout<<"pi="<<pi<<endl;
    cout<<"e="<<e<<endl;
    cout<<"ref1="<<ref1<<endl;
    cout<<"ref2"<<ref2<<endl;
    ref1=3.1;
    ref2=2.7;

    cout<<"pi="<<pi<<endl;
    cout<<"e="<<e<<endl;
    cout<<"ref1="<<ref1<<endl;
    cout<<"ref2"<<ref2<<endl;


//transitivité de la référene
double & ref=ref1, r;
ref=258;
  cout<<"ref="<<ref<<endl;
  cout<<"ref1="<<ref1<<endl;
  cout<<"pi="<<pi<<endl;

  //ref constante
  
  double x=a; //aucue erreur
  float y=a;
  char ch='a';
  int k=ch;
  double const cst=5.5;
  double const & re=cst;
  //re=2; error
  cout<<"cst="<<cst<<endl;
  cout<<"re="<<re<<endl;
  //cst=8;error

  //re=20; error
  //double & ri=cst; error
  double const & ref_const=x;

   cout<<"x="<<x<<endl;
  cout<<"ref_const="<<ref_const<<endl;
  x=77;

  cout<<"x="<<x<<endl;
  cout<<"ref_const="<<ref_const<<endl;


  //ref_const=2; error

  //paramètre de fonction: passage par référence

  //incr(5); error

  int m=20;
  cout<<"Avant l'appel de la fonction m="<<m<<endl;
  incr(m);
  cout<<"Après l'appel de la fonction m="<<m<<endl;

int h=20;
  test_2(h);
  test_2(2);

  


  
   
    





    

    return 0;
}