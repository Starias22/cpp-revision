#include <iostream>
#include <sstream>



int main()
{
    int age;
    float taille;
    std::string chaine;

    //conversion de chaine en nombre

    //convertir une chaine en int

    chaine="20";
     std::stringstream(chaine)>>age;

    std::cout<<"Après conversion, age="<<age<<std::endl;


chaine="1.58";
std::stringstream(chaine)>>taille;
    std::cout<<"Après conversion, taille="<<taille<<std::endl;

    //conversion de nombre en chaine
    int nb=16;
    std::string chr,str;

    std::stringstream ss;//ou osstringstream
    ss<<std::dec<<nb,
    str=ss.str();

    std::cout<<"conversion de 16 en chaine de caractères(base décimale): str="<<str<<std::endl;

//base hexadécimale
    ss<<std::hex<<14; //100 en base 16
    str=ss.str();

    std::cout<<"conversion de 14 en chaine de caractères:base 16  str="<<str<<std::endl;
//base octale
    ss<<std::oct<<14; //100 en base 16
    str=ss.str();

    std::cout<<"conversion de 14 en chaine de caractères:base 8  str="<<str<<std::endl;




   
    return 0;
}