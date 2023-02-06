#include"../header/list.hpp"

list::list(){
    begin=new element;
    begin->content=nullptr;
    begin->next=0;
    current=begin;




}
list::~list(){
    delete begin;

}
void list::add(void *elt){
    //create the element
   element *el=new element;
    el->next=begin;
    el->content=elt;
    begin=el;


}
void *list::first(){
    current=begin;
    return current->content;
}
void *list::getNext(){
    if(current==0)
    return 0;

    current=current->next;
    return current->content;

}
bool list::finished(){
    return (current==0);

}
void list::display(){
while(!finished())
{
//cout<<*(current->content);
//getNext();
}
}