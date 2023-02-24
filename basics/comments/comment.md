# Comments in C++

## Overview

In this chapter we will learn what are comments in C++ programming language, their usefulness and finally how to make them.

## Comments in C++: Definition

In C++ as in many programming languages, comments are simply, lines of code that will be ignored by the compiler. A comment can be a sentence or phrase that explains a portion of the code of the programmer and that will not be compiled.

## Usefulness of comments

Comments are very useful in C++ as in any programming language. With comments we can explain our code. That could be interesting for us when we come back later on the same code. Comments also facilitates collaborative programming and code maintainance.

## Making comments in C++

There are two options to make a comment in C++: single line and multiline comments.

* A single line comment is a comment that occupies  a line. We use ````//```` to write a single line comment in C++. Single line comments start with ````//```` and continue until the end of the line.
* A multiline comment is a comment that occupies one line or more. We use ````/**/```` to write a single line comment in C++. Multiline comments are enclosed between ````/*```` and ````*/````.

### Examples of comments in C++

````C++
#include<iostream>
using namespace std;
int main()
{

    //this is a comment on a line
    //this is another commment
    //this code won't be compiled
    /*This is a comment
    on two lines */
    /*This is a comment on a single line*/

    //this will print Hello world
    cout<<"Hello world\n";
    /*Go to a new line and flush the  standard
    output stream*/
    cout<<endl;
    return 0;
}
````

## Resume

* Comments are very useful. They are used in any programming language and allow us to write a more readable, maintainable and collaborative code.
* The  C++ programming language provide two ways to write comments: single line comment(````//````) and multiline comments(````/**/````).
* It is a good practice to add comments to your code, especially for larger or complex projects. This makes it easier for others to understand the code and for you to remember what you did when you come back to it later.
