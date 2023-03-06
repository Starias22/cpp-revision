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

We can base the exit condition from a loop, on the end of string character.

````C++
#include<iostream>
using namespace std;

int main()
{
    char str[]="It's a new horizon";
    cout<<"str: "<<str<<endl;
    for(auto ptr=str;*ptr!='\0';ptr++)
        cout<<*ptr;
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

#### Examples: get the address of the first item

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
    cout<<"address of tab: "<<(void*)ptr<<endl;

    return 0;
}
````

### const char*

We can declare const array of array using the following syntaxes.

````C++
const char chr[10]="array";
    cout<<"chr:"<<chr<<endl;

    //chr[2]='A'; //error

    cout<<"chr:"<<chr<<endl;
    const char * str;
    str="test";
    cout<<"str:"<<str<<endl;

    //*str=65;//error
    cout<<"str:"<<str<<endl;

````

With both approach we cannot assign the items of the array, but only with the last approach we can modify entirely the array.

When we initialize a string using the auto keyword, it's type is const char*.

````C++
#include<iostream>
using namespace std;

int main()
{
    auto tab ="Hello strength";
    cout<<"typeof tab: "<<typeid().name()<<endl;

    return 0;
}
````

## cstring library

The C progamming language provides a library called ````string```` to perform various tasks on strings such as copy, search chars in strings,substrings , etc. To use that library in C++, we should include ````cstring```` as follow:

````C++
#include<cstring>
````

We are going to study in this section some of the functions of that library, the most used.

### strlen

````C++
strlen(str)
````

Get the length of the array, which is the number of characters before encountering an end of string character.

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

### copy strings

#### strcpy

````C++
strcpy(dest,src)
````

copy the string from src into dest.

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

#### strncpy

````C++
strncpy(dest,src,max)
````

Copies at most max characters of src to dest.

Similar to strcpy but the number of characters to copy from is at most max.

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

### concat strings

#### strcat

````C++
strcat(dest,src)
````

concat the string in src to dest.

* dest must be a chars array identifier.
* src is either a constante string or an identifier.
* The  content of src is appended to the eventual content of dest.
* The dest string must be so large to contain the string that results from the concatenation, otherwise an error may occur during execution.

````C++
#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char greet[]="Hello";
    char example[10];
    strcat(example,"example");
    cout<<"strlen(example) :"<<strlen(example)<<endl;
    cout<<"example: "<<example<<endl;
    strcat(example,"se");
    cout<<"strlen(example) :"<<strlen(example)<<endl;

    cout<<"example(after): "<<example<<endl;
    /*wrong: execution error*/
    strcat("lglg",example);
    strcat(example,"morelarger");
    return 0;
}
````

#### strncat

````C++
strncat(dest,src,max)
````

Concats at most max characters of src to dest.

Similar to strcat but the number of characters to append from src to dest is at most max.

````C++
#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char greet[]="Hello ";
    char world[]="worlds!";
    cout<<"greeting: "<<great
    <<"worlds: "<<worlds<<endl;
    char str[20];
    cout<<"str: "<<str;
    strcpy(str,greet);
    cout<<"str(after copy):"<<str;

    strncat(str,world,5);
    cout<<"str(after concat): "<<str;
    return 0;
}
````

### strings comparison

#### strcmp

````C++
strncmp(str1,str2)
````

Compares lexicographically str1 an str2, based on the ASCII code of each character of each one of str1 and str2; returns:

* 0 if str1 and str2 are equal
* a positive integer if str1 is greater than str2
* a negative integer if str1 is less than str2.

str1 and str2 may be a string identifer or a constant string.

#### strncmp

````C++
strncmp(str1,str2,max)
````

compares at most max characters of str1 an str2.

Similar to strcmp but the number of chars to compare is at most max.

#### strcasecmp

````C++
strcasecmp(str1,str2)
````

Compares str1 and str2 ignoring case.

Similar to strcmp but case is ignored.

#### strncasecmp

````C++
strncasecmp(str1,str2,max)
````

Compares at most max characters of str1 and str2, ignoring case.

Similar to :

* strcasecmp but at most max characters are compared
* strncmp but case is ignored.

#### Examples: comparison of strings

````C++
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n=strcmp("Bmstrong","amstrong");
    cout<<"n="<<n<<endl;

    n=strcmp("HELLO","HELLO");
    cout<<"n="<<n<<endl;

    n=strcmp("hello","HELLO");
    cout<<"n="<<n<<endl;

    n=strncmp("hello","hello4",5);
    cout<<"n="<<n<<endl;

    n=strcasecmp("heLlo","HElLO");
    cout<<"n="<<n<<endl;

    n=strcmp("hello","hello5");
    cout<<"n="<<n<<endl;

    return 0;
}
````

### Search in string

#### strchr

````C++
strchr(str,chr)
````

search the first occurence of chrin str.

#### strrchr

````C++
strrchr(str,chr)
````

search the last occurence of chr in str.

Similar to strchr but the search starts from the end of str.

#### strstr

````C++
strchr(str1,str2)
````

search the first occurence of str2 in str1.

#### strrstr

````C++
strrstr(str1,str2)
````

search the last occurence of str2 in str1.

Similar to strstr but the search starts from the end of str1.

#### strcasestr

````C++
strcasestr(str1,str2)
````

Search str2 in str1, ignoring case.

Similar to strstr but case is ignore.

For both of these functions, both arguments can be constant(string or character) or variable(char* or char) identifier.

Both these functions functions return null pointer if the motif is not found and a read-only pointer on the first occurence of the motif in the first string if it's found. Consequently, the original string cannot be directly  modified via a pointer returned by these function.

#### Examples: search in string

````C++
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //cout<<"Hello gys\n";
    char  hello[10]="Hello";
    cout<<"hello:"<<hello<<endl;
    char const * x=NULL;
    x=strchr(hello,'e');
    const char *y;
    y=strchr("Hello",'E');

    cout<<"addr(x):"<<(void*)x<<endl;
    cout<<"adr(y):"<<(void*)y<<endl;

    cout<<"x:"<<x<<endl;
    //cout<<"y:"<<y;
    if(y==NULL)//or nullptr
    cout<<"y is nullptr\n";
   //*x='E';//error
   char *ptr=(char*)x;
   *ptr='E';
    cout<<"x:"<<x<<endl;
    cout<<"hello:"<<hello<<endl;

    return 0;
}
````

In the case the first string passed to them is a string identifier, casting can be made to modify it via the returned pointer.

#### Examples: modify after casting

## Resume

* String can be represented as an array of characters, where the last character is the end of line character.

* The cstring library provides many functions that help to easy manipulate string.
