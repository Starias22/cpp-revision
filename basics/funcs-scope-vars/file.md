# Functions and scope of variables

## Overview

In this lesson, we will learn much more about functions and then, we will discover the notion of variable scope.

## Formal and effective parameters

 Let us consider the code below.

````C++
#include <iostream>
using namespace std;
void display(int val){
    cout<<val<<endl;
}
int main()
{
    display(2);//a
    display(55);//b
    int j=56;
    display(j);//c
    display(j+6);//d
    return 0;
}
````

* We define a basic function named ````display```` that takes an integer as argument and then just prints it.
* We call it four(4) times in the main function.

Let's explain what happens when we call the ````display```` function.

For the first call of the display function for example(````a````),

````C++
display(2)//a
````

that function first of all creates an integer variable with the identifier ````val```` and assigns it the value passed to the function, ````2````. Then, it executes line by line the instructions inside it's block. Finally, the variable ````val```` is destroyed.

For the third call for example(````c````) the same thing happens, the function creates a variable named ````val```` and assigns it the value of ````j````, ````56````, before executing the rest of the code inside the block.

The ````val```` identifier is called ````formal argument````. Its the one specified during the definition of the function.

The values ````2````, ````55````, ````j```` and ````j+6```` are called ````effective parameters````. There are those specified during the calling of the function.

Overall:

* ````formal parameters```` of a function are  variables  we find inside it's brackets in it's definition. They are declared inside the function and destroyed at the end of the function, everytime the function is called.
* ````effective```` or ````real parameters```` are the values passed to the function during  calling.
* During call to a function with argument(s), effective or real parameters are assigned to formal argument before any instruction inside the block.

## Functions and ````auto```` keyword

We can use the ````auto```` keyword in function declaration. We can use it to deduce automatically the return type of a function.

The function bases on the type of the returned expression to deduces the return type of the function.

### Examples

````C++
#include <iostream>
using namespace std;

auto is_even(int number){
    return number%2==0 ;
}
auto hello(){
    cout<<"Hello dear friends!\n";
}
int main()
{
    auto val=is_even(8);
    cout<<boolalpha;
    cout<<"Is 8 even? "<<val<<endl;
    cout<<"typeid(val).name():"<<typeid(val).name()<<endl;
    if(typeid(val)==typeid(bool))
        cout<<"val is a boolean value\n";
    hello();
    return 0;
}
````

## Scope of variables in C++

The scope of a variable is the environment, the space where it's available and so, can be refered to.

We have three(3) kinds of scopes of variables in C++ programming language. There are:

* local scope
* global scope
* static scope

 Accordinly, we can say for example that a variable has a local scope or is a global variable or isstatic.

### Local variables

This is the lowest and the most used scope of variable.

Each variable we declare inside the main function or any function else can be accessed only inside that function and never outside. These variables are local to the function inside they are declared.

Formal parameters are also local to these function.

### Global variables

This is the greatest scope of variables.
Global variables are variables declared outside any function. They can be refered to(read and assigned)  from any evironment of the  programm if that evironment succeds their declaration. Modifications made to them, by any function are affected evrywhere.

#### Examples of global variables

````C++
#include<iostream>
using namespace std;
//some global variables
float x=1.55;
auto str="A global string\n";
void modif_str(){
    str="str modified\n";
}
int main(){
    //access to str
cout<<"str:"<<str;
//call the modif
modif_str();
cout<<"After modif:"<<str;
str="str modified in main:\n";
cout<<"Inside the main function:"<<str;

}
````

#### Remark

The unicity of the identifier of variables is related to their scope. That means that two(2)variables can have the same name but in different scopes.

### Static variables

Static variables are  mostly used inside definition of functions. There are those which are assigned only once inside their function(the one inside there are declared) during the programm and whose value is conserved from an execution(call) of their function to another.

In fact, the memory reserved to these kind of variables, once created, is set free only at the end of the programm. That's why their value is conserved from an execution(of their function) to another.

To declare a static variable, we need to specify the ````static```` keyword before or after it's type and then specify it's identifier.

#### Examples of static variables usage

````C++
#include<iostream>
using namespace std;
void stat_test(){
    /*The next line will be executed
    only one: during the first
    to this function*/
    static int count=0;//or int static
    count++;
    cout<<"Calling number "<<count<<endl;

}
int main()
{
    for(int i=0;i<10;i++)
        stat_test();
    return 0;
}
````

That's not possible without the static qualifier. Remark it by removing it

In fact, without the static qualifier, for each call of the ````stat_test```` function, the count variable is created and assigned to 0, and then incremented, so, equal to 1, but destroyed at the end of the function, aster printing 1.

#### Remark on static variables

 Static variables are also local because they are accessed only in the function where they are declared.

## Resume

Overall:

* We can use the ````auto```` keyword to let a function deduces it's return type
* There are functions that doesn't take any parameter and those that take one or several parameters.
* For the second category,
  * each parameter specified in the brackets during definition is called formal parameter.
  * each value specified during calling is called effecive or real parameter.
* C++ provides three(s) scopes of variables: local, global and static scopes.
