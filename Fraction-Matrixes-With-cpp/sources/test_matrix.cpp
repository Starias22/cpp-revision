#include<iostream>
#include"../header/matrix.hpp"
int main(){

    matrix m(3,3);
    m.display();
    m=fraction(1,6);
    m.display();
    matrix n=m;
    n.display();
    n=matrix(4,4);
    n.display();

    matrix k(3,3);

    cout<<(n==m);
    k.display();
    k=m;
    n=m+k;
    n.display();

    //matrix n(3,3,fraction(1,1));
    //n.display();
    n=n+fraction(1,3);
    n.display();
    n=n-fraction(1,3);
    n.display();
    return 0;
}