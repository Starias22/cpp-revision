# Characters and ASCII

## Overview

ASCII stands for "American Standard Code for Information Interchange". It is a character encoding standard for electronic communication that was developed in the United States in the 1960s. The ASCII character set includes 128 characters, including letters, numbers, and punctuation marks, as well as control codes such as newline and tab. Each character is represented by a unique 7-bit binary code, allowing computers to represent and communicate text using a standardized encoding. ASCII is widely used in computing and telecommunications, and its character codes are still used as the basis for many other character encoding standards, including Unicode.

## ASCII in C++

### String declaration and initialization

When we declare a char without initializing, it's initialized with a special character, the end of line characterrepresented as ````'\0'````.

#### Illustration

````C++
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<ch;
    if(ch=='\0')
        cout<<"Of course\n";
    return 0;

}
````

A char is initialized or assigned by setting a character to the concerned variable, between single quotes.

````C++
#include<iostream>
using namespace std;

int main()
{
    char ch='A';
    char ch2('z');
    char ch3='m',ch4('\n'),ch5('7');

    cout<<"ch: "<<ch<<'\n';
    cout<<"ch2: "<<ch2<<'\n';
    cout<<"ch3: "<<ch3<<'\n';
    cout<<"ch4: "<<ch4<<'\n';
    cout<<"ch5: "<<ch5<<'\n';
    char t{'A'};
    cout<<"t: "<<t<<'\n';
    return 0;
}
````

We cannot use empty char(````''````).

### Get ASCII code

To get the ASCII code of a character in C++ ,we can  make  either implicit cast or explicit cast (from char) to integer.

Moreover, we can process arithmetic between chars and beween char and integers; then the ASCII codes of the concerned chars are use.

````C++
#include<iostream>
using namespace std;

int main()
{
    char ch='A';
    char ch2('z');
    char ch3='m',ch4('\n'),ch5('7');
    //implicit casting
    int A=ch;
    cout<<"ASCII code of A: "<<A<<endl;
    //explicit casting
    cout<<"ASCII code of B: "<<(int)'B'<<endl;
    cout<<"ASCII code of Z: "<<(int)'Z'<<endl;
    cout<<"ASCII code of a: "<<(int)'a'<<endl;

    cout<<"ASCII code of Y: "<<static_cast<int>('Y')<<endl;

     int Z=ch2;
    cout<<"ASCII code of z: "<<Z<<endl;
    //explicit casting
    cout<<"ASCII code of y: "<<(int)'y'<<endl;

    cout<<"ASCII code of 0: "<<(int)'0'<<endl;
    cout<<"ASCII code of 1: "<<(int)'1'<<endl;
    cout<<"ASCII code of 9: "<<(int)'9'<<endl;
    auto x='a'-'A',y='z'-'Z';
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<x<<endl;

    return 0;
}
````

There are tips  an rules to manually determine the ASCII code of some characters.

* The ASCII code of ````'A'```` is 65. So of ````'B'```` is ````66````, and so one.

There are ````26```` alphabetic letters so the ASCII code of ````'Z'```` is 65+26-1=````90````.

Consequently, ````[A-Z]```` matches ````[65-90]````.

* There are 6 special chars after ````'Z'```` and before ````'a'````, so the ASCII code of ````'a'```` is 90+6+1=````97````. 97+25=````122````.

Consequently, ````[a-z]```` matches ````[65-122]````.

* For each uppercase letter, we can add
````32```` to it's ASCII code to find the ASCII code of the matching lowercase letter.

* The ASCII code of ````'0'````  is ````48````, of ````1```` is 48 and sone. So, ````[0-9]```` matches````[48-57]````.

* The ASCII code of the space character(````' '````) is ````32````.
* The ASCII code of the end of string character(````'\0'````) is ````0````.

### Implicit cast from int to char

Implicit cast will be made from int to char when we initialize or assign a chr variable with an integer. The resulting char is the character that has the ASCII code matching the integer provided.

````C++
#include<iostream>
using namespace std;

int main()
{
    char ch=65;//A
    cout<<"ch: "<<ch<<endl;
    char x(122);//z
    cout<<"x: "<<x<<endl;
    char y{100};//d
    cout<<"y: "<<y<<endl;
    char z(9);//not printable
    cout<<"z: "<<z<<endl;
    ch=99;
    cout<<"ch: "<<ch<<endl;
    ch++;//100(d)
    cout<<"ch: "<<ch<<endl;
    return 0;
}
````

### Input a character

#### Input stream operator(example)

````C++
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter your gender(M/F)\n";
    cin>>ch;
    if(ch=='M')
        cout<<"You're male\n";
    else if(ch=='F')
        cout<<"You're famale\n";
    else
        cout<<"Unknown gender\n";

cout<<"Enter 3 characters";
//with or without spacing
char a,b,c;
cin>>a>>b>>c;
cout<<"a: "<<a<<endl;
cout<<"b: "<<c<<endl;
cout<<"c: "<<c<<endl;

return 0;
}
````

#### get function

The syntax is bellow:

````C++
cin.get(ch)
````

ch represents the  char variable to store the input character in.

#### Example of use

````C++
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin.get(ch);
    cout<<"You entered: "<<ch<<endl;
    return 0;

}
````

## Resume

* ASCII is a norm used to encode characters.
* Each character(integers, letters, special characters, non-printable characters, etc), has an unique ASCCI code that's an integer.
* There are some rules and tips to manually determine the ASCCI code of some characters.
* Casting can be made to perform operations on characters in C++ programming language.

* We can input a character using ````cin````, either with the input stream operator(````>>````) or with the ````get```` function.
