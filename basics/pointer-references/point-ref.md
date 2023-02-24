# Pointers and references

## Overview

In this lesson, we will learn what are pointers and references and also how to use them.

Let's start with this example.

## Introductive example

 Let us consider the code below.

````C++
#include<iostream>
using namespace std;
void change(int val){
    val=90;
}
int main()
{
    int var=-10;
    cout<<"Before changement: "<<var<<endl;
    change(var);
    cout<<"After changement: "<<var<<endl;
    return 0;
}
````

* We have a function called ````change````, which objectif is to assign the integer variable taken as argument, to ````90````.
* In our main function we declare an integer variable named ````var```` and initialize it with the value ````-10````. Then we print it's value before and after call to  ````change````.

Let's  compile and run that code.

It gives the following output.

````x
Before changement: -10
After changement: -10
````

That means that the value of the variable ````var```` has not changed.
That's normal. In fact, after calling the function ````change````, the formal argument ````val```` is created and the value of the variable ````var````, ````10````, is assigned to it. Then, ````val```` is set to ````90````, and, at the end of the function, ````val```` is destroyed. But the value of ````var```` is still unchanged. It's not affected.

Overall, the function ````change```` just works with a copy of the variable ````var```` which is local to the main function and cannot be refered to ouside.

That problem can be solved using pointers or references.

## Address of a variable

For each variable we declare in our programm, we already know that a memory space is reserved at a specific area of the computer. That memory can be refered using it's address.

The address of a variable is an unique numeric value that represents the memory space allocated to that variable.

There is an operator that allows us to get the address of any variable: the operator ````&````.

 We get the address of a variable by precceding it identifier by ````&````.

### Examples

````C++
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"(int)The address of a is: "<<&a<<endl;
    a=58;
    cout<<"(int)The address of a is: "<<&a<<endl;
    bool x=true;
    cout<<"(bool)The address of  x is: "<<&x<<endl;
    string str;
    cout<<"(str)The address of str is: "<<&str<<endl;

    return 0;

}
````

## Pointers

In C++ programming language, a pointer is a variable which contains the address of another variable.

### Examples: Pointer creation

````C++
#include<iostream>
using namespace std;
int main()
{
    //a is an int variable
    int a;
    /*ptr is a pointer that contains
    the addreess of a: ptr points on a*/
    int *ptr=&a;
    // Pi: pointer on integer
    cout<<typeid(ptr).name()<<endl;
    return 0;
}
````

In the code above, we declare an ````int```` variable, ````a````, and a pointer, ````ptr```` initialized with the address of the variable ````a````, so ptr is said to points on the variable ````a````;

Then we print the type of ````ptr```` and we obtain after compiling and executing, ````Pi````, that means ````p````ointer on ````i````nt variable.
In fact, ````ptr```` points on ````a```` which has ````int```` type.
We say that ````ptr```` is of type ````int *````

A pointer that points on an ````int```` variable cannot ever points on another type of variable(````float```` for example). Otherwise we will get an error at compiling.

The syntax to declare a pointer on a variable(without initialization)  is bellow:

````x
type *ident;//or type* ident;
````

where :

* ````type```` represents the type of the pointer
* ````ident```` represents its identifier.

We can also initialize or assign a pointer to ````NULL````(or ````0```` or ````nullptr````).
By doing that, the concerned pointer doesn't point on any variable.

We can also use the ````auto```` keyword to deduce automatically the type of a pointer.

Several pointers can point on the same variable but a pointer points on 0 on 1 variable at time.

### Example

````C++
#include<iostream>
using namespace std;
int main()
{  /*p is a pointer on a float variable
 but is not initialize*/
    float *p;
    double*dp=NULL;// dp=o or nullptr
    //Pd
    cout<<typeid(dp).name()<<endl;
    //Pf
    cout<<typeid(p).name()<<endl;
    int a;
    //p=&a;//error
    float x;
    p=&x;
    //pp is type int*
    auto pp=&a;
    if (typeid(pp)==typeid(int *))//or int*
        cout<<"Of course\n";
    return 0;
}
````

### Pointer deferencement

As pointers are variables, they can be re-assigned.

Moreover, we can use a pointer to access(read and assign) the variable on which it points: this is done via the dererencement operator(*). The concerned pointer is so said to be deferenced.

Pointer derencing means access to the variable pointed by the concerned pointer.

#### Examples: Deferencement

#### Remarks

* We cannot deference a null pointer because it doesn't point on any variable. Otherwise we will get an error at execution.

##### Examples: Defering a null pointer

````C++
#include<iostream>
using namespace std;
int main()
{
    int *ptr=0;
    if (ptr==NULL)
    cout<<"ptr is null\n";
    /*the next line will lead to
    sementation error*/
    cout<<"*ptr: "<<*ptr<<endl;
    return 0;
}
````

* When we dont initialize a pointer, it is not null, it can point on any variable. We can deference it for read without error at execution, but we shouldn't. However, we cannot modify the variable pointed by a non-assigned pointer. Otherwise, we will get a segmentation error at running, because we are accessing a memory space we have not reserved.

##### Examples: Defering a non-assigned pointer

````C++
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    if (ptr==0)
        cout<<"ptr is null\n";
    else
        cout<<"ptr is not null\n";
    cout<<"ptr: "<<ptr<<endl;
    /*not recommended because ptr is
    not initialized*/
    cout<<"*ptr: "<<*ptr<<endl;
    //segmentation error
    *ptr=55;
        return 0;
}
````

### Pointers: examples of use

#### The inroductive example: solution with pointers

````C++
#include<iostream>
using namespace std;
void change(int *ptr){
    /* change the value of the
      variable pointed by ptr*/
    *ptr=90;
}
int main()
{
    int var=-10;
    cout<<"Before changement: "<<var<<endl;
    change(&var);
    cout<<"After changement: "<<var<<endl;
    return 0;
}
````

By calling the function ````change```` like that, the formal parameter ````ptr````, which is a pointer, is created and assigned with ````&var```` that represents the address of ````var```` and the real(or effective) parameter. So ````ptr```` points on ````var````. Then, ````ptr```` is defered so as to set the variable pointed by it(````var````), to ````90````. And finaly ````ptr```` is destroyed.

 The value of the variable ````var```` is so effectively modified by the function ````change````.

#### Variables swaping using pointers

````C++
#include<iostream>
using namespace std;
void swap(int *a,int*b){
  //intermediaire
  int c=*a;
  *a=*b;
  *b=c;
}
int main()
{
    int var1=55, var2=-20;
    cout<<"Before swaping:\n";
    cout<<"var1: "<<var1<<endl;
    cout<<"var2: "<<var2<<endl;

    swap(&var1,&var2);

    cout<<"After swaping:\n";
    cout<<"Before swaping:\n";
    cout<<"var1: "<<var1<<endl;
    cout<<"var2: "<<var2<<endl;

    return 0;
}
````

## References

References are similar to pointers.

Reference consists in giving two identifiers to the same memory space, giving another identifier to an existing variable, such that the concerned variable can be used via whichever of their identifiers.

To declare a reference to variable, we need to do as same as:

````x
type & ident=var
````

* ````type```` represents the type of the variable. It must be as same as the type of variable that it refers to.
* ````ident```` is the identifier of the reference that is being created.
* ````var```` is the identifier of the variable that is being refered to.

### Examples: references

````C++
#include<iostream>
using namespace std;
int main()
{
    int a=99;
    int b=a;
    cout<<"Test 1\n";
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"\n";

    cout<<"Test 2\n";
    //b is decremented
    b--;
    cout<<"b:"<<b<<endl;
    /*a is not affected by the
    decrementation of b
    */
    cout<<"a:"<<a<<endl;
    cout<<"\n";

   //reference
    cout<<"Test 3\n";
    int& h=a;
    cout<<"a:"<<a<<endl;
    cout<<"h:"<<h<<endl;
    cout<<"\n";

    cout<<"Test 4\n";
    h=8;//a is also set to 8
    cout<<"a:"<<a<<endl;
    cout<<"h:"<<h<<endl;
    cout<<"\n";

    cout<<"Test 5\n";
    h*=5;//h=40 a alseo
    cout<<"h:"<<h<<endl;
    cout<<"a:"<<a<<endl;


    cout<<"Test 6\n";
    a=-45;// h also
    cout<<"h:"<<h<<endl;
    cout<<"a:"<<a<<endl;
    return 0;

}
````

Note that:

* We can not declare a reference without initializing

````C++
    float &v;/*wrong: compiling error*/
````

* A reference to a type of variable cannot be assigned by another type of variable

````C++
    int y;
    //x refers to y
    int& x=y;//right

    float & z=y//wrong
````

* Once created and initialized with a variable, a reference cannot change to another variable, but it's value can change.
* Any modification made to a variable affects all the references of that variable.
* Many variables can refer to the same variable.

````C++
    int y;
    //x refers to y
    int& x=y;
    //k refers to y too
    int & k=y;
    y=78//both x,y and equal 78
````

* We cannot assign a value(not a variable) to a reference during decclaration. It must be an identifier.

````C++

    bool& x=true;/*wrong
    because true is a value,
    not an identifier*/
````

### References: examples of use

#### The inroductive example: solution with references

````C++
#include<iostream>
using namespace std;
void change(int &ref){
    /* change the value of the
      variable refered by ref*/
    ref=90;
}
int main()
{
    int var=-10;
    cout<<"Before changement: "<<var<<endl;
    change(var);
    cout<<"After changement: "<<var<<endl;
    return 0;
}
````

By calling the function ````change```` like that, the formal parameter ````ref````, which is a reference, is created and assigned with ````var```` that represents the identifier of the variable ````var```` and the real(or effective) parameter. So ````ref```` refers to ````var````. Then, ````ref```` is assigned with the value ````90```` and is finaly destroyed.

 The value of the variable ````var```` is so effectively modified by the function ````change````.


#### Variables swaping using referencess

````C++
#include<iostream>
using namespace std;
void swap(int &a,int&b){
  //intermediaire
  int c=a;
  a=b;
  b=c;
}
int main()
{
    int var1=55, var2=-20;
    cout<<"Before swaping:\n";
    cout<<"var1: "<<var1<<endl;
    cout<<"var2: "<<var2<<endl;

    swap(var1,var2);

    cout<<"After swaping:\n";
    cout<<"Before swaping:\n";
    cout<<"var1: "<<var1<<endl;
    cout<<"var2: "<<var2<<endl;
    return 0;
}
````

## Argument pass by value, address and references

If a function has one or several arguments, for each of them, the type can be:

* a simple data type like ````int````, ````float````, ````string````, etc... In that case, the effective parameter taken by the function during call is used as ````value````.
* a pointer on a type, ````int*````, ````float*````, ````string *```` for example. In that case, we provide an ````address```` during call to the function.
* a reference to a data type. In that case we provide a ````variable identifier```` to the variable during call to the function.

   We talk respectively about value pass, address pass and reference pass to the concerned function.

## Resume

Overall:

* Address is an unique integer that identify each variable declared in a programm.
* Pointers are variables that contains the address of another.
* References are variables that refer to another of the same type and that allows to access the same memory space in differents ways.
* Accordinly to what we have to do, we can pass a value, an address or a reference to a function.
