# Introduction to input in C++

## ````cin````

Similary to ````cout````(console output), ````cin````(console input) allows us to get data from the keyboard. ````cin```` is used with the input stream operator ````>>````
The syntax is as follow:

````x
cin>>y
````

where y is the identifier of the variable to get the input data in.

### Example 1: Getting integers and float from keyboard

````C++
#include<iostream>
using namespace std;

int main()
{
    int age=20;
    cout<<"age: "<<age<<endl;
    cin>>age;
    cout<<"You entered: "<<age<<endl;
    cout<<"What's your tail?\n";
    float tail;
    cin>>tail;
    cout<<"Your tail is "<<tail<<endl;
    //
    int n;
    do{
    cout<<"Enter a positive integer: ";
    cin>>n;
    }while(n<0);
    cout<<"You entered: "<<n<<endl;
    return 0;
}
````

### Example 2: Getting a string from keyboard

````C++
#include<iostream>
using namespace std;

int main()
{
    //get a string from keybord
    string name;
    do
    {
    cout<<"Enter your name:";
    cin>>name;
    }
    while(name.length()<=2);
    cout<<"Your name is "<<name<<endl;
    return 0;
}
````

Compile and run the code above, and as input name, enter :

* firstly a string that contains space(s).
* secondly a string containing one or several '\n' ie the validation character.

You'll remark that the reading stops before any space or ````\n````: ````cin```` read just at most a word: it stops in case of space or ````\n```` reading .

## ````getline````

We can get an input line from the keyword using ````getline````.

The syntax is below:

````x
getline(cin,line)
````

line represents the identifier of the string variable to store the entered string in;

### Examples

````C++
#include<iostream>
using namespace std;
int main()
{

  //read a line:solution
//get a line:stop after reading \n
    cout<<"Enter a line of words\n";
    string line;
    getline(cin,line);
    cout<<"You entered: "<<line<<endl;

    cout<<"Enter a line: Stop with 7: ";
    getline(cin,line,'7');//stop after reading 7(the read line can contain `n)
    cout<<"You entered: "<<line<<endl;
    //brief about buffer and input error handling
    //enter a char after entering 7 for the input above
    string str;
    cin>>str;
    cout<<str;
    return 0;
}
````

## Resume

We learned how to use ````cin```` with the input stream operator to read a word or a numerical value from the keyboard. We also learned how to use ````getline```` to read a line.

In the next lessons we will talk about how to handle errors that can occur while reading with ````cin```` or ````getline````.
