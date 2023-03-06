#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
//#include <cctype>


int main(){

using namespace std;
vector<int> tab{56,2,3,4,5,6,7,8,9,10};
vector<float> f{56.2,2.8,3.5,4.2};

vector<int> ::iterator i{tab.begin()};
//vector<int>it{f.begin()}; //error de compilation
cout<<*i<<endl;
*i=-20;
cout<<*i<<endl;
//troisième élément
cout<<*(i+2)<<endl;
auto j{tab.end()};
//ne pas déférencier j

int k;

//Parcours du tableau avec son iterateur 
for (k=0;k<tab.size();k++)
cout<<*(i+k)<<endl;
if(i+10==j)
cout<<"Yes"<<endl;
else 
cout<<"No"<<endl;

//Autre manière de parcourir le tab avec le pointeur
while(i!=j)
{
    cout<<*i<<endl;
    i++;

}
//parcours dans l'ordre inverse

//i pointe sur le dern actu donc le faire pointer à nouveau sur le first

i=tab.begin();
//d'abord décrémenter j
//j--;
do
{
     j--;
    cout<<*j<<endl;
   
}while(j!=i);

//auto 
vector<int> t{56,2,3,4,5,6,7,8,9,10};
i={t.end()};
i={t.begin()};
//i={f.begin()}; error

//nuance obj constant et iterateur constant

const int a=20;
int const b=60;
//a=10; erreur

const vector<int> my_tab{1,2,3,-99};
cout<<"Premier élément:"<<my_tab[0]<<endl;
//tentative de modification
//my_tab[0]=6; error

auto const my_iterator{my_tab.begin()};
cout<<"Premier élément:"<<my_tab[0]<<endl;
//*my_iterator=20;
//cout<<"Premier élément:"<<my_tab[0]<<endl;
 vector<int> my_tab_2{1,2,3,-99};
auto const my_iterator_2{my_tab_2.begin()};
*my_iterator_2=20;
cout<<"Premier élément:"<<my_tab_2[0]<<endl;
//my_iterator+=1; pas faisable
//autre facon de parcourir dans le ses inverse

//i={tab.begin()};
//for(i=tab.begin();i!=tab.rend();i++)

//extraction
i={tab.begin()};
cout<<endl;
vector<int> var={i,i+3};
for(int e : var)
cout<<e<<endl;
tab.erase(i,i+3);
cout<<"AAAA"<<endl;
for(int e :tab)
cout<<e<<endl;

//nb occu

string phrase="J'apprends à programmer en C++";
auto it{phrase.begin()};
auto nb_occu=count(phrase.begin(), phrase.end(),'e');
cout<<"Nombre d'occurences de 'e' dans la phrase: "<<nb_occu<<endl;
auto sub_occ=count(phrase.begin()+10, phrase.end(),'e');
cout<<"Nombre d'occurences de 'e' dans l'extrait: "<<sub_occ<<endl;

vector<string> collection{"manger","parler","bavarder","aimer","vomir","détester"};

//sort(collection.begin(),collection.end()-3);
//sort(collection.begin(),collection.end());
reverse(collection.begin(),collection.end());

for( string e : collection)
cout<<e<<endl;
string sent="I learn to code in C++ language";
remove(sent.begin(),sent.end(),'e');

//for( char e : sent)
//cout<<e;
cout<<sent<<endl;



cout<<boolalpha;
bool m=true;
cout<<m<<endl;
string va="learn";
sent="I earn to code in C++ language to earn the world";
auto g=search(sent.begin(),sent.end(),va.begin()+1,va.end());//un pointeur sur la première occurence du char recherché
 
//cout<<"is earn in the sentence? "<<g<<endl;
cout<<*g<<endl;
bool is_in=g!=sent.end();
cout<<is_in<<endl;

//equal
//g="kgkg"=="kgkg";
vector<int> p={1,2,3,4,5,6,7,8,9,10};
auto ite{p.begin()};
for(auto h=ite;h<p.end();h++)
*h*=-1;
sort(p.begin(),p.end());
/*for(auto h=ite;h<p.end();h++)
cout<<*h<<endl; */

for(auto h=ite;h<p.end();h++)
*h*=-1;
for(auto h=ite;h<p.end();h++)
cout<<*h<<endl;      

sort(p.begin(),p.end());
reverse(p.begin(),p.end());

sort(p.begin(),p.end());

for(auto h=ite;h<p.end();h++)
cout<<*h<<endl; 

sort(p.begin(),p.end(),greater<int>{});

for(auto h=ite;h<p.end();h++)
cout<<*h<<endl; 
int sum=accumulate(p.begin(),p.end(),5);
cout<<sum<<endl; 
int prod=accumulate(p.begin(),p.end(),1,multiplies<int>{});
cout<<prod<<endl;
int check;
check=islower('c');
isupper('2');
isdigit('5');
isdigit('m');
ispunct('k');
ispunct('_');
ispunct('!');
string const number="95824746";
//all_of(number.cbegin(),number.cend(),isdigit);











    return 0;
}