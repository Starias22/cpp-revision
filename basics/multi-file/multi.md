# Multi-file programming

## Overview

We'll learn in this lesson how to programm in C++ language using many files.

## Introductive example

````C++
#include<iostream>
using namespace std;

void multi(){
    cout<<"Multi-file programming in C++\n";
}
int main()
{
    multi();
    return 0;
}
````

Alright! That programm outputs:

````x
Multi-file programming in C++
````

Now let's move the function ````multi```` after the main function.

The resulting code is bellow:

````C++
#include<iostream>
using namespace std;
int main()
{
    multi();
    return 0;
}
void multi(){
    cout<<"Multi-file programming in C++\n";
}
````

Then compile and run the code.

We get an error at compiling due to the call to the function `````multi`````, because it definition comes after the call.

Similary,by default, if a call to any function in our programm is not precceded by it's definition, an error will occur during compiling.

## Prototype of a function: Function declaration

The prototype of a function, also called it's declaration, is the first line of it's definition followed by semicolon(````;````).

For example, the prototype or declaration of the introductive function is the following:

````C++
void multi();
````

### Other examples

````C++
void funct(int a,float b);
int str(string str, char *ptr);
float example(bool &a);
````

Another way to declare a function is similar to the previous way, but the eventual formal parameters are not specified, only their type are specified.

### Examples

````C++
bool multi(void)//or bool multi()
void funct(int ,float );
int str(string, char *);
float example(bool &);
````

By declaring a function above, after the directives of preprocessor, the compiler is warned that a such function exists. So we can define that function either above or below the main function, and call it in any function without issue, so much to solve the problem of the introductive example.

````C++
#include<iostream>
using namespace std;
void multi();
int main()
{
    multi();
    return 0;
}
void multi(){
    cout<<"Multi-file programming in C++\n";
}
````

## Programming with many files

For a consistant C++ projects, you may need to seperate the codes of your programms. So you will need to use many files or folders:

* a header file or folder

A header file is the one which contains the global variables needed in all the programms, the macros, and prototypes of functions.

Conventianaly, a such file has the extension ````hpp````(h for header).

According to our need, we can have many header files, so we'll group them in a header folder.

* a source file or folder

A source file is the one which contains the definition of funcions declared in the matching header file.

A such file has the extension ````cpp````.

Similary, we can have many source files, so we'll group them in a header folder.
In case of a single source file, the main function must be inside.

In case of many source files, the main functions must belongs to one and only one of them.

In case of a single source (respectively a single header) file, we can also put that file in a source(respectively a header) folder.

Header files need to be included in source files, using directive of preprocessor with ````""```` as delimitor, instead of ````<>````:

````C++
#include "header.hpp"
````

* That line should be among the directive of preprocessor of the source file matching the header file ````header.hpp````.

* ````header.hpp```` must specify the absolute or relative path to the concerned header file.
* The consequence of that line is to copy paste the content of the ````header.hpp```` in the concerned source file.

### Include guard in C++

* Redeclaration of a function leads to compiling error(try and see)
* So an error can occur if that line is inserted more than once.
* To avoid that we use what we call C++ include guard.

An include guard, also known as a header guard, is a preprocessor directive in C++ used to prevent multiple inclusion of the same header file. When a header file is included multiple times in a program, it can cause errors such as redefinition of functions or variables.

The include guard is typically defined at the top of a header file before any code, using the following syntax:

````C++
/* define it if not defined*/
#ifndef HEADER_FILE_NAME_H
#define HEADER_FILE_NAME_H

// code for the header file

#endif // HEADER_FILE_NAME_H

````

### Compile and run

To compile, use:

````bash
g++ sources/*.cpp -I header/ -o exe
````

* ````sources```` is the folder that contains the source file(s)
* ````header```` is the folder that contains the source file(s)
* ````exe```` represents the name of the executable
* ````sources/*.cpp```` means all the file(s) with cpp  as extension.

    That allows us having other file(s) with other extension in our sources folder.

* the option ````-I```` is used to include the header folder.

To run, execute as usual:

````bash
./exe
````

### Application example

Write a c++ programm that compute the sum and the product of two integers by using multi-file programming.

## Resume

Overall:

* multi-file programming is useful in case of consistant projects.
* Include guard are used to prevent variable or function redeclaration.
