#include "../header/class.hpp"

// this function is friend of the vector3D class
void getCoords(vector3D vect, float tab[3])
{
    // vect.xcoord (Inaccessible)
    tab[0] = vect.xcoord;
    tab[1] = vect.ycoord;
    tab[2] = vect.zcoord;
}
// this function is friend of the vector3D class
void getCoords(point p, float tab[3])
{
    tab[0] = p.xcoord;
    tab[1] = p.ycoord;
    tab[2] = p.zcoord;
}
/*equals need to access private members of both point and vector
so it should be friend of both of them*/
bool equals(vector3D vect, point p){
return vect.xcoord==p.xcoord&&
        vect.ycoord==p.ycoord&&
        vect.zcoord==p.zcoord;
}
int main()
{
    vector3D v;
    v.display();
    vector3D w(1, 5, -9);
    float tab[3];
    getCoords(w, tab);
    cout << "x=" << tab[0] << endl;
    cout << "y=" << tab[1] << endl;
    cout << "z=" << tab[2] << endl;
    point p,q;
    cout<<boolalpha<<v.is_defined_by(p,q)<<endl;

    point const R(5.8,-9,2.7);
    getCoords(R, tab);
    cout << "x=" << tab[0] << endl;
    cout << "y=" << tab[1] << endl;
    cout << "z=" << tab[2] << endl;
    cout<<"w==vect(O,R)? "<<equals(w,p)<< endl;



    return 0;
}