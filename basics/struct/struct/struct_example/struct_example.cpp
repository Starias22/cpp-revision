#include<iostream>
#include<cstring>

#define N 10
using namespace std;

struct point{
  float x,y;
  void display(){
cout<<x<<endl;
cout<<y<<endl;


  }

};
typedef point Point;


struct Class{

int nb_students=0;
string room;
char school[N]="" ;

void display(){
cout<<"Number of students: "<<nb_students<<endl;
cout<<"Room: "<<room<<endl;
cout<<"School: "<<school<<endl;



};

void assign_school(char* chr){
     strcpy(school,chr);

}

};

//the value won't be hanged without&
void assign_numbers(Class &cls,int n){
cls.nb_students=n;


}
void assign_room(Class *cls,string room){
  cls->room=room;
 //*(cls).school="OKAY";

}

void display(Class cls){
cout<<"Number of students: "<<cls.nb_students<<endl;
cout<<"Room: "<<cls.room<<endl;
cout<<"School: "<<cls.school<<endl;


}

void swap(Point *p,Point *q){
point r;
r=*p;
*p=*q;
*q=r;

}

int main()
{
    Class f;
    f.display();
    f.nb_students=55;
    f.room="BXX79";
    strcpy(f.school,"IMSP");

    display(f);
    Class g{15,"A545","IMSP"};
    display(g);
    assign_numbers(g,100);
    g.display();
    assign_room(&g,"new room");
    g.display();
    f.assign_school("My new school");
    f.display();
    point p{45};
    p.y=4;
    Point q{-60,-66};

    p.display();
    q.display();
   swap(&p,&q);

   p.display();
    q.display();
    ;





    return 0 ;
}