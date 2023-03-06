#include<iostream>
using namespace std;

int main()
{
    /*declaration without initialization*/
    //3 rows 4 columns
    //int tab[3][4];
    //7 rows 7 columns
    //float tails[7][7];

    //all items are 0
    //int tab[4][3]={};
    //float x[3][2]{};// all 0.0
    //bool y[3][3]{};//all false

    int tab[3][4]{
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}

            };

    //all 0 in the second row
    int tab2[3][4]={
            {1,2,3,4},
            {},
            {9,10,11,12}
            };

        float t[3][3]={1.55,-20.5,5,
            8,99.5,8.5,
            8.0,0.9,66.};

int xx[3];
int tab8[4][3]{
        {1,2,3},//all columns init
        //2 columns init out of 3
                };

int xxx[][2]={1,2,3,4,5,6,7,8,9};
cout<<sizeof(xxx);
    return 0;
}