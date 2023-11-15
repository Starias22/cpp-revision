#include<iostream>
using namespace std;
class index_out_of_bound: exception{
    public:const char *what();

};