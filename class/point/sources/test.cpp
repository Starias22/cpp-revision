#include"../header/point.hpp"


int main()
    {
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






        return 0;
    }