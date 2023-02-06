#include<iostream>
#include<cmath>
using namespace std;

class point;
class vector3D{
    float xcoord,ycoord,zcoord;
        friend void getCoords(vector3D,float[3]);

public:
vector3D(float x=0,float y=0,float z=0);
void display()const;
vector3D(const vector3D &vect);
vector3D sum(vector3D const &vect) const;
float product(vector3D const &vect) const;
float norme(float unit=1 )const;
/*unknown type name 'point'
show we should let it know there is a class named point*/
/*checks ifthe current vector is defined by the two points
*/
bool is_defined_by(point p, point q)const;
bool equals(vector3D vect)const;
friend bool equals(vector3D,point p);


};

class point{

float xcoord,ycoord,zcoord;
public:
friend void getCoords(point p , float tab[3]);

point(float x=0 ,float y=0,float z=0);
/*Display a point*/
void display() const;
point(const point &);
bool equals(point)const;
float distance(point p, float unit=1 )const;
point midle(point p)const;
/*the vector3D class should be declared above this class
so we'' movee the declaration of vector3D above*/
friend bool vector3D::is_defined_by(point p,point q)const;
friend bool equals(vector3D,point p);
};


