#include <iostream>
using namespace std;

int gcd(int a,int b){
    //lambda retournant le min
   auto min= [](int a,int b){
        /*if(a>b)
        return b;
        else 
        return a;*/

        return a>b?b:a;
    };
   
    int i,gcd=1;
    for(i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0 && i>gcd )
        gcd=i;
        
    }

    return gcd;

}

struct Fraction{
    int num;
    int den;
};

//gérer les cas 0 et 1

/*Fraction simplify(Fraction f){
    f.num/=gcd(num,den);
    f.den/=gcd(num,den);
}*/

Fraction operator + (Fraction f, Fraction g)
{
    int num{f.num*g.den-f.den*g.num},den{f.den*g.den};

    return{num,den};
}

/*Fraction operator+(Fraction f, Fraction g)
{
    int num{f.num*g.num},den{f.den*g.den};
    return{num,den};
}*/
Fraction operator*(Fraction f, Fraction g)
{
    int num{f.num*g.num},den{f.den*g.den};
    
    return{num,den};
}

Fraction operator -(Fraction f, Fraction g)
{
   int num{f.num*g.den-f.den*g.num},den{f.den*g.den};
   num/=gcd(num,den);
    den/=gcd(num,den);
    return{num,den};
}



Fraction operator /(Fraction f, Fraction g)
{
    
   int num{f.num*g.den},den{f.den*g.num};
   num/=gcd(num,den);
    den/=gcd(num,den);
    return{num,den};
}

//- unaire
Fraction operator -(Fraction f)
{
   int num{-f.num},den{f.den};
   num/=gcd(num,den);
    den/=gcd(num,den);
    return{num,den};
}

//+ unaire
Fraction operator +(Fraction f)

{
   return f;
}

/*Fraction operator +=(Fraction f,Fraction g)
{
    f=f+g;
   return f;
}*/

Fraction operator +=(Fraction &f,Fraction g)
{
    f=f+g;
   return f;
}

Fraction operator -=(Fraction &f,Fraction g)
{
    f=f-g;
   return f;
}
Fraction operator *=(Fraction &f,Fraction g)
{
    f=f*g;
   return f;
}
Fraction operator /=(Fraction &f,Fraction g)
{
    f=f/g;
   return f;
}

Fraction operator + (Fraction f, int g)
{
    Fraction frac{g,1};
    int num{f.num*frac.den+f.den*frac.num},den{f.den*frac.den};
    return{num,den};
}
Fraction operator - (Fraction f, int g)
{
    Fraction frac{g,1};
    int num{f.num*frac.den-f.den*frac.num},den{f.den*frac.den};
    return{num,den};
}
Fraction operator * (Fraction f, int g)
{
    Fraction frac{g,1};
    int num{f.num*frac.num},den{f.den*frac.den};
    return{num,den};
}
Fraction operator / (Fraction f, int g)
{
    Fraction frac{g,1};
    int num{f.num},den{f.den*frac.num};
    return{num,den};
}

Fraction operator +=(Fraction &f,int g)
{
    f=f+g;
   return f;
}

Fraction operator -=(Fraction &f,int g)
{
    f=f-g;
   return f;
}
Fraction operator *=(Fraction &f,int g)
{
    f=f*g;
   return f;
}
Fraction operator /=(Fraction &f,int g)
{
    f=f/g;
   return f;
}
Fraction operator ++(Fraction &f)
{
    f=f+1;
   return f;
}
Fraction operator --(Fraction &f)
{
    f=f-1;
   return f;
}

//comment coder post-incrementation-decrementation
ostream& operator<<(std::ostream & os, Fraction fraction){

 return os<<fraction.num<<"/"<<fraction.den;
}

//opérateurs de comparaison

bool operator == (Fraction f,Fraction g){
    return f.num==g.num && f.den==g.den;
}
bool operator!=(Fraction f,Fraction g){
    // ! prioritaire et non préalalement défini pour les fractions
    return !(f==g);
}

//comment assurer la commutativité des opérateurs en C++

//definissons l'opérateur !

Fraction operator !(Fraction f){
    Fraction zero{0,1},one{1,1};
    //return f.num==0?{0,1}:{1,1};
        return f.num==0?zero:one;

}


bool operator<(Fraction f,Fraction g){
    int prod=f.den*g.den;
    Fraction frac_a=f*prod,frac_b=g*prod;
    return frac_a.num<frac_b.num;

}
bool operator<=(Fraction f,Fraction g){
    int prod=f.den*g.den;
    Fraction frac_a=f*prod,frac_b=g*prod;
    return frac_a.num<frac_b.num;

}

//rendre fractions au meme denominateur


bool operator>(Fraction f,Fraction g){
    int prod=f.den*g.den;
    Fraction frac_a=f*prod,frac_b=g*prod;
    return frac_a.num>frac_b.num;

}
bool operator>=(Fraction f,Fraction g){
    int prod=f.den*g.den;
    Fraction frac_a=f*prod,frac_b=g*prod;
    return frac_a.num>=frac_b.num;

}

int main()
{
    Fraction f{5,4},g,h;
    cout<<"Fraction f:"<<f.num<<"/"<<f.den<<endl;
    g.num=6;
    g.den=11;
    cout<<"Fraction g:"<<g.num<<"/"<<g.den<<endl;
    h=f;
    cout<<"Fraction h:"<<h.num<<"/"<<h.den<<endl;
    //h=f+g; won't work
    h=f+g;
    cout<<"Fraction f+g:"<<h.num<<"/"<<h.den<<endl;
    h=g-f;
    cout<<"Fraction g-f"<<h.num<<"/"<<h.den<<endl;
    h=f/g;
    cout<<"Fraction f/g:"<<h.num<<"/"<<h.den<<endl;
    int a=-2,b=+4;
    //h=+f; wont' work

    h=-f;
    cout<<"Fraction -f:"<<h.num<<"/"<<h.den<<endl;
    h=+f;

    cout<<"Fraction +f:"<<h.num<<"/"<<h.den<<endl;
    double c=5.6;

    cout<<"c= "<<c<<endl;
   double k= c+=2;
    cout<<"c= "<<c<<endl;
    cout<<"k= "<<k<<endl;
    h=f;
    cout<<"Fraction h:"<<h.num<<"/"<<h.den<<endl;
    cout<<"Fraction g:"<<g.num<<"/"<<g.den<<endl;
   Fraction frac= h+=g;
    cout<<"Fraction h:"<<h.num<<"/"<<h.den<<endl;
    cout<<"Fraction frac:"<<frac.num<<"/"<<frac.den<<endl;

    //constat: h non modifié  solution: utiliser les références

    //verifier priorité(essayer avec plusieursoperateurs simultnément)

    frac=f+g*h -frac/f;
    cout<<"Fraction frac:"<<frac.num<<"/"<<frac.den<<endl;



double m=k++;

    int pgcd=gcd(45,25);
    cout<<"pgcd(45,25)="<<pgcd<<endl;

    int p,q,r,s;
    p=2;
    s=2;
    q=p++;
    r=++s;

    cout<<"q="<<q<<endl;
    cout<<"r="<<r<<endl;

        cout<<"Fraction f:"<<f.num<<"/"<<f.den<<endl;
     Fraction fr=++f;
        cout<<"Fraction f:"<<f.num<<"/"<<f.den<<endl;
        cout<<"Fraction fr:"<<fr.num<<"/"<<fr.den<<endl;

     k=++k;
     k=c++;
     
     cout<<f<<endl;
     cout<<"Fraction f:"<<f<<endl;


     if(f==g)
     cout<<"Les fractions f et g sont égales\n";
     else 
     cout<<"Les fractions f et g ne sont pas égales\n";

     cout<<boolalpha;
     bool my_bool;
     my_bool=f!=g;

     cout<<my_bool<<endl;
     //vérifier si l'opérateur de flux est prioritaire sur !
     cout<<(f!=g)<<endl;

     int x=!2;
     float my_float=!5;
     

     cout<<"x="<<x<<endl;
     cout<<"my_float="<<my_float<<endl;

     my_float=!0;
    cout<<"my_float="<<my_float<<endl;
    

    //this line will cause a problem since ! operator was not declared
     //Fraction my_fraction=!f;
     //cout<<"my_fraction="<<my_fraction<<endl;
     Fraction my_fr{40,55};

     cout<<my_fr<<endl;
     my_fr=!my_fr;
        cout<<my_fr<<endl;



     




     

    



    






    






    

    return 0;
}