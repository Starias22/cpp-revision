//#include<iostream>
#include"../header/vector.hpp"
int main()
    {
        vector3D v;
        v.display();
        vector3D w(1,5,-9),x(8,3);
        vector3D y(x);
        w.display();
        x.display();
        y.display();
        x.sum(w).display();
        cout<<"w+x=";
        w.sum(x).display();

        cout<<"w+w=";
        w.sum(w).display();
        cout<<"w.x="<<w.product(x)<<endl;
        cout<<"w.w="<<w.product(w)<<endl;
        x=y;
        x.display();

        return 0;
    }