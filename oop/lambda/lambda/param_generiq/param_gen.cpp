#include<iostream>
using namespace std;

int main()



{

    /*de même  qu'on peut laisser le compilateur deviner le type de retour de nos lambdas,
     on peut le laiseer deviner le type des parametre grace a auto */


     auto my_lambda= [](auto var){

     };

     //possible donc d'appeler un lambda avec différents types d'argument

     my_lambda(2);
     my_lambda("Ceci est un message");
     my_lambda(3.2);

//preciser auto comme type de retour revient a ne pas specifierde type deretour
     auto product=[](auto a,auto b){
        return a*b;

     };
     cout<<"product(4,20)="<<product(4,20)<<endl;
      cout<<"product(4,2.55)="<<product(4,2.55)<<endl;






    return 0;
}