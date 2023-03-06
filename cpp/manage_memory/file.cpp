#include <iostream>
#include <vector>

using namespace std;

int main(){
    
 int a=45;
    int *ptr=(int *)malloc(sizeof(int));
    *ptr=28;
    int *ptr2=(int *)malloc(sizeof(4));
    ptr2=&a;
    *ptr2=55;
    auto ptr3=(float *)malloc(sizeof(float));
    *ptr3 =20.58;
    int *k=new int;//un pointeur sur un entier
    *k=a;
   int *ptr4= new int[4];//un tableau de 4
   auto *ptr5=new int[sizeof(int)];//un tableau de 4
   ptr4=ptr2;
   *ptr2=23;


   int *tab=new int[3];//un tableau à trois éléments
   *tab=0;
   *(tab+1)=1;
   tab[2]=2;
   tab[3]=3;
   /*tab[4]=4;
   tab[5]=6;*/
   //int **matrix=new int[4][3];
float *f=new float;
string * s=new string;//un pointeur de string
 *s="ma chaine";
 cout<<"*s:"<<*s<<endl;
 auto my_tab_str=new string[4]; //tableau de 4 string
 *my_tab_str="One";

 
 vector<int> * var=new vector<int>; // un pointeur sur un tableau dynamique de int
 
 


 free(ptr);
 //free(ptr2);
 //free(ptr3);
 //free(ptr4);
 delete ptr3;
  //delete ptr3; double free
  //delete  ptr4;
  delete  var;
  delete [] my_tab_str;
  //delete ptr2;//non car ptr2 n'a pas été alloué avec new

}