#include"../header/point.hpp"
point:: point(float x,float y,float z){
    xcoord=x;
    ycoord=y;
    zcoord=z;

}

void point:: display()const{
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
float point::distance( const point p, float unit)const{
    if(unit<0)
    unit=1;
    return sqrt(
            pow(xcoord-p.xcoord,2)+
            pow(ycoord-p.ycoord,2)+
            pow(zcoord+p.zcoord,2)
            )*unit;

}
point point::midle(const point p)const{
    point mid((xcoord+p.xcoord)/2,
                (ycoord+p.ycoord)/2,
                (zcoord+p.zcoord)/2);

    return mid;
}
