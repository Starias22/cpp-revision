#include<iostream>
using namespace std;
int main()
{/*Relatational(comparaison) operators:
used to compare values and return a boolean
value(0 is false and 1 if true)
==
!=
<
<=
>
>=
  */
cout<<"Is 9 equal to3*3? "<<(9==3*3)<<endl;
cout<<"Is 9 diff from 6? "<<(9!=6)<<endl;
int age_fatou=18;
int age_bintou=15;
auto check= age_fatou==age_bintou;
cout<<"check="<<check<<endl;
cout<<"type(check)"<<typeid(check).name()<<endl;


cout<<"Is Bintou older than Fatou? "<<(age_bintou>age_fatou)<<endl;
cout<<boolalpha;
float tail_fatou=1.55;
float tail_bintou=1.66;
cout<<"Is Bintou taller than Fatou? "<<(tail_bintou>tail_fatou)<<endl;
cout<<"Is tail_fatou greater or equal to tail_bintou? "<<(age_bintou>=age_fatou)<<endl;
cout<<"789<85? "<<(789<85)<<endl;
cout<<"789.964<=789.964? "<<(789.964<=789.964)<<endl;
//noboolalpha
cout<<noboolalpha<<"tail_fatou greater than 2? "<<(tail_fatou>2)<<endl;
cout<<"true!=false? "<<boolalpha<<(true!=false)<<endl;
    return 0;
}