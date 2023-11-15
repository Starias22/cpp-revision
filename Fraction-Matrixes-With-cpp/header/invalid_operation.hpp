#include<iostream>
using namespace std;
class invalid_operation: exception{
    public:const char *what();

};