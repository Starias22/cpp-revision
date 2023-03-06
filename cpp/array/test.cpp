#include<iostream>
#include<array>

int main()
{
    std::array<int, 3> tab{1,2,3};
    std::array<float,5>tab_f{4,2};
    std::array<double,5>tab_d{};
    //std::array<int,3>tab_int{5,6,7,9}; //error

    for (auto elt:tab)
    std::cout<<elt<<std::endl;;
    std::cout<<"Taille de tab_f: "<<tab_f.size()<<std::endl;

      std::cout<<"tab_d est vide ?:"<<tab_d.empty()<<std::endl;
      tab.front();
      tab.back();

      std::string sentence{};
      std::cout<<"Entrer une phrase: ";
      std::cin>>sentence;
      std::cout <<"Nombre de lettres: "<< sentence.size()<<std::endl;

      for (char c : sentence)
      std::cout<<c<<"\n";
      sentence[5]='D';

      sentence.front();
      sentence.back();
      sentence.empty();

      sentence.pop_back();
      sentence.push_back('Z');
      sentence.clear();
      

    return 0;
}
