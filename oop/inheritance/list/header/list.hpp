#include<iostream>

using namespace std;
//an element of the list
struct element
{
    element *next;//points on the net element
    void * content;/*pointer on an object ievthe value,the data
    of the elt*/


};

class list{
element *begin;
element *current;
public:
list();
~list();
void add(void *);
void *first();
void *getNext();
bool finished();
void display();
};
