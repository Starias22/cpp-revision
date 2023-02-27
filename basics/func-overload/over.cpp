#include<iostream>
using namespace std;
int sum(int a,int b){
    //for test
    cout<<"Sum of integers\n";
    return a+b;
}

double sum(double a,double b){
    //for test
    cout<<"Sum of doubles\n";
    return a+b;
}
int main()
{
    sum(5,6);
    sum(4.5,8.5);
    //sum(-8,5.6);
    //sum(5,9.9);
    double k=45,m=88;
    cout<<"k+m="<<sum(k,m)<<endl;
    return 0;
}