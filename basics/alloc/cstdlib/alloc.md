# cstdlib

The C progamming language provides a library called ````stdlib```` to handle memory allocation. To use that library in C++, we should include ````cstdlib```` as follow:

````C++
#include<cstdlib>
````

We are going to study in this section some of the functions of that library( the most used).

## Functions

### allocate memory: malloc

````C++
void *malloc(size_t size)
````

* Allocate size bytes of memory.

* Return the memory address of the memory block allocated

### free memory: free

````C++
void free(void *ptr)
````

Free a block allocated by ````malloc````, ````realloc```` or ````calloc````.

### allocate and initialize: calloc

````C++
void * calloc(size_t nmemb, size_t size)
````

* Allocate nmemb elements of size bytes each, all initialized to 0.
* Return the address of the memory block allocated.

### reallocate memory: realloc

````C++
void *realloc(void *ptr, size_t size)
````

* Re-allocate the previously allocated block in ptr, making the new block size bytes long
* Return the memory address of the new memory block allocaed

## Example of use

### Example 1: mallloc for an integer

````C++
#include<iostream>
using namespace std;

int main()
{

    int *ptr;
    //allocate memory
    ptr=(int*) malloc(sizeof(int));//or 4
    //use memory
    *ptr=45;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    (*ptr)++;
    cout<<"*ptr: "<<*ptr<<endl;
    (*ptr)*=2;
    cout<<"*ptr: "<<*ptr<<endl;

    --(*ptr);
    cout<<"*ptr: "<<*ptr<<endl;
    //free memory
    free(ptr);
    return 0;
}
````

### Example 2: mallloc for an array of integers

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
    //allocate memory
    tab=(int*) malloc(n*sizeof(int));//or 4
    display(tab);
    cout<<"tab: "<<tab<<endl;
    //use memory
    for(int i=0;i<n;i++)
    {
        cout<<"Item "<<i+1<<" : ";
        cin>>*(tab+i);
    }
    display(tab);


    //free memory
    free(tab);
    return 0;
}
````

### Example 3: callloc for an array of integers

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
    //allocate memory
    tab=(int*) calloc(n,sizeof(int));//or 4
    cout<<"tab: "<<tab<<endl;
    display(tab);

    //free memory
    free(tab);
    return 0;
}
````

### Example 4: malloc and realoc for an array of double

````C++
#include<iostream>

using namespace std;
int n;
void display(double *tab)
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
    }while(n<4);
    double *tab;
    //allocate memory
    tab=(double*) malloc(n*sizeof(double));//or 8
    cout<<"tab: "<<tab<<endl;
    //use memory
    for(int i=0;i<n;i++)
    {
        cout<<"Item "<<i+1<<" : ";
        cin>>*(tab+i);
    }
    display(tab);
    //complete 3 cases of memory
    n+=3;
    tab=(double*)realloc(tab,n);
    display(tab);
    tab[n-3]=10.88;
    tab[n-2]=11.;
    tab[n-1]=-12.8;
    display(tab);

    //free memory
    free(tab);
    return 0;
}
````

### Example 5: malloc and realoc for an array of float: decrease size

````C++
#include<iostream>

using namespace std;
int n;
void display(float *tab)
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
    }while(n<4);
    float *tab;
    //allocate memory
    tab=(float*) malloc(n*sizeof(float));//or 8
    cout<<"tab: "<<tab<<endl;
    //use memory
    for(int i=0;i<n;i++)
    {
        cout<<"Item "<<i+1<<" : ";
        cin>>*(tab+i);
    }
    display(tab);
    //remove 3 cases of memory
    n-=3;
    tab=(float*)realloc(tab,n);
    display(tab);


    //free memory
    free(tab);
    return 0;
}
````

### Example 6: malloc for a matrix of integers

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

cstdlib library provides malloc, calloc  and realloc functions to allocate momory dynamically and free to free the memory previously allocated.
