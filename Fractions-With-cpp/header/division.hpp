#include<iostream>
using namespace std;


class division_by_zero: public exception{

    public:const char *what();
    //public :division_by_zero();


};