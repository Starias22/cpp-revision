# Function basics

## Overview

We will discover the basics of functions in this lesson. We will continue talking about functions and their related more advanced notions in the following lessons.

## Definition and usefulness

A function is a set of lines of code meant for solving a specific problem. In any programming lauguage, writing a function has many advantages:

* divide a complex problem into sub-problems, so facilitating problem solving;
* simplify a code and make it more readable and understandable;
* team collaboration: each part or member of a programming team can be assigned to a specific task, to write a specific function;
* avoid code repetition: we won't have to repeat a block of codes we need several times in our programm.

## Function writing in C++

To write a function in C++ programming language, the basic syntax to is the following one:

````x
type ident(type1 param1,type2 param2,...)
{
    //write your code hear
}
````

* ````ident```` is the identifier, the name of the function and should respect the same rules as those used to name variables
* ````parami```` is the i-th parameter or argument of the function.
* ````typei```` is the type the i-th argument
* ````type```` represnts the return type of the function.

### Remark

   We have already talked about some functions of C++. For example:

* the ````main```` function, the entry point of any C++ programm. It doesn't take any paramater, but returns an integer value, so it's return type is ````int````
* the ````getline```` function that gets a line from the console.

### Example: A function that prints Hello world

#### Code

````C++
void say_hello(){
    cout<<"Hello ,world!\n";
}
````

#### Explaination

* That portion of code below is called the definition of the ````say_hello```` function.
* That function doesn't return any value: So it's return type is void.
* ````say_hello```` is it's identifier.
* It doesn't take any parameter. So any argument or argument type is specified in the brackets(). We can also use ````void```` as follow to specify that:

````C++
void say_hello(void)
````

Similary, the main function can be used like that:

````C++
int main(void)
````

But we'll prefer empty brakets because more simple.

Now let's put the definition of the ````say_hello```` function between the directive of preprocessor and the main function as done in the following code.

````C++
#include<iostream>
using namespace std;
/*a function that says
hello to the world*/
void say_hello(){
    cout<<"Hello ,world!\n";
}
int main(void)
{
    return 0;
}
````

Run the code.

We remark that the code compile and runs without any error but doesn't print anything. In fact we don't have   called the ````say_hello```` function yet.

## Function calling

A function that's already defined can be used in the main function or in another function's definition: That's a calling to the function.

To call a function, we need to specify it identifier followed by brakets and inside, eventually, it's required value(s). Finaly, as it is an instruction, ends with semicolon(s).

We can call a defined function as many times as we want.

### Example: Calling the ````say_hello```` function

````C++
say_hello();
````

Put the code above in the main function. Then compile and run the programm.

You'll get the output:

````x
Hello,world!
````

## The return statement

In functions that return a value or an expression, we need to use the return keyword followed by the value or expression to return. That leads to the end of the function and the returned value can be assigned to a variable while calling the concerned function.

We can also use return statment in a void function if we need it to stops at a specific point of our program for example.

## More  examples

### Example 1: Print the given message

Let's define a function that prints a message taken as argument

#### Definition 1

````C++
void print(string message){
    cout<<message;
}
````

#### Calling 1

````C++
print("My message");
print("Thas'great");
````

### Example 2: Return the given integer value

Let's define a function that just returns the value given as argument.

#### Definition 2

````C++
int retrn(int val){
    return val;
}
````

#### Calling 2

````C++
retrn(45);
int y=retrn(63);
auto x=retrn(55);
//auto z=retrn(66.5)
cout<<"x= "<<x<<endl;
cout<<"y= "<<y<<endl;
````

### Example 3: Checks positive

Let's define a function that checks if an integer is positive(>=0) or not.

#### Definition 3

##### First way

````C++
bool is_positive(int val){
    if(val>=0)
        return true;
    else
        return false;
}
````

As the return instruction stops the execution of any function, we may not specify the else.

##### Second way

````C++
bool is_positive(int val){
    if(val>=0)
        return true;
    //else
    return false;
}
````

##### Third way

To simplify, the function return the same boolean value as the condition val>=0

````C++
bool is_positive(int val){

    return val>=0;
}
````

#### Calling 3

````C++
is_positive(9);
int hp=is_positive(8);
cout<<" Is 8 positive? "<<hp<<endl;
cout<<" Is 0 positive? "<<is_positive(0)<<endl;
cout<<boolalpha;
cout<<" Is -20 positive? "<<is_positive(-20)<<endl;
cout<<" Is 5 positive? "<<is_positive(5)<<endl;

````

### Example 4: Returns sum

Let's define a function that  returns the sum of two  short integers passed as arguments.

#### Definition 4

````C++
short sum(short a, short b){
    return a+b;
}
````

#### Calling 4

````C++
short sh=sum(45,69);
cout<<"sh="<<sh<<endl;
sh=sum(-20,66);
cout<<"sh="<<sh<<endl;
sh=sum(sh,sh);
cout<<"sh="<<sh<<endl;
auto val=sh(45,66);
cout<<"val="<<val<<endl;
cout<<"type(val)="<<typeid(val).name()<<endl;

````

### Example 5: Divisors of an integer

Let's define a function that  prints the divisors of a non-nul integer given as argument.

#### Definition 5

````C++
void divide(int n){
    for(int i=1;i<=n;i++)
        if(n%i==0)
            cout<<i<<'\t';
    return a+b;
}
````

#### Calling 5

````C++
divide(2)
divide(42)
divide(-20)
````

### Example 6: Checks prime

Let's define a function that checks if a number is prime or not.

### Example 7: Prints prime numbers in the given range

Let's define a function that print all the prime numbers between a range of two positive integers given as arguments.
Errors will be handled and we should use the function of the 6th example.

## Const arguments to a function

When we don't want a function modify a variable argument, we can declare that argument constant by using the ````const```` keyword.

That argument is so not assignable or modifiable inside the block of the concerned function. It's read-only. Consequently, assignment operators, such as =, +=, *= and much more, can not be applied to it.

### Example

````C++
void display(const double tail){
    cout<<"Your tail is "<<tail<<endl;
    /*wrong
     tail=1.55
     tail+=1;
    */
}
int main(){
    float tail;
    display(1.75)
    cout<<"What's your tail? ";
    cin>>tail;
    display(tail);
}
````

## Resume

* Functions are very useful in programming.
* We define a function in C++ language by specifing it's return type, it's identifier, it's parameters with their respective identifiers, and in it's block the instructions or lines of code.
* The return keyword is used inside a function block either to return an expression and stops a function or just to stop a function.
* We need to call a funcion by specifing it eventual required values or expressions so as to execute it.
* Any function we define can be called from any else other function, even the main function.

* const keyword is used to make function argument(s) read-only.
