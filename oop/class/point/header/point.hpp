#include<iostream>
#include<cmath>
using namespace std;

class point{
float xcoord,ycoord,zcoord;
public:
point(float x=0 ,float y=0,float z=0);
/*Display a point*/
void display() ;
point(const point &);
bool equals(point);
float distance(point p, float unit=1 );
point midle(point p);
};
