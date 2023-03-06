#include<iostream>
#include<tuple>
#include<cmath>


using namespace std;
using namespace std::literals;

tuple<double,double> trigo(double angle/*en degré*/)
{
    //auto var=make_tuple(0.0,0.0);
   // return {0.0,0.0};
    //return var;
    return{cos(angle),sin(angle)};
}
void format_trigo(double angle){
    auto t=trigo(angle);
    //cout<<"angle"
    cout<<"cos("<<angle<<" rad)= "<<get<0>(t)<<endl;
    cout<<"sin("<<angle<<" rad)= "<<get<1>(t)<<endl;
    cout<<endl;

}
int main()
{
    //essais

    format_trigo(0);
    format_trigo(45);
    format_trigo(M_PI);
    format_trigo(M_PI/4);

   double angle=M_PI/2;

    auto[cos,sin]=trigo(angle);

    cout<<"cos("<<angle<<" rad)= "<<cos<<endl;
    cout<<"sin("<<angle<<" rad)= "<<sin<<endl;
    cout<<endl;

    

    auto perso=make_tuple("Snow",21);

    auto [nom,age]=perso; 

    cout<<"Nom: "<<nom<<"\tAge: "<<age<<endl;

    auto [nom2,age2]=make_tuple("Pocklez",32);
        cout<<"Nom: "<<nom2<<"\tAge: "<<age2<<endl;
        age2++;
        cout<<"Age: "<<age2<<endl;

         //auto [nom2,age2]=make_tuple("Zidane",48); error

         //auto& [nom3,age3]=make_tuple("Pocklez",32);

//les variables doivent etres declarées a l'avance

     string a;
    int b;
         tie(a,b)=make_tuple("Pocklez",32);
         b++;

         //ignorer certaines valeurs

         //supposons que je m'interresse juste au sinus de l'angle
     double sin_pi_half;
         //tie(sin_pi_half)=trigo(M_PI); error
        tie(ignore,sin_pi_half)=trigo(M_PI);

        cout<<"Le sinus de PI/2 donne: "<<sin_pi_half<<endl;




    return 0;
}