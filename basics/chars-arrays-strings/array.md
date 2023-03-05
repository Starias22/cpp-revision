# char arrays and cstring

## Overview

A string is a set, a sequence of characters. Consequently, it can be represented as an array of characters.

## Declaration and initialisation

By following the rules for declaring and initializing of array of any data type, we can declare a characters array as follow:

````C++
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[5]{'H','e','l','l','o'};
    return 0;
}
````

That's a correct declaration of array.But issues may occurs during execution if we use that string in the rest of code.

In fact, the issue is that the string initialized above doesn't contains the end of string character(````'\0'````), on which several string functions base to work.

Coventianally, a char array of ````N```` items is an array that has ````N```` characters where the last should be the end of string character.

To declare and initialize a character array of ````N```` chars, we have two possibilities:

* using individual characters. In that case, we should specify the end of string character inside anyway, typically as the last item.
* using double quotes. In that case the end of string character is automatically set at the end of the array.

In both cases, we can specify or not the size of the array.

* If the size is specified, N for example,
  * in case we use double quotes, we should have at most N-1 characters inside the array.
  * in case we use individual characters, we should have at most N characters, including the end of string character
* else(if the size isn't specified), it's deduced based on the number of characters provided.

Since sizeof(char) equals 1, we can use sizeof(char) to get the size of a character array(including the end of string character).

````C++
#include<iostream>
using namespace std;

int main()
{

    char str[6]{'H','e','l','l','o','\0'};
    char str2[6]={'H','e','l','l','o'};
    cout<<"The first element of str is:"<<*str<<endl;
    if(*str==str2[0])
        cout<<"Of course\n";

    if (str[5]=='\0'&& *(str2+5)=='\0')
        cout<<"That's right\n";

        char tab[]={'H','o','w','?','\0'};//size=5
        char tab2[]="How?";
    cout<<"sizeof(tab): "<<sizeof(tab)<<endl;
    cout<<"sizeof(tab2): "<<sizeof(tab2)<<endl;

    //other examples
    char str2[]("Hello gays");
    char str3[]=("Hello girls!");
    char str4[]="Good morning\n";

    str2[0]='h';
    *(str+6)='G';
    return 0;
}
````

When we use cout and stream operator with the identifier of other types of arrays(int arrays for example), the address of the array is printed. And to print the items of these arrays, we should browse them using a loop.

### Examples

````C++
#include<iostream>
using namespace std;

int main()
{
    int tab[6]={4,5,6,9,7,8};
    //print the address of tab
    cout<<"tab:"<<tab<<endl;
    //print items
    for(auto i=0;i<n;i++)
        cout<<tab[i]<<'\t';
    return 0;
}
````

On the other hand, we don't need any loop to print a character array. We just need to use cout and the output stream operator.

Moreover, printing a pointer of chars prints the matching string.

### Example: Print a string

````C++
#include<iostream>
using namespace std;

int main()
{
    char tab[]="Hello strength";
    //print the string(tab)
    cout<<"tab:"<<tab<<endl;
    //print items
    for(auto i=0;i<n;i++)
        cout<<tab[i]<<'\t';

    cout<<"tab: "<<&tab[0]<<endl;
    auto x=&str[0];
    char *y=str;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl
    return 0;
}
````

When we declare a chars array without initializing, all chars are set to the end of string char.

### Example: non-initialized array

````C++
#include<iostream>
using namespace std;

int main()
{
    char tab[10];
    //print the string(tab)
    cout<<"tab:"<<tab<<endl;
    bool test=true;

    for(auto i=0;i<10;i++)
        if(tab[i]!='\0')
            {
                test=false;
                break;

            }

    cout<<test?"All nulls\n":"that's false"<<endl;
    return 0;
}
````

### Get and print addess of the first item

We can make a casting from a pointer on char to void * to get the address of a string and then print it.

### Examples: get the address of the first item

````C++
#include<iostream>
using namespace std;

int main()
{
    char tab[]="Hello strength";

    char str("Goodbye fear")

    auto y=static_cast<void*>(tab);
    cout<<"address of tab: "<<y<<endl;
    cout<<"address of str: "<<(void*) tab<<endl;

    char *ptr=tab;
    cout<<"addrss of tab: "<<(void*)ptr<<endl;

    return 0;
}
````

## cstring library

The C progamming language provides a library called ````string```` to perform various tasks on strings such as copy, search chars in strings,substrings , etc. To use that library in C++, we should include ````cstring```` as follow:

````C++
#include<cstring>
````

We are going to study some of the functions of that library in this section.

### strlen

````C++
strlen(str)
````

Get the length of the array, whichis the number of characters before encountering an end of string character.

#### Examples of use: strlen

````C++
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char greet[]="Hello";
    char example[10]="example";
    cout<<"strlen(greet): "<<strlen(greet)<<endl;
    cout<<"strlen(example): "<<strlen(example)<<endl;

    char love[10]{'L','o','v','e','\0'};
    cout<<"strlen(love): "<<strlen(love)<<endl;

    cout<<"strlen(\"peace\"): "<<strlen("peace")<<endl;

    return 0;
}
````

### strcpy

````C++
strcpy(dest,src)
````

copy the string from into dest.

* dest must be a chars array identifier.
* src is either a constante string or an identifier.
* The eventual content of dest is erased(overwritten).
* The dest string must be so large to contain the src string, otherwise an error may occur during execution.

````C++
#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char greet[]="Hello";
    char example[10];
    strcpy(example,"example");
    cout<<"example: "<<example<<endl;
    strcpy(example,greet);
    cout<<"example(after): "<<example<<endl;
    /*wrong: execution error*/
    strcpy("lglg",example);
    strcpy(example,"morelarger");

    return 0;
}
````

### strncpy

````C++
strncpy(dest,src,max)
````

Similar to strcpy but the number of characters to copy is at most max.

````C++
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char example[10];
    strncpy(example,"newst",5);
    cout<<"example(after): "<<example<<endl;
    strncpy(example,"new",5);
    cout<<"example(after): "<<example<<endl;
    return 0;
}
````

### strcat

````C++
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char example[10];
    strncpy(example,"newst",5);
    cout<<"example(after): "<<example<<endl;
    strncpy(example,"new",5);
    cout<<"example(after): "<<example<<endl;
    return 0;
}
````

### strncat

### strcmp

### strncmp

### strchr

### strstr

## Resume

* String can be represented as an array of characters.

* The cstring library provides many functions that helpe easy manipulate string.
