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
};
