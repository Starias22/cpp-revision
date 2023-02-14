# Variables in C++

### Overview
 we will learn variables  in C++ programming language.


### Variables
In any programming language, a variable is the identifier, the name of a memory space, a memory area of the computer, intended to store information during the execution of a program. In C++ language, this information, called the value of the variable, has a specific type. It can be one of the built-in type we learned in the previous chapter(````int````, ````float````, ````double````, ````bool````,  etc) or much more. The information('s value) can change during the execution of the programm but it's type cannot change. Thus, C++ is said to be a statically typed language, meaning that the variable type cannot change during the execution of the programm, contrary to dynamically typed language such as Python where variables can change their type during the execution of the program.

### Declaration of variable in C++
To declare a variable in C++, we just need to precise it's type and it identifier(name), followed by semicolon(````;````).


#### Examples: declaration of variable
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
### Rules for naming variables in C++
* A C++ variable identifier should be alphanumeric, meaning that it should consist only of  alphabetical letters, underscore(````_````) and digits: it should not contain any special character,space or accentuated character.
* A C++ vaiable identifier should not start with digit.
* A C++ variable identifier should not be a C++ reserved word: C++ has several key word that should not be used as variable name.
* A C++ variable identifier is case-sensitive.

#### Examples of right variable names
````
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



#### Examples of wrong variable names
|Identifier|Justification
|--------|----------|
|````2var````|start with digit(````2````)|
|````my variable````|contains a space|
|````mean%````|````%```` is a special character|
|````série````|````é```` is an
|````class````|reserved word|accentuated character|
|````AMPar1-````|````-```` is a special character|
|````int````| reserved word|
|````unsigned````| reserved word|




## Resume

 C++ programming languages has several built-in types that allow to use integers,floating numbers, booleans, characters.