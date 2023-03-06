#include <iostream>
#include <vector>
#include <algorithm>
#include <regex>
using namespace std;
 using tabstr=vector<string>;
 //float abs(float val);
int gcd(int a,int b);
tabstr split(string,string sep="/");
int power(int a,int n);

class fraction{
    
    int num;
    int den;
    void simplify();
    public :
            fraction(int num,int den,bool symp=false);
            fraction(string frac);
            fraction inverse();
            fraction(float dec);
            fraction(double dec);
            //fraction(fraction & f);
            
            bool operator==(fraction f);
            void operator =(string frac);
            void operator =(float frac);
            bool operator!=(fraction f);
            fraction operator!();
            bool operator<(fraction f);
            bool operator>=(fraction f);
            bool operator>(fraction f);
            bool operator<=(fraction f);
            fraction operator+(fraction f);
            fraction operator+(int number);
            fraction operator-(int number);
            fraction operator/(int number);
            fraction operator*(int number);
            fraction operator-(fraction f);
            fraction operator+();
            fraction operator-();
            fraction operator*(fraction f);
            fraction operator/(fraction f);
            fraction operator+=(fraction f);
            fraction operator-=(fraction f);
            fraction operator*=(fraction f);
            fraction operator/=(fraction f);
            fraction operator+=(int);
            fraction operator-=(int);
            fraction operator*=(int);
            fraction operator/=(int);
            fraction operator++();
            fraction operator--();

            /*fraction operator+(string a,string b);
            fraction operator-(string a,string b);
            fraction operator*(string a,string b);
            fraction operator/(string a,string b);
            fraction operator+(int a,string b);
            fraction operator-(int a,string b);
            fraction operator*(int a,string b);
            fraction operator/(int a,string b);*/




            void operator<<(fraction f);
            void displayn(bool frac=false);
            void display(bool frac=false);

        

};
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
void fraction:: operator<<(fraction f){
    cout<<num<<"/"<<den<<endl;


}
fraction:: fraction(int num,int den=1,bool simp)
{
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
void fraction:: display(bool frac){
    fraction g(*this);
    g.simplify();
    if(!frac&& (g.den==1 || g.num==0))
    {

        cout<<g.num;
        return ;
        

    }

    cout<<g.num<<"/"<<g.den;
}
void fraction:: displayn(bool frac){
    fraction g=(*this);
    g.simplify();
    if(!frac&& (g.den==1 || g.num==0))
    {

        cout<<g.num<<endl;
        return ;
        
}

    cout<<g.num<<"/"<<g.den<<endl;
}

bool  fraction::operator!=(fraction f){
    return !(*this==f);
}
fraction fraction::operator!(){
    return fraction(num==0?0:1);

}
fraction fraction::inverse(){
    return fraction(den,num);
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

 }
 bool fraction:: operator<=(fraction f){
    return !(*this<f);
 }
fraction fraction:: operator+(fraction f){
    fraction g(num*f.den+den*f.num,den*f.den);
    g.simplify();
    return g;
}
 
fraction fraction:: operator-(fraction f){
    fraction g(num*f.den-den*f.num,den*f.den);
    g.simplify();
    return g;
}
fraction fraction:: operator+(){
    simplify();
    return *this ;
}


fraction fraction:: operator-(){
   fraction one(1);
    *this-=one;
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
    return *this*fraction(number,1);
   }

fraction fraction:: operator++(){
    fraction one(1);
    *this+=one;
    simplify();
    return *this ;
}

fraction fraction:: operator--(){
    fraction zero(0);
    return zero-*this ;
}

fraction fraction:: operator*(fraction f){
    fraction g(num*f.num,den*f.den);
    g.simplify();
    return g;
}
fraction fraction:: operator/(fraction f){
    fraction g(num*f.den,(*this).den*f.num);
    g.simplify();
    return g;
}
fraction fraction:: operator+=(fraction f){
    fraction g=f;
  * this=*this+f;
    simplify();
    return *this;
}
fraction fraction:: operator-=(fraction f){
    fraction g=f;
  * this=*this-f;
    simplify();
    return *this;
}
fraction fraction:: operator*=(fraction f){
    fraction g=(f);
  * this=*this*f;
    simplify();
    return *this;
}
fraction fraction:: operator/=(fraction f){
    fraction g=f;
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


int main(){
    fraction f(1,2);
    f.displayn();
    f=fraction(10,5);
    f.displayn();
    fraction g= fraction(2,6);
    g.displayn();
    g=fraction(2,3)+fraction(5,3);
    g.displayn();
    g*=2;
    g.displayn();
    g-=1;
     g.displayn();
    g/=2;
    g.displayn();
    
    g.displayn();
  cout<<(g==f)<<endl;
  cout<<(g>f)<<endl;
  g=f.inverse();
  g.displayn();
  f=(4);
  f.displayn();
  f/=3;
  f.displayn();
  f=fraction(10,5,true);
  f.displayn();
  f=14/2;
   f.displayn();
   f=fraction(15,3)+fraction(1,3)*2-1;
   f.displayn();
   f+=(3);
   f.displayn();
   f="2/3";
   f.displayn();
   f=0.5;
   f.displayn();
   f=1.5;
   f.displayn();
   f=0.75;
   f.displayn();
    f=2.75;
   f.displayn();
   f=0.250009;
   f.displayn();
   f*=1000;
   f.displayn();
   f/=250009;
   f.displayn();
   f=-1.5;
   f.displayn();
   f=-6;
   f.displayn();
   f=fraction(-9,3);
   f.displayn();
   f=fraction(-9,-3);
   f.displayn();
   f=fraction(-9,-1);
   f.displayn();
  f=-0.33;
  f.displayn();
  f=(-0.66);
  f.displayn();
  f*=-1;
  f.displayn();
  f="+9/15";
  f.displayn();
  f="-90/15";
  f.displayn();
    return 0;
}

fraction fraction:: operator+=(int n){
    return *this+=fraction(n);

}
fraction fraction:: operator-=(int n){
    return *this-=fraction(n);

}
 fraction fraction:: operator*=(int n){
    return *this*=fraction(n);

}
fraction fraction:: operator/=(int n){
    return *this/=fraction(n);

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