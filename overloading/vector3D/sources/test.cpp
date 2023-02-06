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
        (cst1+cst2).display();

        cout<<"cst2+cst1=";
        const vector3D ct=cst2+cst1;
        ct.display();

        cout<<"x+w=";
        vector3D vect=x+w;
        vect.display();
        vector3D z(1,-8);
        vector3D res;
        cout<<"w+x+z=";
        res=w+x+z;
        res.display();
        vector3D double_w=w+w;

        cout<<"w+w=";
        w.display();

        //product

        cout<<"w.x="<<w*x<<endl;
        cout<<"w.w="<<w*w<<endl;
        x=y;
       //cst1=cst2 //error
        const vector3D cst3(15,20,5);
        cout<<"cst3*cst2="<<cst3*cst2<<endl;
        cout<<"w*cst2="<<w*cst2<<endl;
        cout<<"cst1*x="<<cst1*x<<endl;



         cout<<"cst1-cst2=";
        (cst1-cst2).display();
        
        cout<<"cst2-cst1=";
        vector3D cst=cst2-cst1;
        cst.display();

        cout<<"x-w=";
        vector3D vec=x-w;
        vect.display();
        vector3D zp(1,-8);
        vector3D result;
        cout<<"w+x-zp=";
        result=w+x-zp;
        result.display();
        v=w-w;

        cout<<"w-w=";
        v.display();




        return 0;
    }