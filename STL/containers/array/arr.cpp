#include<iostream>
#include<array>
#define N 5
using namespace std;
int main()
{   //array of N integers
    array<int,N> arr;

    arr.size();
    arr.at(0);
    arr.empty();
    arr.front();
    arr.back();
    arr.begin();
    arr.end();
    arr.rbegin();
    arr.rend();
    arr.fill(5);
    arr.data();
    arr[0];
    arr.max_size();

    array<float,2*N> arr_float;
    arr_float.fill(2.5589);

    array<double,N> arr_double;
       //arr.swap(arr_double);
       //swap





    return 0;
}