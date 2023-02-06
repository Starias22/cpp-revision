#include"../header/vect.hpp"
int main()
    {
        vector3D v;
        v.display();
        vector3D w(1,5,-9),x(8,3);
        vector3D y(x);
        w.display();
        x.display();
        y.display();
        const vector3D cst1,cst2(8,9);
        cst1.display();
        cst2.display();
        cout<<"cst1+cst2=";
        cst1.sum(cst2).display();

        cout<<"cst2+cst1=";
        cst2.sum(cst1).display();

        cout<<"x+w=";
        x.sum(w).display();
        cout<<"w+x=";
        w.sum(x).display();

        cout<<"w+w=";
        w.sum(w).display();
        cout<<"w.x="<<w.product(x)<<endl;
        cout<<"w.w="<<w.product(w)<<endl;
        x=y;
       //cst1=cst2 //error
        const vector3D cst3(15,20,5);
        cout<<"cst3.cst2="<<cst3.product(cst2)<<endl;
        cout<<"w.cst2="<<w.product(cst2)<<endl;
        cout<<"cst1.x="<<cst1.product(x)<<endl;
        cout<<"||w||="<<w.norme()<<endl;
        cout<<"||cst2||="<<cst2.norme()<<endl;
        cout<<"||cst3||="<<cst3.norme(2)<<endl;


        return 0;
    }