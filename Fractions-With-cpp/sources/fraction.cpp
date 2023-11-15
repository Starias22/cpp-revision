#include<iostream>
#include"../header/fraction.hpp"
#include "../header/division.hpp"


/*fraction fraction:: operator[const int dim](){

this=new fraction[dim];
}*/
void fraction::operator=(string frac){
    *this=fraction(frac);

}


void fraction::operator=(float dec){
    *this=fraction(dec);

}
int power(int a,int n){
    int prod=1;
    for(int i=0;i<n;i++)
    prod*=a;
    return prod;
}


fraction::fraction(string frac){
tabstr tab=split(frac);
num=stoi(tab[0]);
den=stoi(tab[1]);
}
fraction::fraction(float dec){
    bool is_negetive=false;
    string dec_to_string=to_string(dec);
    if(dec_to_string[0]=='+'||dec_to_string[0]=='-')
    dec_to_string.erase(0,1);

    if(dec<0)

    is_negetive=true;


    tabstr tab=split(dec_to_string,".");



    while(regex_match(tab[1],regex("0$")))
    tab[1].pop_back();

    int int_part=stoi(tab[0]);
    int dec_part=stoi(tab[1]);
    int nb_digit_dec_part=tab[1].length();
    num=abs(dec)*(float)power(10,nb_digit_dec_part);
    den=power(10,nb_digit_dec_part);
    simplify();
    if(is_negetive)

        num*=-1.;


}

fraction::fraction(double dec){
    bool is_negetive=false;
    string dec_to_string=to_string(dec);
    if(dec_to_string[0]=='+'||dec_to_string[0]=='-')
    dec_to_string.erase(0,1);

    if(dec<0)

    is_negetive=true;


    tabstr tab=split(dec_to_string,".");



while(regex_match(tab[1],regex("0$")))
tab[1].pop_back();

int int_part=stoi(tab[0]);
int dec_part=stoi(tab[1]);
int nb_digit_dec_part=tab[1].length();
num=abs(dec)*(float)power(10,nb_digit_dec_part);
den=power(10,nb_digit_dec_part);
simplify();
if(is_negetive)

num*=-1.;


}
fraction::~fraction(){
    //cout<<"Destruction"<<endl;
}
void fraction:: operator<<(fraction f){
    cout<<num<<"/"<<den<<endl;


}
//fraction(int num,int den,bool symp=true);
fraction:: fraction(int num,int den=1,bool simp)

{
    if(!den)
    throw division_by_zero();
    /*We don't wanna have negative denominator*/
    if(den<0)
    {
        num*=-1;
        den*=-1;
    }
this->num=num;
this->den=den;
if(simp)
    simplify();

}
fraction::fraction(){
    num=0;
    den=1;

}
void fraction:: display(bool frac){
    simplify();
    /*if frac is true, force display as fraction*/

    /*else if dennominator is 1 or numerator is 0*/
    if(!frac&& ((*this).den==1 ||(*this).num==0))
    {

        cout<<(*this).num;
        return ;


    }

    cout<<(*this).num<<"/"<<(*this).den;
}
void fraction:: displayn(bool frac){
    simplify();

    if(!frac&& ((*this).den==1 || (*this).num==0))
    {

        cout<<(*this).num<<endl;
        return ;

}

    cout<<(*this).num<<"/"<<(*this).den<<endl;
}


void fraction:: displayt(bool frac){
/* simplify();

    if(!frac&& ((*this).den==1 || (*this).num==0))
    {

        cout<<(*this).num<<endl;
        return ;

}

    cout<<(*this).num<<"/"<<(*this).den<<endl;*/
display();
cout<<"\t";
}

bool  fraction::operator!=(fraction f){
    return !(*this==f);
}
fraction fraction::operator!(){
    return fraction(num==0?0:1);

}
fraction fraction::inverse(){
    /*assure the denominator is not null*/
    if(den)
    return fraction(den,num);
    throw  division_by_zero();


}
/*fraction::fraction(fraction &f){
    f=*this;

}*/


bool fraction:: operator==(fraction f){
    simplify();
    f.simplify();
    return num==f.num&& den==f.den;

}

float abs(float val){
    return val>=0?val:-val;

}
double abs(double val){
    return val>=0?val:-val;

}
int abs(int val){
    return val>=0?val:-val;

}
bool fraction:: operator<(fraction f){
    fraction f1(num*f.den,den*f.den);
    fraction f2(f.num*den,f.den*den);
    return f1.num<f2.num;
}
bool fraction:: operator>=(fraction f){
    return !(*this>f);
}
bool fraction:: operator>(fraction f){
    fraction f1(num*f.den,den*f.den);
    fraction f2(f.num*den,f.den*den);
    return f1.num>f2.num;

} bool fraction:: operator<=(fraction f){
    return !(*this>f);
}
fraction fraction:: operator+(fraction f){
    fraction g(num*f.den+den*f.num,den*f.den);
    //g.simplify();
    return g;
}

bool fraction:: operator<(int n){
    return*this<fraction(n);

}
bool fraction:: operator<=(int n ){
    return*this<=fraction(n);

}
bool fraction:: operator>(int n ){
  return *this >fraction(n);

}
bool fraction:: operator>=(int n){
  return *this >fraction(n);

}
bool  fraction ::operator!=(int n ){
    return!(*this==n);

}
bool fraction:: operator==(int n){
      return *this ==fraction(n);


}


fraction fraction:: operator-(fraction f){
    fraction g(num*f.den-den*f.num,den*f.den);
    //g.simplify();
    return g;
}
fraction fraction:: operator+(){
    //simplify();
    return *this ;
}


fraction fraction:: operator-(){
fraction f(-1); // -1/1
    (*this)*=f;
    simplify();
    return *this ;
}
fraction fraction:: operator+(int number){
    return *this+fraction(number);

}
fraction fraction:: operator-(int number){

    return *this-fraction(number);
}
fraction fraction:: operator*(int number){
    return *this*fraction(number);
}
fraction fraction:: operator/(int number){
    /*Assure thet number is not null*/
    if(number)
    return *this*fraction(number,1);
    throw  division_by_zero ();
    //else

}

fraction fraction:: operator++(){
    fraction one(1);
    *this+=one;
    simplify();
    return *this ;
}

fraction fraction:: operator--(){
    fraction one(1);
    return *this-=1 ;
}

fraction fraction:: operator*(fraction f){
    fraction g(num*f.num,den*f.den);
   // g.simplify();
    return g;
}
fraction fraction:: operator/(fraction f){
    fraction g(num*f.den,(*this).den*f.num);

    return g;

    throw division_by_zero() ;

}
fraction fraction:: operator+=(fraction f){

  * this=*this+f;
    simplify();
    return *this;
}
fraction fraction:: operator-=(fraction f){

  * this=*this-f;
    return *this;
}
fraction fraction:: operator*=(fraction f){

  * this=*this*f;
    simplify();
    return *this;
}
fraction fraction:: operator/=(fraction f){

  * this=*this/f;
    simplify();
    return *this;
}
void fraction::simplify(){
    int n=num,d=den;
    if(n==0)
    {
    num=n;
    den=1;
    return ;
    }

    num/=gcd(abs(n),abs(d));
    den/=gcd(n,d);
}



fraction fraction:: operator+=(int n){
    return *this+=fraction(n/*den=1*/);

}
fraction fraction:: operator-=(int n){
    return *this-=fraction(n/*den=1*/);

}
fraction fraction:: operator*=(int n){
    return *this*=fraction(n/*den=1*/);

}
fraction fraction:: operator/=(int n/*den=1*/){
    /*Assure n is not null*/
    if(n)
    return *this/=fraction(n);
    throw division_by_zero ();

}


int gcd(int a,int b){

    int min=a>b?b:a;

    int gcd;
    for(int i=1;i<=min;i++)

        if(a%i==0&&b%i==0)

            gcd=i;


    return gcd;
}
tabstr split(string str,string sep){

auto res= search(str.begin(),str.end(),sep.begin(),sep.end()) ;
if(res==sep.end())
    return {str};
    else
    {
        string one={str.begin(),res},
        two={res+1,str.end()};
        return {one,two};
    }
}
