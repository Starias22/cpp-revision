#include <iostream>
int main()
{
    std::cout<<"Hello bro\n";
    bool test=true;
    std::cout<< test;
    test=true;
    std::cout<<test;
   int  age=20;
   std::cout<<age;
   float taille=1;
   std::cout<<taille;
   taille=1.5;
   std::cout<<taille;
   short a=40;
   std::cout<<a;
   //a=age error
   //int age=4587 error
   char c='A';
   //char d='dd' error

   int b{4};
   std::cout<<b;
  
    std::cout<<b;
   std::string str="Salut";
    std::cout<<str;
   str="Coucou";
   std::cout<<str;
   const int k=20;
   std::cout<<k;
   

   int const g=55;
   std::cout<<g;
   //k=55error
   const float l=22.8;
   double y=55.7;
   auto var=11;
   auto other{16.7};
   //std::cout<<'cfsq' warning;

  std::cout<<"9/2="<<9/2; 
   std::cout<<"9./2="<<9./2; 
   
    return 0;
}