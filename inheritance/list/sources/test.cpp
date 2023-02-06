#include"../header/list.hpp"

int main()
{
    list lst;
    int a=25,b=5;
    lst.add(&a);
    lst.add(&b);
    lst.first();
     //lst.getNext();

    return 0;
}