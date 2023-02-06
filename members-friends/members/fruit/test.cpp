#include<iostream>
using namespace std;

class fruit{


public:

fruit(string n){
    name=n;

}
string name;
 mutable string modif;//or  string mutable  modif;

private :
bool is_delicious;
 static int n;
public:
bool get_delicious(){
  return is_delicious;
}
bool get_delicious() const{
cout<<"The constant member function is the one called\n";
  return is_delicious;
}
void set_delicious(bool del){
    is_delicious=del;

}
void test() const{
modif="Value modified";

}



};

void say_hello() {
    cout<<"Hello world!";

}
int main()
{
    fruit pineple("pineple");
    const  fruit orange("orange");
    fruit  const mango("mango");
    cout<<"First: "<<pineple.name<<endl;
    cout<<"Second: "<<orange.name<<endl;
    cout<<"Third: "<<mango.name<<endl;
    //pineple.is_delicious (Inaccessible)

    cout<<boolalpha;
    pineple.set_delicious(true);
    pineple.get_delicious();
    orange.get_delicious();


    //static member func
    /*pour q'une méthode puis agir  aussi sur
    des objets constants il faudra la marquer constante
    soit surcharger la méthode pour les objets constants*/
    /*Same thing for constant  ojects which are formal argument*/
    /*The instructions inside a const member function shouldn' modify the  attributes
    of the object  except the static attribute which are not
related to the instance
    */
   /*the 'muable' keyword specify which attributes can be modified
   by the constant obect*/




return 0;

}