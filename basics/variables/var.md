# Variables in C++

## Overview

 We will learn variables  in C++ programming language.

## Variables

In any programming language, a variable is an unique identifier, a name of a memory space, a memory area of the computer, intended to store an information during the execution of a program. In C++ language, this information, called the value of the variable, has a specific type. It can be one of the built-in type we learned in the previous chapter(````int````, ````float````, ````double````, ````bool````,  etc) or much more. The information('s value) can change during the execution of the programm but it's type cannot change. Thus, C++ is said to be a statically typed language, meaning that the variable type cannot change during the execution of the programm, contrary to dynamically typed language such as Python where variables can change their type during the execution of the program.

## Declaration of variable in C++

To declare a variable in C++, we just need to precise it's type and it identifier(name), followed by semicolon(````;````).

### Examples: declaration of variables

````C++
#include<iostream>
using namespace std;

int main()
{
    int a;
    float x;
    double k;

    return 0;
}
````

## Rules for naming variables in C++

* A C++ variable identifier should be alphanumeric, meaning that it should consist only of  alphabetical letters, underscore(````_````) and digits: it should not contain any special character,space or accentuated character.
* A C++ vaiable identifier should not start with digit.
* A C++ variable identifier should not be a C++ reserved word: C++ has several key word that should not be used as variable name.
* A C++ variable identifier is case-sensitive.
* A C++ variable identifier is unique: two variables should not have the same name.

### Examples of right variable names

````C
a
b1
age
float2A
tail
am_strong
_okay
AgE is not as same as AGE or AGe
letsgo
````

### Examples of wrong variable names

|Identifier|Justification
|--------|----------|
|````2var````|start with digit(````2````)|
|````my variable````|contains a space|
|````mean%````|````%```` is a special character|
|````série````|````é```` is an accentuated character|
|````class````|reserved word|
|````AMPar1-````|````-```` is a special character|
|````int````| reserved word|
|````unsigned````| reserved word|

## Variable initialization and value assignment to variable

Variable initialization consists in assigning value to a variable the first time after it declaration;

We can also change the value of a variable: that's called value re-assignment to  variable or value assignment to  variable

### Examples

````C++
int main()
{
int age;/*declaration of an integer variable*/

    /*output the variable, just created*/
    cout<<"age="<<age<<endl;
    //initialization of age
    age=28;
    //output
    cout<<"age="<<age<<endl;
    /*the variable tail is created and initialized at the same time*/
    float tail=1.897;
    cout<<"I'm "<<tail<<" meters long\n";
    //re-assignment of age
    age=89;
    cout<<"age="<<age<<endl;
    //declaration of a
    int a=85;
   //assignment of the value of a, to age
    age=a;
    cout<<"age="<<age<<endl;
    double price=1568254.457;
    cout<<"The jacket costs $"<<price<<endl;
    bool am_good=true;
    cout<<"I'm I good? "<<am_good<<endl;
    cout<<boolalpha<<am_good<<end;
    am_good=false
    cout<<"I'm I good? "<<am_good<<endl;
    cout<<noboolalpha;
    cout<<"I'm I good? "<<am_good<<endl;
    char gender='M';
    cout<<"gender:"<<gender<<endl;
    return 0;
}
````

When variables have the same type, they can be declrared as follow:

````C++
int main()
{
    /*declaration of 2 integers
     without initialization*/
    int a,b;
    /* short integers:
    x, y and z2 are initialized
    z is not initialized
    */
    cout<<"int variables\n";
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    short x=15,y=9,z,z2=88;
    /*
   float variables e and f declared
   only f is initialized

    */
    float e,f=5.56;

    cout<<"float variables\n";
    cout<<"e:"<<a<<endl;
    cout<<"f:"<<a<<endl;

    cout<<"short variables\n";
    cout<<"x:"<<a<<endl;
    cout<<"y:"<<a<<endl;
    cout<<"z:"<<a<<endl;


    return 0;
}
````

## Size occupied by a variable

Everytime a program creates a variable, the computer allocates a memory. The memory allocated for each variable depends on it type.

We talked about the size occupied by each type of variable, at least for most of the built-in types, in the previous lesson.

C++ programming language proposes an operator to get in bytes, the size allocated to a variable, for a type, or a value if it where assigned to a variable. This is the ````sizeof```` operator.

### Examples of usage

````C++
int main()
{
int var;
cout<<"var occupies "<<sizeof(var)<<"bytes in memory\n";
cout<<"int variables occupy "<<sizeof(int)<<"bytes in memory\n";
bool val=true;
cout<<"val occupies "<<sizeof(val)<<"bytes in memory\n";
cout<<"'A' will occupy "<<sizeof('A')<<"bytes in memory\n";
cout<<"long double variables occupy "<<sizeof(long double)<<"bytes in memory\n";
long long x;
cout<<"x occupies "<<sizeof(x)<<"bytes in memory\n";

cout<<true<<" will occupy "<<sizeof(true)<<"bytes in memory\n";
return 0;
}
````

## Range of values: Type representation in memory, overflow

Each type in C++ supports a range of values, determined by the size occupied that type in memory.For non flotting numerical variables, a variable that occupy n bits can hold values from ````-2^(n-1)````  to ````2^(n-1)-1.````

For example, an integer  variable of type````int```` will occupy 4 bytes of memory, so 4*8=32 bits, because a byte equals 8 bits. Consequently it can hold values in the range [-2^(32-1);2^(32)-1], so from ````-2147483648```` to ````2147483647````. So weshouldn't assign a value out of that range to a variable of type int.
(table in annexe)

## Get the type of a variable

It could be sometimes necessary to check briefly the type of a variable in C++. The way to do it is similar to the one used with the ````sizeof```` operator, meaning that we can get the typename of a value, a variable, or a type keyword.

### Examples: Get the type of a variable

````C++
int main()
{
    char ch;
    int age;
    float f;
/* *This initialization is optional*/
    bool am_good=true;
    cout<<"typeid(ch).name(): "<<typeid(ch).name()<<endl;
    cout<<"typeid(age).name(): "<<typeid(age).name()<<endl;
    cout<<"typeid(am_good).name(): "<<typeid(am_good).name()<<endl;
    cout<<"typeid(f).name(): "<<typeid(f).name()<<endl;
    short sh;
    cout<<"typeid(sh).name(): "<<typeid(sh).name()<<endl;
    long ln;
    cout<<"typeid(ln).name(): "<<typeid(ln).name()<<endl;
    cout<<"typeid(int).name(): "<<typeid(int).name()<<endl;

    cout<<"typeid(double).name(): "<<typeid(double).name()<<endl;

    cout<<"typeid(float).name(): "<<typeid(float).name()<<endl;

    cout<<"6: "<<typeid(6).name()<<endl;
    return 0;
}
````

## Type deduction in C++

C++ proposes a mechanism to deduce the type of a value. This is the use of the ````auto```` keyword. We may not know the type of a value, or much more, we want to assign to a variable. All we need to do is to declare the variable using the ````auto````  keyword followed  by the name of the variable, and it value.

 Let's reiterate that we should necessary assign a value to the variable at the same time as it declaration.

As a variable, we can re-assign the variables declared with the ````auto````  keyword, but we need the new value be compatible with the one assigned during declaration because C++ is not dinamically typed.

### Examples on type deduction

````C++
int main()
{
    auto val=102;
    cout<<"val: "<<val<<endl;
    cout<<"typeid(val).name"<<typeid(val).name<<endl;
    val=4;
    cout<<"val: "<<val<<endl;
    auto x=true;
    auto y=456987455789458;
    cout<<"x: "<<val<<endl;
     cout<<"typeid(x).name"<<typeid(x).name<<endl;
     cout<<"y: "<<val<<endl;
     cout<<"typeid(y).name"<<typeid(y).name<<endl;
     //a double
     auto flt=45.8;
     cout<<"flt: "<<val<<endl;
     cout<<"typeid(flt).name"<<typeid(flt).name<<endl;
     //auto p;//error
    return 0;
}
````

## Unsigned qualifier or modifier

## Type suffixes

| Suffix |     Meaning                          |
| ------ | --------------------------- |
| ````F```` or ````f````  | Single-precision floating-point number |
| ````U```` or ````u````    | Unsigned integer            |
| ````L```` or ````l````    | Long integer                |
| ````UL```` or ````ul```` or ````uL```` or ````Ul````| Unsigned long integer       |
| ````LL```` or ````ll````  | Long long integer           |
| ````ULL```` or ````Ull```` or ````ull```` or ````uLL```` | Unsigned long long integer  |

### Usage examples

## Constante variables in C++

A constaant variable is a variable whose valueshould neccessary be assigned at declaration and can't be modified. In our programm, there may be variables which should not be re-assign. Then we can useconstantes to ensure their value is not modified (unconsciously for example)during the programm.
C++ provide two ways to declare constant variable:

* Using the ````const```` keyword
In that case, we use the ````const```` keyword followed by the type of the variable and then it identifier.

## Examples: constant variables

````C++
#include<iostream>
int main()
{
    const int cst=20;
    //display cst
 cout<<"cst: "<<cst<<endl;
 /*You'll get an error if you uncomment the next line of code */
//cst=56;
     //another error
//cst=20
     //even if the value doesnt change
     //another constant variable
     const bool b=true;
     //a non constant variable
     bool x=b;
     return 0;
}
````

You can also do the same by specifing first the type of the variable before the ````const```` keyword.

## Examples: constant variables(2)

````C++
#include<iostream>
int main()
{
     int const cst=20;
    //display cst
    cout<<"cst: "<<cst<<endl;
     //another constant variable
     const bool b=true;
     //a non constant variable
     bool x=b;
     //another
     char const c='c';
     return 0;
}
````

* using a directive of preprocessor
  That way consits in using directive of preprocessor called macro. In that approach we don't have to specify the type of the constante.

````C++
#include<iostream>
#define N 20
#define M -15.56
#define C 'P'
int main()
{
    //print the macros
    cout<<"N: "<<N<<endl;
    cout<<"D: "<<D<<endl;
    cout<<"M: "<<M<<endl;
    cout<<"P: "<<P<<endl;
    //error
    //N=95
    //and then their type
     cout<<"N: "<<type(N).name()<<endl;
    cout<<"D: "<<type(D).name()<<endl;
    cout<<"M: "<<type(M).name()<<endl;
    cout<<"P: "<<type(P).name()<<endl;

     return 0;
}
````

With that approach, N  for instance, will be replaced by 20 every where we use N in our programm(Attention:scope).

## Resume

Variable are unavoidable in programming.

* Variables identifiers should obey some rules
* C++ is a statically typed language that provides many types to store variables and also allows type deduction, via the use of the ````auto```` keyword basing on the value of the variable.
* Each non-floating  numerical variable, accordling to its type, store a certain range of values that should not be exceded.
* The ````sizeof```` operator is used to get in bytes, the size occupied  by a variable or a type of variable.
* By using the ````typeid```` function we can briefly check the type of a variable or a value.
* Literals or suffixes are used to force some types or value to be for a certain type.
* Constants are used via the ````const```` keyword or a directive of preprocessor.
