# ````if```` conditions

## Overview

We will learn about ````if```` conditional structure.

## ````if````

The ````if```` conditional sstructure allows us to execute some instructions(lines of code) in case a condition is satified.

## ````if ... else````

With else keyword we can execute some line(s)of code if a previous condition is not verified.

The  possible syntax are bellow:

````x
if (expression)
{
    instruction1;
    instruction2;
    //...
}
````

````x
if (expression)

    instruction;

````

When we have ony one instruction, we are not obliged to enclore it in brackets. But if we have more than one instrucrtion, we must enclose them in a bracket.

## ````if```` , ````else if````

````else if```` allows to do specific task(s) when a condition is not satisfied but another is.

## ````if```` , ````else if```` , ..., ````else````

This is just a combination of ````if````, ````else if```` and ````else````.

### Examples

````C++
#include<iostream>
using namespace std;
int main()
{
    int var=55;
    int mark=15;
    //if
    if (mark>=12)
        cout<<"You succed\n";
        //change it before continue
        //mark=8

    //if else
    mark=10;
    if(mark>=12)
        cout<<"You succed\n";

    else
        cout<<"You fail\n";


    mark=-20;
    if (mark<0)
    {
        //2 instrucions: brackets required
        cout<<"Not a mark: ";
        cout<<"Negative"<<endl;
        cout<<"var: "<<var<<endl;
    }
    //with else if mark>=0
    else if (mark<10)
    {//single instruction:brackets not required
        cout<<"So bad!";
    }
    else if(mark<12)
        cout<<"bad!"<<endl;
    else if (mark==12)
        cout<<"just validate!"<<endl;


    else if (mark<16)
    cout<<"good!";
    else if(mark<=20)
    cout<<"Congrats";

    else //mark>20
    {
    cout<<"Not a mark";
    cout<<"Greayter than 20\n";
    cout<<"var: "<<var<<endl;
    }
    return 0;
}
````

## Remarks

* ````if```` is independant, that is to say that ````else```` or ````else if```` is not required after if.
* There must not be any ````else```` or ````else if```` without a previous if.
* ````else if```` may or not be followed by ````else````.

## Resume

C++ provides ````if````, ````else if````, and ````else```` statments to allow us to execute some instructions if and only if a condition is satisfied or not.
