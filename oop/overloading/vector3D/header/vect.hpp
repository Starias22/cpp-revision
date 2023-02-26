#include<iostream>
#include<cmath>

using namespace std;

class vector3D{

float xcoord,ycoord,zcoord;
public:
vector3D(float x=0,float y=0,float z=0);
void display() const;
vector3D(const vector3D &vect);
//Let's replace this by the +operator
//vector3D sum(vector3D const &vect) const;
vector3D operator+(vector3D const &vect) const;
vector3D operator-(vector3D const &vect) const;

//Let's replace this by the *operator
//float product(vector3D const &vect) const;
float operator*(vector3D const &vect) const;

float norme(float unit=1 )const;

};
