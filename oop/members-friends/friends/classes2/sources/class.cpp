#include"../header/class.hpp"

point:: point(float x,float y,float z){
    xcoord=x;
    ycoord=y;
    zcoord=z;

}

void point:: display() const{
    cout<<"("<<xcoord<<", "<<ycoord<<", "<<zcoord<<")"<<endl;

}
point::point(const point &point){
    xcoord=point.xcoord;
    ycoord=point.ycoord;
    zcoord=point.zcoord;

}
/*Check if two points are equal*/
bool point::equals(point p)const{
    return xcoord==p.xcoord&&
            ycoord==p.ycoord&&
            zcoord==p.zcoord;
}
/*compute the Euclude distance between two points*/
float point::distance( point p, float unit) const{
    if(unit<0)
    unit=1;
    return sqrt(
            pow(xcoord-p.xcoord,2)+
            pow(ycoord-p.ycoord,2)+
            pow(zcoord+p.zcoord,2)
            )*unit;

}
point point::midle(point p)const{
    point mid((xcoord+p.xcoord)/2,
                (ycoord+p.ycoord)/2,
                (zcoord+p.zcoord)/2);

    return mid;
}

vector3D::vector3D(float x,float y,float z){
    xcoord=x;
    ycoord=y;
    zcoord=z;

}
void vector3D:: display() const{
    cout<<"("<<xcoord<<", "<<ycoord<<", "<<zcoord<<")"<<endl;

}
vector3D::vector3D(const vector3D &vect){
    xcoord=vect.xcoord;
    ycoord=vect.ycoord;
    zcoord=vect.zcoord;

}
vector3D vector3D:: sum(vector3D const &vect)const
    {
    vector3D v=vector3D(*this);
    v.xcoord+=vect.xcoord;
    v.ycoord+=vect.ycoord;
    v.zcoord+=vect.zcoord;
    return v;

}
float vector3D:: product(vector3D const &vect)const{


    return xcoord*vect.xcoord+
            ycoord*vect.ycoord+
            zcoord*vect.zcoord;

}

float vector3D::norme(float unit)const
{
    if(unit<0)
    unit=1;
    return sqrt(
            pow(xcoord,2)+
            pow(ycoord,2)+
            pow(zcoord,2)
            )*unit;
}

bool vector3D::is_defined_by(point p,point q)const{
    vector3D v;

    /*the attributes are not accessible so we'll
    declare this function as a friend of the point class*/
    v.xcoord=p.xcoord;
    v.ycoord=p.ycoord;
    v.zcoord=p.zcoord;
    return equals(v);
}
bool vector3D::equals(vector3D vect)const{
    return xcoord==vect.xcoord&&
            ycoord==vect.ycoord&&
            zcoord==vect.zcoord;
}


