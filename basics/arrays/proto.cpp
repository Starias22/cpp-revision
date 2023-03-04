#include<iostream>
#define N 10
using namespace std;
void func3(int [N]);
void func1(int tab[],int size);
void func2(int *tab,int size);

float *fun1();


//void func1(int tab[],int size);


int main()
{
    //10 items: 8 initialized
    int tab[8]{-2,6,10,9,8,7,5,6};
    int *ptr=tab;
    *(ptr+2)=5;

    return 0;
}
void func3(int tab[N]){

}