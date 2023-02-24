# Print message

## Overview

In the previous lesson we learned how to print a simple message, "Hello, world!" to the console (cf [Hello world readme](https://github.com/Starias22/cpp-revision/tree/main/basics/hello_world/hello_world.md "Hello world programm readme") ).

In this chapter we will learn more about printing message to console in C++ programming language.

Copy paste the content of the [hello_world file](https://github.com/Starias22/cpp-revision/tree/main/basics/hello_world/ "Hello world programm")  and add the following line just after the first instruction of the main function:

````C++
std::cout<<"How are things?";
````

Save the file, compile and run it.
You'll get the following output:

````Hello, world!How are things?````

We use twice the cout function to print two messages, firstly the "Hello, world!" message and secondly the "How are things?" one.

### Go to a new line

We remark that all these messages are printed on the same line of the console. In fact, ````cout```` doesn't go to a new line by default, to print a new message. You can go to a newline by using ````endl```` or ````\n````

* ````endl```` belongs to the ````std```` namespace. It writes a new line and flush the concerned stream.

* ````\n```` is a spacial character in C++ that matches a line.

#### Examples: ````endl```` and ````\n````

````C++
std::cout<<"Hello, world!";
std::cout<<std::endl;
std::cout<<"How are things?";
std::cout<<"C++ is powerful\n";
std::cout<<std::endl;
std::cout<<"\n";
````

### ````<<```` operator combination

We can combine the stream operator ````<<```` as shown in the examples below

#### Examples: ````<<```` combination

````C++
std::cout<<"Combi"<<"nation\n";
std::cout<<"Name: "<<"Pierre";
std::cout<<"message1"<<"message2"<<std::endl
std::cout<<std::endl<<std::endl;
````

Before moving on, let's talk briefly about namespace notion in C++ programming languague

### Namespace

A namespace is an environment that can  contain the declaration of some C++ types, classes, structures, variables, objects, functions and much more. These elements in a namespace are accessible via the namespace resolution operator(::)

#### Example

````std```` is the standard namespace in C++.

It contains the ````cout```` function and the object ````endl```` for example

### Use std efficiently

We can remark that everytime we want to print a message to the console we use

````C++
std::cout
````

That could be unpleasant for example when we have a lot of things to output.

There is a solution to avoid repetition of

````C++
std::
````

We can add the line before the main function for example

````C++
using namespace std;
````

That notice the compiler we are gonna use the standard namespace, ````std````.

By doing that, to print the message "Great" with a line at the end for example, we just need to write

````C++
cout<<"Great"<<endl;
````

## Resume

* We can combine the stream operator ````<<```` so as to print many messages using a single instruction ````cout````.
* A namespace in C++ contains elements which are accessible via the namespace resolution operator(::):

  * The standard namespace ````std```` is a typical example of namespace in C++.

  * ````std```` contains for example the ````cout```` function that allows us to print a message to the console and the ````end```` object that add a new line tpo the console and flush the concerned output stream.
  * the ````using namespace std;```` instruction allows us to access any element in the std namespace without need to use  the namespace resolution operator.
