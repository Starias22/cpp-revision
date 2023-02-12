#include <iostream>
using namespace std;

namespace {int i = 100; } // espace de nom anonyme
namespace test {int i=250; } // espace de nom test
namespace UnAutreTest { // espace de nom UnAutreTest
int j=200 ;
void affiche(){
std::cout<< "Je suis dans affiche"<<endl;
}
class toto {};
}//fin namespace UnAutreTest
void essai ();
using UnAutreTest::affiche;
namespace nouveau = UnAutreTest; // Alias ou syno
int main() {
using test::i; //synonyme local à la fonction principale
cout<<"::i: "<<::i<<endl;

::i=4;//unnamed
cout<<i<<endl;
cout<<::i<<endl;
i=800;
essai();
cout<<"i="<<i<<endl;
cout<<::i<<endl;
i = 5000;
cout<<"i de test :"<<i<<endl;
affiche();
nouveau::affiche();
//j=4;//inaccessible
return 0;
}
void essai (){
    i=200;//le i du nasp anonyme
    cout<<i<<endl;
}