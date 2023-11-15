#include"../header/fraction.hpp"
//void display_fraction(fraction tab[]);
fraction max(fraction [],int );
fraction sum(fraction *,int);

int main(){
//An exception will be thrown ifwe  uncomment the next line
  //fraction l(1,0);
    fraction f(1,2);

    f=fraction(10,5);
    f.displayn();
    fraction g= fraction(2,6);
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
  int c[10];

    fraction tabr[10];


/*create a table and initialize each element using
the constructor without parameter*/
  cout<<"Use of table of fractions\n";
  fraction tab2[10]{} ;
  fraction tab3[10];
  fraction tab4[10]={} ;
  cout<<"1st element in tab2: ";
  tab2[0].displayn();
cout<<"6th element in tab2: ";
  tab2[5].displayn();

/*create a table and initialize  the first element with the constructoor
with 2 parameters and the others elements using the constructor
without parameter*/
  fraction tab[10]{fraction(2,3)} ;

  cout<<"1st element in tab: ";
  tab[0].displayn();
  cout<<"6th element in tab: ";
  tab[5].displayn();
cout<<"f:";
f.displayn();
tab[5]=8;
tab[6]=f;
tab[7]=tab[6]*3+1;

cout<<"Let's browse the fraction table tab:\n ";
  for(fraction f:tab)
  f.displayt();

  tab[1]=2;
  tab[1]*=f;
  tab[2]=-69;
  tab[3]=fraction(4,6);
  tab[4]=fraction(20,-66);
  tab[9]=5;
  cout<<"Let's display the table once again before loooking for max\n";
  for(fraction f:tab)
  f.displayt();

  cout<<"The greatest fraction in tab is: ";
  max(tab,10).displayn();

  cout<<"Let us work with pointers\n";
  fraction *p;
  fraction k=0.33;
  p=tab;
  *p=k;
*(p+5)=-589/10;
*(p+7)=(float)589/10;

  cout<<"Browsing table to see changes\n";
for(fraction f:tab)
f.displayt();


fraction q=fraction(-2,66);
q.displayn();


cout<<"Let's remember the fractions table\n";
for(fraction f:tab)
f.displayt();
fraction s=sum(p,10);
cout<<"The sum of the fractions table elements gives: ";
s.displayn();

if(s==0)
cout<<"This sum null negetive\n";
else if(s>0)
cout<<"This sum is positive\n";
else
cout<<"This sum is negative\n";
p++;

fraction m=*p;
cout<< "m=";
m.displayn();
if(m!=2)
cout<<"m is not 2\n";
if(m==fraction(28,3))
cout<<"m equals 28/3\n";
cout<<m<<endl;
/*fraction r;
cin>>r;
cout<<"r="<<r<<endl;*/

cout<<"Let's work with vectors of fractions\n";

vector<fraction> frac_vect;
//frac_vect[0]=66; error
frac_vect.push_back(fraction(26,3));

for(fraction f:frac_vect)
cout<<f<<endl;
frac_vect.push_back(fraction(-20,-5));
frac_vect.push_back(fraction(5,-5));
frac_vect.push_back(fraction(-20,-5));
frac_vect.push_back(fraction(5,-3));
frac_vect.push_back(fraction(-20,-5));
frac_vect.push_back(fraction(1,3));
//frac_vect.push_back(fraction(50));
cout<<"Our vector has "<<frac_vect.size()<<" fraction numbers\n";
cout<<"There are\n";
for(fraction f:frac_vect)
cout<<f<<"\t";
cout<<"\nIt's first element is "<<frac_vect.front()<<" and the last one is "<<frac_vect.back()<<endl;
cout<<"Now we are going to remove the last 2 elements of our vector\n";
frac_vect.pop_back();
frac_vect.pop_back();
cout<<"Now our vector contains "<<frac_vect.size()<<" elements\n";

frac_vect[2]/=-fraction(3,5)+6;
cout<<frac_vect[2]<<endl;
frac_vect.clear();
if(!frac_vect.size( ))
cout<<"There is no element. Our vector is already cleared\n";





/*cout<<"Elements of tab\n";
  for(fraction i:tab)
  i.displayn();*/
  /*fraction matrix[10][10];

  matrix[0][0].displayn();
  matrix[0][1].displayn();*/
  //fraction k[10];
  //k[0]=fraction(100,20);
  //k[0].displayn();
  //fraction x=fraction(4,5);
  //fraction y;

  //fraction *ptr=new fraction();
 // ptr[0]="2/6";
//  ptr->displayn(true);
//  delete ptr;

  //fraction tab[3][3];

  //fraction *p=new fraction();
  //fraction **ptr=new fraction*();
  //delete *ptr;
  //fraction *x=new fraction[10][10];

  /*fraction **ptr=new fraction*[10];
  for(int i=0;i<10;i++)
  *(ptr+i)=new fraction();
   delete *ptr;*/
   //matrix matrix();

    return 0;
}
/*void display_table(fraction  tab[]){
for(fraction f: tab)
f.displayt();
}*/

fraction max(fraction tab[],int n){
  fraction max=tab[0];
  for(int i=1;i<n;i++)
    if(tab[i]>max)
      max=tab[i];
  return max;

}
fraction sum(fraction tab[],int n){
  fraction sum;
  for(int i=0;i<n;i++)
  sum+=tab[i];
  return sum;

}

