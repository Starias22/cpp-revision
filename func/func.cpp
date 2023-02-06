#include<iostream>
//#include<typeinfo>
using namespace std;
typedef float real;
void displayMessage(string message="Hello world!");

int main(){

    displayMessage();
    displayMessage("How are you guys?");

    int tab [3] [4] = { { 1, 2 } , { 3, 4, 5 } } ;
    int tab2 [3] [4] = { 1, 2 , 3, 4, 5 } ;
    
    
  /*cout<<"tab2[0][0]="<<tab2[0][0]<<endl;
  cout<<"tab2[0][1]="<<tab2[0][1]<<endl;
  cout<<"tab2[0][2]="<<tab2[0][2]<<endl;
  cout<<"tab2[0][3]="<<tab2[0][3]<<endl;
  cout<<"tab2[1][0]="<<tab2[1][0]<<endl;
  cout<<"tab2[1][1]="<<tab2[1][1]<<endl;
  cout<<"tab2[1][2]="<<tab2[1][2]<<endl;
  cout<<"tab2[1][3]="<<tab2[1][3]<<endl;
  cout<<"tab2[2][0]="<<tab2[2][0]<<endl;
  cout<<"tab2[2][1]="<<tab2[2][1]<<endl;
  cout<<"tab2[2][2]="<<tab2[2][2]<<endl;
  cout<<"tab2[2][3]="<<tab2[2][3]<<endl;
  
  cout<<"tab[0][0]="<<tab[0][0]<<endl;
  cout<<"tab[0][1]="<<tab[0][1]<<endl;
  cout<<"tab[0][2]="<<tab[0][2]<<endl;
  cout<<"tab[0][3]="<<tab[0][3]<<endl;
  cout<<"tab[1][0]="<<tab[1][0]<<endl;
  cout<<"tab[1][1]="<<tab[1][1]<<endl;
  cout<<"tab[1][2]="<<tab[1][2]<<endl;
  cout<<"tab[1][3]="<<tab[1][3]<<endl;
  cout<<"tab[2][0]="<<tab[2][0]<<endl;
  cout<<"tab[2][1]="<<tab[2][1]<<endl;
  cout<<"tab[2][2]="<<tab[2][2]<<endl;
  cout<<"tab[2][3]="<<tab[2][3]<<endl;*/



  real a=5;
  cout<<"a="<<a<<endl;
  float g=10;
  a+=g;
  g+=a;
  cout<<"a="<<a<<endl;
  cout<<"g="<<g<<endl;
  //cout<<typeid(decltype(a));
 // typedef int integer;
  //integer j=44; 
   //cout<<"j="<<g<<endl;
   cout<<"type of g: "<<typeid(g).name()<<endl;
   cout<<"type of g: "<<typeid(a).name()<<endl;
    cout<<"type of tab: "<<typeid(tab).name()<<endl;
    float x[10][5];

    cout<<"type of x: "<<typeid(x).name()<<endl;
    bool b=true;
    cout<<"type of b: "<<typeid(b).name()<<endl;
    typedef int integer;
      integer k=55;
      integer tab3[10];
      integer tab4[]={'A','0','a','Z','z'};
      cout<<"tab4[0]="<<tab4[0]<<endl;
      cout<<"tab4[1]="<<tab4[1]<<endl;
      cout<<"tab4[2]="<<tab4[2]<<endl;
      cout<<"tab4[3]="<<tab4[3]<<endl;
      cout<<"tab4[4]="<<tab4[4]<<endl;
      //typedef bool integer;

typedef integer inte;
typedef int tab_ten[10];

tab_ten t={1,2,3};









    return 0;

}
void displayMessage(string message){
    cout<<message<<endl;

}