#include"../header/person.hpp"

int main()
{

    person p("Jérémie","ROBERT",20,false);
    p.display();
    p.display();
    person q =person("Fofana","BOB",15,false);
    q.display();

    p=person("Ismael","ZURICH",2,true);
    p.display();

   person r("John","SAMSON",15);
   r.display();
   person lambda;
   lambda.display();
   lambda=person("Hervé","ART");
   lambda.display();






    return 0;
}
