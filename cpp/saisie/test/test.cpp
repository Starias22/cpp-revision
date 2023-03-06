#include <iostream>
int main()
{
    int age;
    std::cout<<"How old are you?\n";
    std::cin>>age;
    std::cout<<"You are "<<age<<" years old\n";
    //tout s'est bien passé
    std::cout <<"good:"<<std::cin.good()<<"\n";
    //erreurs on liées à la sqisie
    std::cout <<"bad:"<<std::cin.bad()<<"\n";
    //pour les erreurs dues à la saisie par exemple type, out of range, etc
    std::cout <<"fail:"<<std::cin.fail()<<"\n";
    std::string name;
    std::cout<<"Enter your name:";
    std::cin >>name;
    std::cout<<"You name is "<<name<<"\n";
     //tout s'est bien passé
    std::cout <<"good:"<<std::cin.good()<<"\n";
    //erreurs on liées à la sqisie
    std::cout <<"bad:"<<std::cin.bad()<<"\n";
    //pour les erreurs dues à la saisie par exemple type, out of range, etc
    std::cout <<"fail:"<<std::cin.fail()<<"\n";

    
    

}