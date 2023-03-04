# Introduction to arrays

## Definition

In C++ programming language, an array is a collection of elements of the same data type, which are stored contiguously in memory. Arrays can be used to store and manipulate multiple values of the same type, such as integers, floats, or characters.

The number of item(s) in an array is called it's size and cannot be modified during the execution of the programm. So it should be a positive integer.

Arrays in C++ are commonly used in algorithms, data structures, and numerical computations.

This lesson is about only one dimensinal arrays.

## Array creation

To declare and initialize an array, we need to specify the type of it' item, followed by it' identifier, squared brackets containing  or not, it's size and finally the items.

### Example: arrays initialization

````C++
#include<iostream>
using namespace std;

int main()
{
    //arrays initialization
    //array of 5 integers initialized
    int tab[5]={1,2,3,4,5};
    //=can be omited
    float tabf[5]{6.55,-8.8,6,7,9};
    return 0;
}
````

If the size is not provided, it's deduced based on the number of items provided.

### Example

````C++
#include<iostream>
using namespace std;

int main()
{
    //arrays initialization
    //deduce the size
    double tabd[]{6,8,9.8,10};
    return 0;
}
````

An array can also be defined without initialization. In that case:

* all items are set to 0 if {} is specified
* undefined value are set to the items otherwise

### Example: arrays creation without initialization

````C++
#include<iostream>
using namespace std;

int main()
{

    /*declaration without
    initialization: all
     elements are 0*/
     //array of 5 ints, all=0*/
    int tab[5]{};
    // 5 bools,all 0(false)
    bool tabb[5]{};

    float x[10];//undefined items
    return 0;
}
````

We can also declare an array and initialize just some items. Then, the rest of items will be initialized to 0. Note that the size must be specified in that case.

````C++
#include<iostream>
int main()
{
   /*array of 14 integers, the first
     3 are init and the rest are null*/
    int tab2[14]{45,-20,66};
    return 0;
}
````

Note that we cannot provide more items than the size we specify.

### Examples: More items than the size

````C++
#include<iostream>
using namespace std;

int main()
{
    /* error:2 specified as size,
     3 items provided*/

        string tabstr[2]{"peace","joy","hope"};
    return 0;
}
````

Let's notice again that all items should have the same data type.Items data types must be homogenous in an array.

### Examples: item data types

````C++
#include<iostream>
using namespace std;

int main()
{    //error:45.5 is double
        int tab[]{45,48,49.55};
        /*no error:
        45 casted from int to float
         88.55 casted from double to float*/
        float x[3]{45.5f,45,88.55}
    return 0;
}
````

## Access items by index

Access an item in an array means read or modify it's value.

We can do that by using the position(index) of the item to access.That operation is called array subscripting.

Array indexes ranges from 0 to ````size````-1 where size represents the ````size```` of the array.

Array subscripting operation is performed using the array subscripting operator:````[]````, by specifing the concerned index into the squared brackets.

The first item of the array has index 0, the n-th element has index n-1.

### Examples: array subcripting

````C++
#include<iostream>
using namespace std;

int main()
{
    //size=6
    int tab[]={4,5,-6,-9,9,-60};
    cout<<"First item: "<<tab[0]<<endl;
    cout<<"Second element: "<<tab[1]<<endl;
    cout<<"Last item: "<<tab[5]<<endl;
    //update the second item(assignment)
    tab[1]=555;
    cout<<"Second element(after): "<<tab[1]<<endl;
    int i=3;
    cout<<"Item at index "<<i<<" :"<<tab[i];
     return 0;
}
````

### Example: arrays subscripting with and loops

````C++
#include<iostream>
using namespace std;

int main()
{
    //size=6
    int tab[]={4,5,-6,-9,9,-60};
    cout<<"for loop\n";
    for(int i=0;i<6;i++)
        cout<<tab[i]<<'\t';
            cout<<endl;
    int j=0;
    /*or int  i=0, since i doesn't exist*/
    cout<<"while loop\n";
    while(j<6)
    {
        cout<<tab[j]<<'\t';
        j++;

    }
    cout<<endl;
    return 0;
}
````

### Get array size programmatly

We can get the size of an array by using the sizeof operator.

In fact, the size occupied by an array equals it's size multiplied by the size occupied by one element. We already know that by using ````sizeof```` on a variable, we can get, in bytes the memory size occupied by that variable. By dividing the result of sizeof on an array,  by the size of the data type we will get the size(number of items) of that array.

### Example: Get array size

````C++
#include<iostream>
using namespace std;

int main()
{
    //size=6
    int tab[]={4,5,-6,-9,9,-60};
    //6*4=12
    cout<<"tab occupies "<<sizeof(tab)<<" bytes in memory\n";
    cout<<"tab contains "<<sizeof(tab)/sizeof(int)<<" items\n";
    double tab2[]={4,5,-6,-9,9,-60};
    //6*8=48
    cout<<"tab2 occupies "<<sizeof(tab2)<<" bytes in memory\n";
    cout<<"tab2 contains "<<sizeof(tab2)/sizeof(double)<<" items\n";
    return 0;
}
````

## Arrays and pointers

Let's consider the code below.

````C++
#include<iostream>
using namespace std;

int main()
{
    int tab[5]={2,9,-6};
    cout<<"tab: "<<tab<<endl;
    //deduce the type of tab
    auto v=tab;
    if (typeid(v)==typeid(int *))
        cout<<"tab is a pointer on an int\n";
    if(tab==&tab[0])
        cout<<"tab points on the first item\n";
        int x=20;
     // tab=&x error
    return 0;
}
````

After exceution, the output looks like:

````bash
tab: 0x7ffd79b3c800
tab is a pointer on an int
tab points on the first item
````

The first line of the ouptput shows that the value of tab is an address of variable.

The second line proves that tab is apointer on integer.

The last line allow us to conclude that tab points on tab[0], which is the first item of the array.

By uncommenting the line of code that precceds the return statements we get an error. In fact, tab is not re-assignable.

Overall, the identifier of an array represents a pointer on the first item of that array but is not assignable like ordinary pointers.

Consequently, we can access(read or modify) the first element of an array using the deferening operator(*) on it's identifier. But we cannot make the identifier points on another variable.

### Example: access first item of an array using pointer

````C++
#include<iostream>
using namespace std;

int main()
{
    float tab[5]={95.8,9,-6,9.8};
     //set the first item to 45
    *tab=45;
    cout<<"First item: "<<tab[0]<<endl;
    //increment the first item
    tab[0]++;
    //read the first item via * operator
    cout<<"First item:(after) "<<*tab<<endl;
    //then ptr also points on tab[0]
    float * ptr=tab;
    cout<<"First element:"<<*ptr<<endl;
    *ptr=-20.45//tab[0]=-20.45

    cout<<"First item:(after) "<<*tab<<endl;
    return 0;

}
````

Much more, we can access access any item of an array using pointers.

## Arrays and pointers arithmetic

We already know that assignment operator can be applied to pointers(excluding arrays). Then the concerned pointer points on the variable whose address is assigned to it.

### Examples: Pointer assignment

````C++
#include<iostream>
using namespace std;

int main()
{
    int a=20;
    cout<<"a: "<<a<<endl;
    int *ptr=&a;//ptr points on a
    *ptr=28// so a equals 28 now
    cout<<"a:(after) "<<a<<endl;
    int *q=ptr;//q points on a too
    (*q)*=10;//a equals 280 now
    cout<<"a:(after) "<<a<<endl;
    return 0;
}
````

Moreover, pointers support addition and substract operators(+ and -).

If ptr is a pointer,

* ptr+1(respectively ptr-1) points on the memory space that follows(respectively that precceds) the one on which ptr points;
* ptr+i(respectively ptr-i), in general points on the i-th memory space following(respectively precceding) the one pointed by ptr.

Similary, the operators ````+=````, ````-=````,````++```` and ````++```` can be applied to pointers to, except array, since they are assignment operators.

We can assign these pointer as we want using these operator but we can deference them if and only if we have located the concerned memory. Otherwise, we may have segmentation error at execution.

Since array items are contigous, these operators are often used to manipulate arrays items via other pointers.

Subscripting operator can also be applied to ordinary pointers.

However, access to a non-allocated memory, sometime caused by array index out of bound, bad deferencing pointers, may lead to segmentaion errors or unefined behaviors.

### Examples

````C++
#include<iostream>
#define N 10
using namespace std;

int main()
{
    //10 items: 8 initialized
    int tab[N]{-2,6,10,9,8,7,5,6};
    cout<<"Second element: "<<*(tab+1)<<endl;
    *(&tab[4])=55;
    cout<<"5th element: "<<*(tab+4)<<endl;
    tab[5]++;
    cout<<"6th element: "<<*(tab+5)<<endl;
    int *ptr=tab;//ptr points on tab[0] too
    //now ptr points on tab[5]
    ptr+=5;
    cout<<*ptr<<endl;
    ptr-=2;//now ptr points on tab[3]
    cout<<*ptr<<endl;
    int *q=tab+2; //q points on tab[2]
    cout<<*q<<endl;
    q--;//now q points on tab[1]
    auto j=&tab[1]+2;//j points on tab[3]
        cout<<*j<<endl;
        cout<<j[0]<<endl;
        cout<<j[2]<<endl;// access tab[5]
        cout<<j[10]//access tab[3]: error may occur
        q=tab+9//points on tab[9]
        q++;//points on tab[10]
        *q=45//acces tab[10]: an error may occur
        return 0;
}
````

### Correspondances arrays vs pointers

ptr represents a pointer and tab an array identifier.

Array formalism|Pointer formalism|
|----|-------|
|````&tab[i]````|````tab+i````|
|````tab[i]````|````(*tab+i)````|
|````&tab[0]````|````tab````|
|````&ptr[i]````|````ptr+i````|

## Arrays and functions

### Array passing to function as argument

There are few ways to pass array as argument to function.

````C++
#include<iostream>
#define N 10
void func1(int tab[N]);
//size may be const int(recommende)
void func2(int tab[],int size);
void func2(int *tab,int size);
````

or simply

````C++
#include<iostream>
#define N 10
void func1(int [N]);
void func2(int [],int );
void func2(int *,int );
````

During passing array or pointer to a function, we should ensure it couldn't lead to array index out of bound.

#### Examples: Passing array as argument to function

##### Example: Display items of an array

````C++
#include<iostream>
using namespace std;
#define N 10
void display(int tab[N]){
    for(int i=0;i<N;i++)
        cout<<tab[i]<<'\t';
    cout<<endl;
}

bool all_evens(int *tab,int n){
    for(int i=0;i<n;i++)
        if(*(tab+i)%2)//tab[i]
            return false;
    return true;
}
bool all_odds(int tab [],int n){

    for(int i=0;i<n;i++)
        if(*(tab+i)%2==0)//tab[i]
            return false;
    return true;
}
void increments_all(int  tab[]){

    for(int i=0;i<N;i++)
        (*(tab+i))++;
}

int main()
{
    int tab[N]{4,5,6,7,2,9,10,11,13,-11};
    display(tab);
    int *ptr=tab+1;//points on tab[1]
    display(ptr);/*error may occur: acess from tab[1] to tab[10](out of bound) */
    ptr--;//points on tab[0]
    display(ptr);//right

    cout<<"tab all even? "<<all_evens(ptr,N)<<endl;

    cout<<"tab all odd? "<<all_odds(tab,N)<<endl;
    increments_all(tab);
    display(tab);
    return 0;
}
````

In all of case above the ormal argument represents a pointer, that will, during call, points on the first item of the array.

### Make a function return an array

A single way.

````C++
float* func();
````

Then the function return the address of the first item of the returned array.

#### Examples: Making  a function return an array

````C++
#include<iostream>
using namespace std;
#define N 10

void display(float tab[N]){
    for(int i=0;i<N;i++)
        cout<<tab[i]<<'\t';
    cout<<endl;
}
float * double_tab(float *tab){
    float tab2[N]{};
    //display(tab);
    for(int i=0;i<N;i++)
        tab2[i]=2*(*(tab+i));
    //display(tab);

    float *ptr=tab2;
    return ptr;
}
int main()
{
    float tab[N]{4,5,6,7,2,9,10,11,13,-11};
    display(tab);
    auto x=double_tab(tab);
    display(tab);
    display(x);
    return 0;
}
````

In this code, a function called double_tab is defined that takes a pointer to an array of float values as an argument. The function creates a new float array called tab2 with size N, initializes it with zeros using the {} syntax, and then doubles each element of the original array using a for loop.

However, there is a problem with this function. The tab2 array is created on the stack within the double_tab function, which means that it will be destroyed when the function returns. Therefore, when the function returns a pointer to the first element of the tab2 array, the pointer will be pointing to memory that is no longer valid. This can result in undefined behavior and crashes.

In the next chapters we will learn how to fix that issue.

## Resume

Arrays contain items with homogenous data type.

Pointers can be used to powerfully manipulate arrays.
