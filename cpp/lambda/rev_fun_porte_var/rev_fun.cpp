#include <iostream>

using namespace std;

int glob=20;

void test()
{
    int a=25;
    
   
   //cout<<"var="<<var<<endl; error
    cout<<"glob="<<glob<<endl;
    glob++;

    cout<<"glob="<<glob<<endl;

}
void test4(){
    int glob=4;
    cout<<"gob="<<glob;

}
void test2(){

 int var=1;
 cout<<endl<<endl;
  
  cout<<"Valeur de var  : var= "<<var<<endl; 

  var++; 
   // cout<<"Valeur de var à la fin de l'exécution de la fonction: var= "<<var<<endl; 

}
void test3(){

static int var=1;
//cout<<endl<<endl<<"Variable statique en C++\n";
  
  cout<<"Valeur de var  : var= "<<var<<endl; 

  var++; 
    //cout<<"Valeur de var à la fin de l'exécution de la fonction: var= "<<var<<endl; 

}
int main()
{
int var=25;

test();

cout<<"Valeur de glob dans la fonction main: glob="<<glob<<endl;
glob*=3;
cout<<"Valeur de glob dans la fonction main: glob="<<glob<<endl;

test2();
test2();
test2();
test2();
test2();

test3();
test3();
test3();
test3();
test3();


test4();
//utiliser ce principe por déterminer le nombre d'appels d'une fonction donnée au cours d'un programme


    return 0;
}