#include <iostream>
//#include<ciso646>

int main(){
//using namespace std::literals;

bool cond1=true;
bool cond2{false};
bool cond;
std::cout<<"cond1="<<cond1<<"\n";
std::cout<<"cond2="<<cond2<<"\n";
// opérateurs boléens

//court circuit

cond=!true;
std::cout<<"!true="<<cond<<"\n";

cond=!false;
std::cout<<"!false="<<cond<<"\n";

cond=true|| true;
std::cout<<"true|| true="<<cond<<"\n";

cond=true|| false;
std::cout<<"true|| false="<<cond<<"\n";

cond=false|| false;
std::cout<<"false|| false="<<cond<<"\n";

cond=true|| false;
std::cout<<"true|| false="<<cond<<"\n";


cond=true&& true;
std::cout<<"true&& true="<<cond<<"\n";

cond=true&& false;
std::cout<<"true&& false="<<cond<<"\n";

cond=false&& false;
std::cout<<"false&& false="<<cond<<"\n";

cond=true&& false;
std::cout<<"true&& false="<<cond<<"\n";

//opérateurs de comparaison: == != > < >= <=

cond=2==6;
std::cout<<"2==6 ? "<<cond<<"\n";

cond=2!=8;
std::cout<<"2!=8 ? "<<cond<<"\n";

cond=2>-1;
std::cout<<"2>-1 ? "<<cond<<"\n";

cond=2<8;
std::cout<<"2<8 ? "<<cond<<"\n";

cond=2>=8;
std::cout<<"2>=8 ? "<<cond<<"\n";

cond=2<=8;
std::cout<<"2<=8 ? "<<cond<<"\n";
int a,b,c;

a=20,b=40;
cond=a==20|| b>20;
std::cout<<"a==20|| b>20 ? "<<cond<<"\n";


//structures conditionnelles

int mark;
//if 


mark=16;
//mark=12;
//mark=8

if (mark>=12)
//{
    std::cout<<"Vous avez validé" <<std::endl;
    //autres instructions
//}


//if :::  else 
//mark=15
mark=5;




if (mark>=12)
{
    std::cout<<"Vous avez validé" <<std::endl;
}
else {
    std::cout<<"Vous n'avez pas validé" <<std::endl;
}


std::cout<<"Entrez votre note: ";
std::cin>>mark;
if (mark<12)
    std::cout<<"Vous n'avez pas validé\n " ;
else 
{
std::cout<<"Vous avez validé " ;
if(12<=mark&& mark<14)
std::cout<<"avec une mention assez bien\n";
else if(14<=mark&& mark<16)
std::cout<<"avec une mention bien\n";
else if(16<=mark&& mark<18)
std::cout<<"avec une mention très bien\n";
else
std::cout<<"Vous êtes un surdoué\n";

}
/*Demandons à l’utilisateur de rentrer un nombre et nous lui aﬃcherons la période de la journée
correspondante : nuit, matin, après-midi, soir. Ainsi, entre 8h et 12h, nous sommes le matin.
Mais attention, nous voulons aussi gérer les cas un peu spéciaux que sont midi, minuit et un
nombre qui n’est pas entre 0 et 24.*/

int number;
std::cout<<"Entrer un nombre entre 0 et 24: ";
std::cin>>number;
//if (number >0 && number<)
if(1<=number && number <12)
std::cout<<"\nMatin\n";
else if(number==12)
std::cout<<"\nMidi\n";
else if (12<number && number<18)
std::cout<<"\nAprès midi\n";
else if (number >= 18 && number < 24)
std::cout << "\nSoir\n";
else if (number == 0 || number == 24)
std::cout << "\nMinuit\n";
else 
std::cout << "\nHeure invalide\n" << std::endl;


//ou exclusif

//if(a && !b || !a et)
bool test=true xor false;


int cpt=0;
while(cpt<10)
{
    cpt++;
    std::cout << cpt<<std::endl;

}
//boucles infinies











return 0;
}