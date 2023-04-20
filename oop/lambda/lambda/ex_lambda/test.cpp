#include<iostream>

using namespace std;
int main()
{

/*exemple de lambda:code minimal*/


    [/*Zone de capture*/] (/*paramètres*/) ->void { /*type de retour*/
    };
       

        [/*Zone de capture*/] (/*paramètres*/) /* Le type de retour étant void, ...*/ { /*type de retour*/
    };
    //ou encore
    []{};// () facultatifs  en cas d'absence de paramère


    //un lamba: hello_world

   [] {
    cout<<"Hello dear C programmers!"<<endl;
   };

//declaration  execution
    [] {
    cout<<"Hello dear C programmers!"<<endl;
   }();

// lambda sum
[](int a,int b)->int{
return a+b;
};
// lambda sum
[](int a,int b)->auto{
return a+b;
};
//call
 
[](int a,int b)->int{
    cout<<"On veut faire la somme de "<<a<<" et "<<b<<endl;
return a+b;
}(1,2);


auto lambda= [] {
    cout<<"Hello dear C programmers!"<<endl;
   };
   lambda();

//le compilateur pouvait déduire le type de retour du lamba
auto sum=[](int a,int b)->int{
    cout<<"On veut faire la somme de "<<a<<" et "<<b<<endl;
return a+b;
};

int b=sum(20,21);
cout<<"b="<<b<<endl;




   // dec-affectation


   //ex

  auto operation= [](int a, int b,char op)->double{
    if(op=='+')
    return a+b;
    else if(op=='-')
    return a-b;
    else if(op=='*')
    return a*b;
    else if(op=='/')
    {
        if(b==0)

            throw invalid_argument("Le dénominateur doit être non nul!\n");
        else
        //return a/b;
         return a/(b*1.0);
         // ::: auto
    }
    

    else 
    {
        throw invalid_argument("Opérateur invalide!\n");
        //return -1;
    }

    //modif por retourner double
    
   };

  auto one=operation(1,2,'+');
  auto two=operation(20,2,'-');
  auto three=operation(15,2,'*');
  auto four=operation(4,2,'/');
  auto five=operation(5,2,'/');

  double  six,seven,eight,nine;


  

  cout<<"one= "<<one<<endl;
  cout<<"two= "<<two<<endl;
  cout<<"three= "<<three<<endl;
  cout<<"four= "<<four<<endl;
  cout<<"five= "<<five<<endl;


  try{
    six=operation(20,3,'/');
    cout<<"six= "<<six<<endl;

   /* seven=operation(20,3,'=');
    cout<<"seven= "<<seven<<endl;

    eight=operation(20,4,'=');
    cout<<"eight= "<<eight<<endl;*/

     nine=operation(20,0,'/');
    cout<<"nine= "<<nine<<endl;

  }
catch(invalid_argument e)
{
    cout<<"Erreur! "<<e.what();

}





  

  //auto one=operation(1,2);




    return 0;
}