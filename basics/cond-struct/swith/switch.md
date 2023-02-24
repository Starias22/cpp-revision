# Switch statments

````switch```` is similar to if statments(if,else if,else). Its a specific case of if statments where we check if an expression is equal to a set everyone of provided values or not and perform a specific task accordingly. It allows to avoid nested if in that case.
The syntax is as follow:

````x
switch(expression)
{
    case value1:
        instruction
        break
    case value2:
        instruction
        break
    case value3:
        instruction
        break

   //...
   default:
        break

}
````

* We can have as many as ````case```` we want and as many as instructions in each ````case````.
* Using the ````break```` is facultative. It prevent the compiler going to the next ````case```` when the current ````case```` is satisfied.
* The ````default```` keyword  is the case none of the above ````case````s is satisfied and.It is not required (but recommended). So, it istruction(s) is(are) executed if none of the conditions above is satisfied.

## Resume

````switch```` statment is a particular case of if statments used to check a value of an impression in a set of values.
