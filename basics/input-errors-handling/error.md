# Input and errors handling

## Introductive example

Let's consider the code bellow

````C++
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    cout<<"You entered: "<<n<<endl;

    return 0;
}
````

## States of cin

cin is an object of the istream class in C++ that is used to read input from the user or from a file. The istream class has several member functions that can be used to check the status of the input stream. These member functions include good(), bad(), fail(), and eof().

* good() function: It returns true if the input stream is in a good state, which means that there are no errors and the end-of-file (EOF) has not been reached.

* bad() function: It returns true if the input stream has encountered an irrecoverable error. For example, this can happen if the input stream is closed while an input operation is in progress.

* fail() function: It returns true if the input stream has encountered a recoverable error. For example, this can happen if the user inputs a value of the wrong data type or if the input buffer is empty.

* eof() function: It returns true if the end-of-file (EOF) has been reached in the input stream.

These member functions are used to check the state of the input stream after an input operation has been performed. They can be used to determine whether the input operation was successful or not.

In addition, the istream class has several flags that can be used to check the status of the input stream. These flags include:

* goodbit: This flag is set when the input stream is in a good state.

* badbit: This flag is set when the input stream has encountered an irrecoverable error.

* failbit: This flag is set when the input stream has encountered a recoverable error.

* eofbit: This flag is set when the end-of-file (EOF) has been reached in the input stream.

These flags can be combined using bitwise OR (|) and stored in the iostate type, which is a bitmask type that is used to represent the state of the input stream. For example, goodbit | eofbit represents a state where the input stream is in a good state and the end-of-file has been reached.

So,

* goodbit is equivalent to calling good() function,
* badbit is equivalent to calling bad() function,
* and eofbit is equivalent to calling eof() function to check the state of the input stream

### Examples

````C++
#include<iostream>
using namespace std;

int main()
{
    cout<<"state of cin before input: ";
    //everything is perfect
    if (cin.good())
        cout<<"good\n";
    /* there's an error:
    input stream closed while an input
    operation is in progress for ex*/
    if (cin.bad())
        cout<<"bad\n";

    /* for ex in case of
     wrong data type
     empty buffer*/
    if (cin.fail())
        cout<<"fail\n";
        //eof reached
    if (cin.eof())
        cout<<"end of file\n";
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    cout<<"You entered: "<<n<<endl;

    cout<<"state of cin after input: ";

    if (cin.good())
        cout<<"good\n";
    if (cin.bad())
        cout<<"bad\n";
    if (cin.fail())
        cout<<"fail\n";
    if (cin.eof())
        cout<<"end of file\n";
    return 0;
}
````

Test that code with different inputs, for examples:

* 10
* x
* 4d
* 8dskf
* 8.5
* 9.2g
* 8556987459

Now complete the code to get the one bellow; exute it with differents inputs too.

### Example

````C++
#include<iostream>
using namespace std;

int main()
{
    cout<<"state of cin before input: ";
    //everything is perfect
    if (cin.good())
        cout<<"good\n";
    /* there's an error:
    input stream closed while an input
    operation is in progress for ex*/
    if (cin.bad())
        cout<<"bad\n";

    /* for ex in case of
     wrong data type
     empty buffer*/
    if (cin.fail())
        cout<<"fail\n";
        //eof reached
    if (cin.eof())
        cout<<"end of file\n";
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    cout<<"You entered: "<<n<<endl;

    cout<<"state of cin after input:";

    if (cin.good())
        cout<<"good\n";
    if (cin.bad())
        cout<<"bad\n";
    if (cin.fail())
        cout<<"fail\n";
    if (cin.eof())
        cout<<"end of file\n";

    cout<<"Enter a word\n";
    string word;
    cin>>word;

    cout<<"You entered: "<<word<<endl;


    if (cin.good())
        cout<<"good\n";
    if (cin.bad())
        cout<<"bad\n";
    if (cin.fail())
        cout<<"fail\n";
    if (cin.eof())
        cout<<"end of file\n";
    return 0;
}
````

That can be used with getline too.

getline is used to get a line. It can be used with string or characters array.

In case of string, we already know that it takes as first parameter, the input stream(cin), as second parameter the string or array of characters. The third parameter is optional and is the seperator.

### Example:getline in string

````C++
#include<iostream>
using namespace std;

int main()
{
    string line;
    cout<<"Enter a line:";
    getline(cin,line);
    cout<<"You entered: "<<line<<endl;

    cout<<"state of cin after input: ";

    if (cin.good())
        cout<<"good\n";
    if (cin.bad())
        cout<<"bad\n";
    if (cin.fail())
        cout<<"fail\n";
    if (cin.eof())
        cout<<"end of file\n";
    return 0;
}
````

In case of characters array, the syntax is bellow:

````C++
cin.getline(array,max,sep)
````

where max represents the maximum number of characters to get, array the chars array, sep an optional parameter which is the seperator.

### Example: getline in characters array

````C++
#include<iostream>
#define N 15
using namespace std;

int main()
{
    char line[N] ;
    cout<<"Enter a line of "<<N-1<<" chars: ";
    cin.getline(line,N,'\n');
    cout<<"You entered: "<<line<<endl;

    cout<<"state of cin after input: ";

    if (cin.good())
        cout<<"good\n";
    if (cin.bad())
        cout<<"bad\n";
    if (cin.fail())
        cout<<"fail\n";
    if (cin.eof())
        cout<<"end of file\n";

    cout<<"Last char"<<line[N-1];
    if(line[N-1]=='\0')
        cout<<"Of course";
    return 0;
}
````

cin can also be used to get a single character. We use in that case the ollowing syntax:

````C++
cin.get(ch)
````

where ch represents the character to get the input in.

### Examples: read a character

````C++

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin.get(ch);
    cout<<"You entered: "<<ch<<endl;
    cout<<"state of cin after input: ";

    if (cin.good())
        cout<<"good\n";
    if (cin.bad())
        cout<<"bad\n";
    if (cin.fail())
        cout<<"fail\n";
    if (cin.eof())
        cout<<"end of file\n";
    return 0;
}
````

## Inputs and buffer

In C++, a buffer is a temporary storage area that holds data temporarily. Input buffering refers to the process of storing input data in a buffer before it is processed. This can be useful when reading input from a slow device, such as a keyboard or a network connection.

### Introductive examples

## Resume
