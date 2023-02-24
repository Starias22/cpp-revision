# Loops and jump instructions in C++

## Overview

Loops allow programmers to execute  instruction(s) repeatively while a condition is verified.

C++ programing language provides three kinds of loops: the ````while```` loop, the ````for```` loop and the ````do while```` loop.

## ````while```` loop

The syntax is bellow:

````xxx
while(expression)
{
    instruction(s)
}
````

## ````for```` loop

````xxx
for(initialization(s);expression;instruction(s)/incrementation)
{
    instruction(s)
}

````

## ````do while```` loop

The syntax is bellow:

````xxx
do
{
    instruction(s)
}while(expression);
````

### Examples

````C++
#include<iostream>
using namespace std;
int main()
{
    //let's print * 10 times
    //cout<<"**********"<<endl;
    //but if count so enorm
    int count=0;
    while (count!=10)
    {
        cout<<"*\t";
        count++;//or ++count
    }
    cout<<"\n";
    //print count
    cout<<"count= "<<count<<endl;
    if(count==10)
    cout<<"Of course\n";
    //print fom 1 to 10
    for(count=1;count<=10;count++)
    //{
        cout<<count<<'\t';
    //}
    cout<<"\n";
    cout<<"count= "<<count<<endl;//11
    //print from 10 to 1 using do while
    count=10;
    do{
        cout<<count<<'\t';
        count--;

    }while(count!=0);
        cout<<"\n";

    if(count==0)
    cout<<"Of course :count=0\n";
    return 0;
}
````

## Equivalence between the while loop and the for one

## Jump instructions: ````break```` and ````continue````

Jump instructions are instructions that are used inside loops. THere two kinds of jump instructions in C++.

* ```break``` instructions is used to stop a loop at a givin iteration or when a given condition is satisfied.
* ```continue``` is used to jump an iteration of a loop.

### Examples: ```break```-```continue```

````C++
#include<iostream>
using namespace std;
int main()
{

    for(int i=0;i<10;i++)
      if(i==5)
        continue;
      cout<<i<<'\t';

    return 0;
}

````

````C++
#include<iostream>
using namespace std;
int main()
{

    for(int i=0;i<10;i++)
      if(i==5)
        break;
      cout<<i<<'\t';

    return 0;
}
````

## Infinite loop

An infinite loop is a loop that doesn't have any stop condition.It instructions are executed undefinitely.

Typicalled, infinite loop is created by specifing a condition that's always true.
We can accidently get an infinite loop by programming.

Infinite loops are sometimes depreciated but sometimes useful.

### Example: infinite loop

````C++
#include<iostream>
using namespace std;
int main()
{

    //infinite loop
    while (true)

        cout<<"Hello infinite loop\n";

    return 0;
}
````

Press Ctrl+C to stop it.

## Nested loops

## Resume

* The three types of loops provided by C++ programming language allow us to perform repetively specific tasks until a condition becomes unverified.
* ```break``` and ```continue```  instructions are used with loops stop them or to jump an iteration.
* An infinite loop is a loop without a stop condition.
* Whereas our programm can accidently lead to an infinite loop, infinite loops may sometimes be useful.
* Loops can be nested.
