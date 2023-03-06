# Structures

## Definition

A structure is a complex data that consists of other data types called fields of the structure. Thesize occupie by a structure in memory is the sum of the size occupie by the data types of it's fields.

## Creation

### Syntax

The syntaw to create a structure in C++ programming language is bellow:

````C++
struct str_name{
    type1 data1;
    type2 data2;
    ...
};
````

data1, data2, ... represent thefields of the structure and type1, type2, ... their types.

If created inside a function, it will be accessible locally by the function; else it will be accessible globally by the programm.

### Example: A structure person

````C++
#include<iostream>
using namespace std;
struct person{
    char name[30];
    int age;
    string desc;//a description
};

int main(){
    cout<<"typeof(person): "<<typeid(person).name()<<endl;
    cout<<"sizeof(string): "<<sizeof(string)<<endl;
    cout<<"sizeof(person): "<<sizeof(person)<<endl;
    if(sizeof(person)==sizeof(struct person))
        cout<<"Alright\n";
    cout<<"sum: "<<sizeof(string)+sizeof(char[30])+sizeof(int)<<endl;

    return 0;

}
````

We can initialize any field of our structure. Then any variable of type our structure will have, at beginning, the initialized value(s) for the concerned field(s).

````C++
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};
````

## Use a defined structure

````C++
/*declaration of a variable of type struct person, named ident*/
struct str_name ident;
/*access a structure fields*/
ident.member/*access the field name member for read or modification*/
````

struct keyword can be omited there;

### Examples

````C++
#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};

int main(){
    struct person p;
    cout<<"typeof(person): "<<typeid(p).name()<<endl;
    person q;//without struct
    person p1,p2,p3;//3 persons
    cout<<"age of q: "<<q.age<<endl;
    cout<<"age of p2: "<<p2.age<<endl;
    q.age++;//incr age of q
    cout<<"age of q: "<<q.age<<endl;
    p.desc="A kind person";

    cout<<"desc of p: "<<p.desc<<endl;
    //p1.name="Andrewi";/*error: a cher array cannot be assigned*/
    strcpy(p1.name,"Andrew");//include cstring

    cout<<"name of p1: "<<p1.name<<endl;
    return 0;
}
````

## Pointer on  a structure

Considering a pointer on a structure variable, named ptr,we can access the member of the variable pointed by that pointer using the syntax:

````C++
(*ptr).member
````

That can also be done using the operator -> like:

````C++
ptr->member
````

### Examples: Access member of structure

````C++
#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};

int main(){
    person p;
    p.desc="Okay let's go";
    strcpy(p.name,"Babalola");
    cout<<"Informations\n";
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"description: "<<p.desc<<endl;

   person *ptr=&p;
    cout<<"Addess of p: "<<ptr<<endl;
    (*ptr).age+=5;//25
    ptr->age--;//24
    ptr->desc="Strength and determination";
    cout<<"Informations\n";
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"description: "<<p.desc<<endl;

    return 0;

}
````

## Array of structure

Since a structure is a data type, we can define array of a structure as same as ordinary arrays.

### Examples: array of persons

````C++
#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};

int main(){
    person tab[10];// array of 10 person
    cout<<"tab contains "<<sizeof(tab)/sizeof(person)<<" persons\n";
    person p;
    p.desc="Okay let's go";
    strcpy(p.name,"Babalola");
    p.age++;
    tab[0]=p;

    cout<<"\nInformations on the first person\n";
    cout<<"Name: "<<tab[0].name<<endl;
    cout<<"Age: "<<tab->age<<endl;
    cout<<"description: "<<p.desc<<endl;

   person *ptr=&p;
   strcpy((tab+3)->name,"Jordan");
    tab[3].age+=5;//25
    tab[3].desc="Strength and determination";
    cout<<"\n\nInformations on the fourth person\n";
    cout<<"Name: "<<tab[3].name<<endl;
    cout<<"Age: "<<tab->age<<endl;
    cout<<"description: "<<tab->desc<<endl;

    return 0;

}
````

### Function and structures

Structures can be passes as argument to function and also be returndedby function.

### Examples: functions and structure

````C++
#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};
void display(person p)
{
 cout<<"\nInformations\n";
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"description: "<<p.desc<<endl;
}

person create (string desc,int age=10){
    person p;
    p.desc=desc;
    strcpy(p.name,"Name");
    p.age=age;
    return p;

}

int main(){
    person p;
    p.desc="Okay let's go";
    strcpy(p.name,"Babalola");
    p.age++;
    display(p);
auto q=create("A strong person",45);
    display(q);
    person r;
    r=create("You'r the best");
    r.age++;
    display(r);
    return 0;

}
````

## Member functions

INn C++ programming language(contrary to C), we can define function(s) inside a structure. THese functions are called member functions.

### Examples: member functions

````C++
#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
    //member functions
    void display()
{
    cout<<"\nInformations\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"description: "<<desc<<endl;
}/*; not required*/
void set_infos(string d,int a=10)
{
    desc=d;
    age=a;
}/*; not required*/

};



int main(){
    person p;
    p.desc="Okay let's go";
    strcpy(p.name,"Babalola");
    p.age++;
    p.display();
    person q;
   strcpy(q.name,"Roland");
    auto ptr=&q;
    ptr->set_infos("Just a test",60);
    q.display();

    q.set_infos("Fine well");

    ptr->display();
    return 0;


}
````

## typedef keyword

In C/C++ programming language,typedef keyword is used to rename a type.

In can, consequently be used to rename a structure

### Examples: typedef with structure

````C++
#include<iostream>
#include<cstring>

using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};
typedef person per;// person renamed to per
//both person and per can beused


int main(){
    person p;
    p.desc="Okay let's go";
    strcpy(p.name,"Babalola");
    p.age++;

    per q;
    p.desc="That's great";
    strcpy(p.name,"Typedef");
    p.age+=20;

    return 0;


}
````

## Resume

Structure is a complex data type that regroups data of differents type, with eventually member functions and can be used as same as ordinary data type.
