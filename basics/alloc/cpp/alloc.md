# Memory allocation with C++ way

## Overview

We already learned how to allocate memory using cstdlib library provided by C programming language.

## new and delte operators

C++ provides a simplest way to handle memory allocation. It's based one the use of operators :

* ````new```` to allocate memory
* ````delete```` to free a previously allocated memory

````C++
````

## Example of use

### Example 1: allocate memory for an integer

````C++
#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr=new int;
    *ptr=45;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    (*ptr)+=100;
    cout<<"*ptr: "<<*ptr<<endl;
    delete ptr;
    return 0;
}
````

### Example 2: alllocate memory for an array of integers

````C++
#include<iostream>
using namespace std;
int n;
void display(int *tab)
{
    for(int i=0;i<n;i++)
        cout<<*(tab+i)<<'\t';
    cout<<endl;
}

int main()
{

    do{
    cout<<"Enter the size of the array: ";
    cin>>n;
    }while(n<=0);
    int *tab;
    tab=new int[n];
    display(tab);
    cout<<"tab: "<<tab<<endl;
    //use memory
    for(int i=0;i<n;i++)
    {
        cout<<"Item "<<i+1<<" : ";
        cin>>*(tab+i);
    }
    display(tab);
    delete[] tab;
    return 0;
}
````

### Example 3: alloc memory for a matrix of integers

````C++
#include<iostream>

using namespace std;
int r,c;
void display(int **tab)
{
    for(int i=0;i<r;i++)
{
        for(int j=0;j<c;j++)
        {
        cout<<*(*(tab+i)+j)<<'\t';
        }
        cout<<endl;


}
    cout<<endl;
}

int main()
{
    do{
    cout<<"Enter the number of row and column(in that order): ";
    cin>>r>>c;
    }while(r<=0||c<=0);
    int **tab;
    //allocate memory for the whole matrix
    tab=(int**) malloc(r*sizeof(int*));//or 4
    cout<<"tab: "<<tab<<endl;

    //for each row allocate columns

    for(int i=0;i<r;i++)
    {
        *(tab+i)=(int*)malloc(c*sizeof(int));
    }
        display(tab);

    //use memory
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        cout<<"Row "<<i+1<<" column "<<j+1<<": ";
        cin>>tab[i][j];
        }
    }
    display(tab);


    //free memory

    //free rows first

    for(int i=0;i<r;i++)
    free(*(tab+i));
    //free the whole marix
    free(tab);
    return 0;
}
````

## Resume

C++ programming language provides new and delete operators to handle dynamic memory allocation.
