#include <iostream>
#include <cassert> 
int main()
{
    assert(1+1==2);

    //assert(2*5>=15);
    // avec ! && et ||
    

    assert(6==6 && "6 est égal à 6");

    assert(5==2 && "Errreur: 5 n'est pas égal à 2");
    return 0;
}