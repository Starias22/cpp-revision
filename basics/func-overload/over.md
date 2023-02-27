# Overdefinition of functions

## Overview

In this lesseon we are going to learn more advanced notions about functions, concerning overdefinition of functions in C++programming language.

## Polymorphism

As an object-oriented programming language, C++ is characterized by polymorphism of objects, which is a fondamental concept of object-oriented programming(OOP).

Polymorphism means multiple forms. Its the ability of an object to have different forms. With that approch, we can have, for instance, many functions with the same name but different features: that is called function overdefinition or overloading.

## Overdefine functions

We overdefine a function in C++ by providing  two or several functions with the same name but different in their number or/and type of aguments.

We may have defined a function named ````sum```` to calculate and return the sum of two integers(````int````), and now want to do the same with two real numbers(````double````). It could be preferable to have the same name for both these functions as they do the same things, just with different types of data.

We can do that as follow:

````C++
#include<iostream>
using namespace std;
//integers(int) sum
int sum(int a,int b){
    //for test
    cout<<"Sum of integers\n";
    return a+b;
}
//reals(double) sum
double sum(double a,double b){
    //for test
    cout<<"Sum of doubles\n";
    return a+b;
}
````

We've defined two functions, both named ````sum````:

* the first one takes two ````int```` and return the sum as an ````int````.
* the second takes two ````double```` and return the sum as a````double````.
* Each function makes a ````cout```` so as to know which one is called.

Now let's see how to call them.

## Overdefined functions calling

In case of overdefined functions, the compiler bases on the number or/and type of the arguments provided to call the appropriate function.

The code below shows how to call the two functions we've overdefined above.

````C++
int main()
{
    sum(5,6);/*int,int:the first will be called*/
    sum(4.5,8.5);/*double,double:the second will be called*/
    int x=4,y=45;
    sum(x,y)//int,int
    double k=45,m=88;
    cout<<"k+m="<<sum(k,m)<<endl;//double,double
    return 0;
}
````

* The values ````5```` and ````6```` have both the type ````int````, so, ````sum(5,6)```` executes the first function.
* The values ````4.5```` and ````8.5```` have both the type ````double````, so, ````sum(4.5,8.5)```` executes the second function.
* The variables ````x```` and ````y```` have both the type ````int````, so, ````sum(x,y)```` executes the first function.
* The variables ````k```` and ````m```` have both the type ````double````, so, ````sum(k,m)```` executes the second function.

## Rules for overdefining functions and  calling overdefined functions

There is a  rule to respect during functions overdefining and another to respect during call to  an overdefined function.

* Return type cannot differ two or more overdefined functions.

### Example

````C++
#include<iostream>
using namespace std;
//integers(int) sum
int sum(int a,int b){
    //for test
    cout<<"Sum of integers\n";
    return a+b;
}
void sum(int a,int b){
    cout<<"The sum of "<<a<<" and "<<b<<" equals "<<a+b<<endl;
    }

int main(){
    return 0;
}
````

That codes will leads to an error at compiling  even without calling these functions because the two overdefined functions have the same entry(type and number of argument) but are  just different in their return types(int and void).

* There couldn't be more than one  match for a call to(an overdefined) function. Otherwise, we will have a compiling error due to ambigous call to function.

### Examples

````C++
#include<iostream>
using namespace std;

void print(int val){
    cout<<"int: "<<val<<endl;
}
void print(float x){
        cout<<"float: "<<x<<endl;
}
int main()
{
    print(45);//int
    print(4.5);//wrong:issue

    float x=-65;
    print(x);//float

    return  0;
}
````

The second call to ````print```` will leads to compiling error. In fact, the value ````4.5```` is ````double```` by default. But it can be used:

* either as an ````int```` value : in that case the value ````4```` will be used
* or as a ````float```` value: ````4.5```` will be used in that case.

Overall, the compiler has two options, either call the first print or call the second one, that's the reason why compiling error will occur.

To avoid that, we can cast the value ````4.5```` (from ````double````) to float. We have some possibilities:

* apply float literal on 4.5

````C++
//using float literal
print(45.5f);
print(55.9F);
`````

* perform an implicite casting by assigning the value ````4.5```` to a float variable.

````C++
//a flot variable
float var;
/*implicit cast from double to float*/
var=45.5;
print(var);
print(55.9F);
`````

* perform an explicite casting by using either ````(float)```` or the ````static_cast```` function.

````C++
/*exlicit cast from double to float*/

   print((float)45.5);
   print(static_cast<float>(45.5));
````

## Resume

Overall, function overdefinition or overloading is a powerful and useful feature provided by C++ programming language.

 It allows to define many functions with the same name, that differenciate in their type and/or number of arguments, but not in their return type.

Casting can be made to avoid some compiling errors due to ambigous call to overloaded functions.
