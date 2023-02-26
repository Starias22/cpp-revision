#include"../header/point.hpp"

//it need to befriend of point
/*point operator+(point p,point q){

    point point;
    point.xcoord=p.xcoord+q.xcoord;
    point.ycoord=p.ycoord+q.ycoord;
    point.zcoord=p.zcoord+q.zcoord;
    return point;

}*/


vector3D operator-(point p,point q){
    /*nedd to access private members of p and q and
    those of vect: should be friend of both vector3D and point*/
 vector3D vect;
  vect.xcoord=q.xcoord-p.xcoord;
  vect.ycoord=q.ycoord-p.ycoord;
  vect.zcoord=q.zcoord-p.zcoord;




}

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



        const point T,U(8,9);
        T.display();
        U.display();

        const point V(15,20,5);


        cout<<"UT="<<U.distance(T)<<endl;
        cout<<"VU="<<V.distance(U)<<endl;

        point p;
        p=R+S;
        cout<<"p";
        p.display();
        point X=U+V;
        point Y=R+U;
        point Z=U+R;
        if(Y.equals(Z))
        cout<<"That's normal"<<endl;

        /*if we uncomment the2 poss we'll have a prob:that's normal*/

        point Zp;
        Zp=Y+X+U;
        Zp.display();





        return 0;
    }