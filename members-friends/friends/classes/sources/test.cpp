#include"../header/class.hpp"


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


        point P;
        cout<<"P";
        P.display();
        point Q(1,5.,-9),R(8.8,-3);
        point S(R);
        cout<<"Q";
        Q.display();
        cout<<"R";
        R.display();
        cout<<"S";
        S.display();
        cout<<boolalpha<<"R==S: "<<R.equals(S)<<endl;
        cout<<"Q==P: "<<Q.equals(P)<<endl;

        cout<<"RS="<<R.distance(S)<<endl;
        cout<<"RS="<<R.distance(S)<<endl;
        cout<<"PQ="<<P.distance(Q)<<endl;



        cout<<"RS="<<R.distance(S,5)<<endl;
        cout<<"RS="<<R.distance(S,2.8)<<endl;
        cout<<"PQ="<<P.distance(Q,9)<<endl;


        cout<<"PQ="<<P.distance(Q,-1.5)<<endl;
        cout<<"PQ="<<P.distance(Q,0)<<endl;

        cout<<"midle(P,Q):";
        P.midle(Q).display();

        if(P.midle(Q).equals(P.midle(Q)))
        cout<<"Alright"<<endl;

        cout<<"midle(P,P):";
        P.midle(P).display();

        if(P.midle(P).equals(P))
        cout<<"That's normal"<<endl;



        const point T,U(8,9);
        T.display();
        U.display();

        const point V(15,20,5);


        cout<<"UT="<<U.distance(T)<<endl;
        cout<<"VU="<<V.distance(U)<<endl;






    return 0;
}