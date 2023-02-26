#include<iostream>
#include<cmath>
using namespace std;

class point{
float xcoord,ycoord,zcoord;
public:
point(float x=0 ,float y=0,float z=0);
/*Display a point*/
void display() const;
point(const point &);
bool equals(const point)const;
float distance(const point p, float unit=1 )const;
point midle(const point p)const;


point operator+(point p)const;//marked constant to support const objects too
//friend point operator+(point p,point q);
/*difference of two points:give a vector so need to
no that the vector class exists*/


};



class vector3D{
    float xcoord,ycoord,zcoord;

public:
vector3D(float x=0,float y=0,float z=0);
void display()const;
vector3D(const vector3D &vect);
vector3D sum(vector3D const &vect) const;
float product(vector3D const &vect) const;
float norme(float unit=1 )const;

};
