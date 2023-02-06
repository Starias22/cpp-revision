#include<iostream>
#include<cmath>

using namespace std;

class vector3D{

float xcoord,ycoord,zcoord;
public:
vector3D(float x=0,float y=0,float z=0);
void display() const;
vector3D(const vector3D &vect);
vector3D sum(vector3D const &vect) const;
float product(vector3D const &vect) const;
float norme(float unit=1 )const;

};
