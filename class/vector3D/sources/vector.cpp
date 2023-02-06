#include"../header/vector.hpp"

vector3D::vector3D(float x,float y,float z){
    xcoord=x;
    ycoord=y;
    zcoord=z;

}
void vector3D:: display() {
    cout<<"("<<xcoord<<", "<<ycoord<<", "<<zcoord<<")"<<endl;

}
vector3D::vector3D(const vector3D &vect){
    xcoord=vect.xcoord;
    ycoord=vect.ycoord;
    zcoord=vect.zcoord;

}
vector3D vector3D:: sum(vector3D const &vect)
    {
    vector3D v=vector3D(*this);
    v.xcoord+=vect.xcoord;
    v.ycoord+=vect.ycoord;
    v.zcoord+=vect.zcoord;
    return v;

}
float vector3D:: product(vector3D const &vect){


    return xcoord*vect.xcoord+
            ycoord*vect.ycoord+
            zcoord*vect.zcoord;

}

float vector3D::norme(float unit)
{
    if(unit<0)
    unit=1;
    return sqrt(
            pow(xcoord,2)+
            pow(ycoord,2)+
            pow(zcoord,2)
            )*unit;
}
