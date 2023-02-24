# Strings and special characters

## Overview

We will talk briefly about strings in C++ programming language. Then we will alk about special characters.

## Type ````string```` in C++

A string is  simply a sequence of characters, a set of chars.

C++ provides a non bulit-in type for strings, called ```string```.
That types is defined in the standard namespace std.

### Examples

## Special characters

We will introduce with an example.

Let's consider the following code where we try to print "Practice makes perfect"(with the quotes):

````C++
#include<iostream>
int main()
{
    /*trying to print a string with qotes*/
    cout<<"Note that:"Practice makes perfect"  and work arcodinly"<<endl;
    return 0;
}
````

Copy paste that code, compile it and not that it leads to compiling error.

In fact, the quotes character are meant for surrounding strings.

To fix that issue, we need to escape the quote character````"```` using the escape character ````\````. By doing that we prevent the compiler interpreting it as a surround character.

Special characters are chacters that already have a specific meaning, and cannot be used without the escape character ````\````.
Confer below the list of special characters in C++, with their meaning.

| Special Character | Meaning |
| --- | --- |
| `\"` | Double quotation mark |
| `\'` | Single quotation mark |
| `\\` | Backslash |
| `\n` | Newline character |
| `\r` | Carriage return character |
| `\t` | Tab(tabulation) character |
| `\b` | Backspace character |
| `\f` | Form feed character |
| `\a` | Alert (bell) character |

## Examples of use

## Resume

* C++ programmin languae provides a non built in type to manipulate strings easily.
* ````\```` is used to escape some special characters that already have a specific interpretation.
