# Hello, world!

### Overview

This is our first C++ programm, a programm to get started with C++ programming languague. It is the basic C++ programm that just prints the message "Hello, world!" to the console output.

copy paste the content of the [ hello_world file ](https://github.com/Starias22/cpp-revision/blob/main/basics/hello_world/hello_world.cpp "Hello world programm")  and follow the instructions above to run it.

### Run the programm
To run that programm, if you have g++ installed, you need to follow two steps

1. The first step is to run the following command:
````bash
g++ hello_world.cpp -o exe.o
````
by replacing hello_world.cpp by your filename.
That step is called the compiling step.
At that step, the compiler analyse the code to check the eventual syntax errors. In case of error you are notified and you can't move to the next step unless you correct all the syntax errors in your programm.Otherwise, you will get a file named exe.o
That's called the executable file or simply the exucutable. The next step will be to run that executble so as to get the expected result, the
"Hello, world" message printed to the console.

2. Now run the following command:
````bash
./exe.o
````
where exe.o is the name you've given to you executable above.

You will obtain the following output:

````Hello, world!````


### Explanation

Let's explain that programm

#### Preprocessor directive

```C++
#include<iostream>
````
That is the first line of our programm. It is called a *preprocessor directive*. 'iostream' stands for 'input output stream' and contains all the neccessary functions and objects to perform input and output operations, such as printing to the console using cout.

#### The main function

```C++
int main()
{
    std::cout<<"Hello, world!";
    return 0;
}
````

That is the main function of our program. It consits the entry point of the programm.It consits of two lines.

#### cout
````C++
std::cout<<"Hello, world!";
````
That line is the one which allows us to print the "Hello,world" message to the console own to the 'cout' method which is defined in the *namespace* ````std````.````<<```` is an operator of stream. It is an instruction and terminates with semiclon(;).

cout stands for console output

#### return

````C++
return 0;
````
That line just allows the main function of our programm to return 0 so as to notify everything has been okay. In case of an error, the main function should return a non null integer.
Let us notify we can use another integer value such as 1, 5, etc.

echo $1

## Resume

* The C++ programming language as all programming languages is not understood by computers. So to run a C++ programm, we first of all need to compile it using a C++ compiler such as g++. At that step, our code is analised and we get notified of  the eventual errors. In case of success, we get a binary file, a bytecode, also called a machine code, or excutable which is understood by our computers. We can then execute that code to get the attended result.
* The main function is the entry point of any C++ programm.
* The cout function contained in the standard namespace  std, that is defined in the iostream library allows us to print message to the console using the operator '<<'.
*An instruction in C++ is a line of code that ends with a semicolon(;) and order the computer to do a specific action.