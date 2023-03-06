# Two dimensional arrays

## Overview

Two dimensional arrays(2D arrays in abrege) are those which have two dimensions dimensions called row and column.

These arrays have rows and colums and consequently can be used to represent matrixes.

A 2D array with N rows and M columns:

* has N and M as dimensions
* has N*M items; N\*M is called it's size
* can be seen as :

  * a table that consits of N rows and M columns
  * a simple 1D array with N items, where each item is a simple 1D array with M items.
  * a matrix with N rows and N columns

In this lesson we'll learn how to use 2D arrays in C++ programming language.

## Declaration and initialization

We can declare a 2D array without initializing it's items.

````C++
#include<iostream>
using namespace std;

int main()
{
    /*declaration without initialization*/
    //3 rows 4 columns
    int tab[3][4];
    //7 rows 7 columns
    float tails[7][7];
    return 0;
}
````

We can also declare it and initialize all items to 0.

````C++
#include<iostream>
using namespace std;

int main()
{
    //all items are 0
    int tab[4][3]={};
    double x[3][2]{};// all 0.0
    bool y[3][3]{};//all false

    return 0;
}
````

We can also declare and initialize items with given values, row by row and for each row, column by column.

````C++
#include<iostream>
using namespace std;

int main()
{
    int tab[3][4]{
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}

            };

    //all 0 in the second row
    int tab2[3][4]={
            {1,2,3,4},
            {},//{0,0,0,0}
            {9,10,11,12}
            };

    return 0;
}
````

Another way to initialize all itemswith given values:

````C++
float t[3][3]={1.55,-20.5,5,
            8,99.5,8.5,
            8.0,0.9,66.};
int tab[2][3]{1,2,3,4,5,6};
````

We can initialize some items with given values and the rest with 0.

````C++
//5 first items initialized
float t[3][3]={1.55,-20.5,5,8,99.5};
int tab[4][3]{
        {1,2,3},//all columns init
        {4,5}//2 columns init out of 3
                };//the rest of rows:0 for each column
````

We can also let the number of rows be deduced, but we must specify the number of columns anyway. In that case the array must be initialized.

````C++
int tab[][2]={1,2,3,4,5,6,7,8,9};//5 rows

int tab[][3]={{1,2,3},{1,2},{},{1,5,9}};//4 rows

````

## Access 2D arrays

Let's consider an array named tab with N rows and M columns.

* tab is the identifier of the array.
* tab represents a non-assignable pointer on:

  * the first item of the array
  * the first row of the array
* for i in [0,N-1], tab+i represents the row of the array with index i
* for i in [0,N-1] and j in [0,M-1], tab\[i\]\[j\] represents the value of the item at row i+1 and column j+1 of the array.
* access to tab\[i\] or to tab\[i\]\[j\] with i out of [0-N-1] or j out of [0-M-1] will leads to segmentation error

````C++
#include<iostream>
#define R 2
#define C 3
int main()
{

    int tab[R][C]={1,2,3,4,5,6};
    cout<<"First row, first column: "<<tab[0][0];

     cout<<"second(last) row, third column: "<<tab[1][2];

     //display all items

     for(int i=0;i<R;i++)
     {
        for(int j=0;j<C;j++)
        //{
            cout<<tab[i][j]<<'\t';
        //}
        cout<<endl;
     }
     cout<<"tab occupies "<<sizeof(tab)<<" bytes in memory"endl>>;
      cout<<"tab contains "<<sizeof(tab)/sizeof(int)<<" items"endl>>;
    return 0;
}
````

## Formalism matching

ptr represents a pointer and tab an array identifier.

Array formalism|Pointer formalism|
|----|-------|
|````&tab[i]````|````tab+i````|
|````tab[i]````|````(*tab+i)````|
|````&tab[0]````|````tab````|
|````&ptr[i]````|````ptr+i````|
|````&tab[i][j]````|````*(tab+i)+j````|
|````tab[i][j]````|````*((*tab+i)+j)````|
|````&ptr[i][j]````|````*(ptr+i)+j````|
|````ptr[i][j]````|````*((*ptr+i)+j)````|

## Passing 2D array to function

There are few possibilities to pass a 2 array as argument to function.

````C++
ret_type ident(type[R][C] array);
ret_type ident(type[][C] array,int row);
ret_type ident(type** ptr,int r,int c);
````

where :

* type represents the data type of the 2D array.
* ret_type represents the return type of the concerned function

## Resume

2D arrays have rows and columns and can be used with pointers.
