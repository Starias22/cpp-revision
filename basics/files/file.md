# Files

C++ provides a library to works with filrs.Its called fstream and means file stream.

Indclude it as follow:

````C++
#include<fstream>
````

Similar to memory allocation, the steps to work with a file using C++ are:

* open the file
* works with the file:
* close the file

We can read a file or write to a file.

Reading is input operation and writing is output operation.

Input operations are performed with ifstream(input file stream) object and output operations are performed using ofstream(output file stream) object.

fstream object is used to perform both input and output operations on a same file.

Both ofstream ifstream and fstream belong to the std namespace.

## Getting started

### Open and close file

To declare ofstream or ifstream or fstream object and then  open a file:

````C++
ifstream file("path/to/file")//input
ifstream file("path/to/file")//output
fstream file("path/to/file")//both
````

path/to/file represents the path to the file to read or write to.

file contains a stream to the file to read or write to in case of success.

By default:

* In case of reading(ifstream), the file should exist
* In case of writing(ifstream), the file is created if not exists and overwritten if exists.
* In case of both reading and writing (fstream), the file may exists or not, it's (re)created.

We use function close to close a file:

````C++
file.close();//file is the stream to the opened file
````

### Check open

The stream is not null if the file is successfully opened.

````C++
ofstream file("filename")
if(file){
    cout<<"Success\n";
}
````

We can also use function ````is_open```` to check if the file is open.

````C++
ifstream file("filename")
if(file.is_open()){
    cout<<"Success\n";
}
````

### Examples: Open, check and close

#### Open a file for writing

````C++
#include<fstream>
#include<iostream>

using namespace std;

int main()
{  //ofstream ifstream fstream
     //open the file if exists, else create it and open
    ofstream file("file.txt");

    if(file)// if success
{
    cout<<"File open successfull\n";
    cout<<boolalpha<<file.is_open()<<endl;
    file.close();//close the file
    cout<<boolalpha<<file.is_open()<<endl;

}
    else
        cout<<"Failed\n";
    return 0;
}
````

For execution:

* Firstly execute without the file 'file.txt' existing in the current working directory. Then it will be created
* Secondly, execute with the file 'file.txt' existing and having a cntent, for example:

````txt
This is the content of our file.
````

After execution, the file will be empty, because recreated.

#### Open a file for reading

````C++
#include<fstream>
#include<iostream>

using namespace std;

int main()
{
     //open the file if and only if it exists
    ofstream file("input.txt");

    if(file)// if success
{
    cout<<"File open successfull\n";
//close the file
    file.close();

}
    else
        cout<<"Failed\n";
    return 0;
}
````

For execution:

* Firstly execute without the file 'input.txt' existing in the current working directory. Then it will fail
* Secondly, execute with the file 'input.txt' existing and having a content, for example:

````txt
This is the content of our file.
````

THen, after execution, the file will be empty, because recreated.

## Reding and writing

* In case of :

  * reading from the console, cin represents the input stream.
  * writing to the console, cout represents the output stream.

* Reading a file and writing to a file work exactly like cin(which writes to the console) and cout (which read from the console).

* We just have to replace cin by our input file stream object or cout by our output file stream object to perform input or output operations on files.

* Then we can use:

  * output stream operator<<  to write to a file.
  * input stream operator >>  or functions like getline, get, to read a file.
  * error handling functions such as fail, good, and flages like goobit, failbit, to handle error related to files reading(input).

### Examples

#### Example1: write to a file

````C++
#include<fstream>
#include<iostream>

using namespace std;

int main()
{   //open and recreate the file if exists, else create it and open
    ofstream file("file.txt");
    if(file)// if success
{
    cout<<"File open successfull\n";
    file<<"This line is inside our file";
    file<<"This line is inside our file\n";

    file<<"This line is inside our file"<<endl;
    file<<-9;
    file<<89.5;
    file<<4+6;
    int age=20;
    file<<"You're "<<age<<" years old\n";
    file<<4<<8<<endl<<9<<endl;
    file.close();
}
    else
        cout<<"Failed\n";
    return 0;
}
````

#### Examples2: Read a file

#### Examples3: Both read a file and write to a file

## File open modes

There are few modes to open a file:

* output mode with ios::out

That is the default mode for ofstream.

The file is created if it doesn't exist and recreated if it exists.

Then we can read from the file.

* input mode with ios::in

That's the default mode for ifstream.

The file must exists.

Then it will we written to.

* append mode with ios::append

In that case, content is added at the end of the file in case of writing to the file.

* truncate mode with ios::trunc

  The file can exist or not. In case of existence, the eventual content of the file is firstly erased.

* ate mode with ios:: ate

That mode prevents recreating the file. It keeps the file in it's original state.

* binary mode withios::binary

The file is open in binary mode

These modes can be combined used the bitwise operator |.

### Examples: files open mode

#### out mode

````C++
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    fstream file("file.txt",ios::out);
    if(file)// if success
{
    cout<<"File open successfull\n";
    file.close();
}
    return 0;
}
````

#### trunc mode

````C++
#include<fstream>
#include<iostream>

using namespace std;
int main()
{   //trunc mode
    //the file can exist or not
    /*in case of existence all the eventual content is erased*/

    ofstream ost("trunc.txt",ios::trunc);
    if(ost)
    {
        cout<<"opened!"<<endl;
        //do what to do
        file.close();
    }
    else
        cout<<"Not opened\n";
    return 0;
}
````

File open mode can be combined.

### Example: combine file open mode

## Moving

While reading or writing to a file, a kind of cursor moves in the file.

For example, at starting:

* for out and ate mode, the cursor is  set to the beginning of the file.
* for append mode the cursor, is set to the end of the file.

0 represents the beginning position.

The current position of the cursoor can be checked used the functions teeg and tellp.

These functions return the current position of the cursor:

* tellg is used for input streams(ifstream and fstream objects)
* tellp is used for output streams(ofstream and fstream objects)

We can also move the cursor to a position. It's done using the functions seekg and seekp:

* seekg is used for input streams(ifstream and fstream objects)
* seekp is used for output streams(ofstream and fstream objects)

Their functions can take two arguments:

* the first one is required. It's the number of characters to move the curor
* the second is the position to move the cursor from. It's either ios::cur (for current position) or ios::beg(for beginning) or ios::end(for end
)

### Examples: Cursor moving

````C++
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  //seekg, seekg,tellp, tellg,cur,end,beg
    ifstream file("file"); //out mode
    if(!file.is_open())
    {
        cout<<"The file is not opened!\n";
        return 1 ;

    }
    cout<<"The file is opened!\n";

    cout<<"Current position of the cursor: "<<file.tellg()<<endl;
    string word;
    file>>word;
    cout<<"First word:"<<word<<endl;

    cout<<"Position of the cursor : "<<file.tellg()<<endl;

    //move the cursor 10 chars forword from the beginning
    file.seekg(10,ios::beg);
    file>>word;
    cout<<"forward word:"<<word<<endl;
    file.seekg(5,ios::cur);
    file>>word;
    cout<<"backward word:"<<word<<endl;
    file.seekg(ios::end)
    if(file.tellg()==ios::end)
        cout<<"End of file reached\n";
    else
      cout<<"End of file not reached\n";
    file.close();
    }
````

## Binary mode

Until now we learned how to manipulate simple text file. We can:

* read  simple data types from files
* write simple data values in files

Binary mode can be used in C++ to read or write to object files also called binary files.

By using binary mode we can read or write complex data with complex types, like structures and objects with files.

Binary mode is used like iso::binary with ifstream, ostream and ifstream objects.

Objects are read and written as char arrays.

### Object writing to binary files

````C++
std::ostream &std::ostream::write(const char *s, std::streamsize n)
Character string insertion.
````

That functions writes an object(as a char array) to a file and is used with ofstream ans fstream.

Parameters :
s : The array to insert.
n : Maximum number of characters to insert.

#### Example: write to binary file

````C++
#include <iostream>
#include <fstream>
#include <cstring>
#define STR 20
#define N 3

using namespace std;
//structure of player
struct player{
    int num;
    char name[STR];
    int score;
    bool is_young;

};

int main()
{

    ofstream file("player",ios::binary);
    if(!file.is_open())
    {
        cout<<"The file is not opened!\n";
        return 1 ;

    }

    cout<<"The file is opened!\n";
    //an array of N players
        player tab[N];
        tab->num=1;
        strcpy(tab->name,"Roland");
        //tab->name="Roland";
        tab->score=20;
        tab->is_young=true;

        (tab+1)->num=2;
        strcpy((tab+1)->name,"Emmanuel");
        //(tab+1)->name="Emmanuel";
        (tab+1)->score=28;
        (tab+1)->is_young=true;

        (tab+2)->num=3;
        strcpy((tab+2)->name,"Mathias");
        //(tab+2)->name="Mathias";
        (tab+2)->score=13;
        (tab+2)->is_young=false;

        for(int i=0;i<N;i++)
        file.write((char *)(tab+i),sizeof(player));
        if(file.good())
            cout<<"Contents are added successsfully to the file\n";
        else
            cout<<"An error occured while writing to the file\n";

        file.close();
        return 0 ;


    return 0;
}

````

### Objects reading from binary files

````C++
std::istream &std::istream::read(char *s, std::streamsize n)
````

That functions read(extract) object froma file(as a char array) is used with ifstream and fstream.

Parameters:

s: A character array.
n: Maximum number of characters to store.

#### Example: Read object from a binary file

We consider our file named player obtained previously after writing.

````C++
#include <iostream>
#include <fstream>
#define N 3
#define STR 20

using namespace std;

struct player{
    int num;
    //string name;
    char name[STR];
    int score;
    bool is_young;
};

int main()
{

    ifstream file("player",ios::binary);
    if(!file.is_open())
    {
        cout<<"The file is not opened!\n";
        return 1 ;

    }

    cout<<"The file is opened!\n";
    //an array of N players
        player tab[N];

        for(int j=0;j<N;j++)
            file.read((char *)(tab+j),sizeof(player));

        file.close();

        if(!file.good())
        {
            cout<<"An error occured while reading from the file\n";
            return 2;
        }

        cout<<"Contents are readen successsfully from the file\n";
        //cout<<end(tab)-begin(tab)<<endl;
        cout<<boolalpha;
        for(int i=0;i<N;i++)
        {
            cout<<"Num of the player: "<<(tab+i)->num<<endl;
            cout<<"Name: "<<(tab+i)->name<<endl;
            cout<<"Score: "<<(tab+i)->score<<endl;
            cout<<"Is young?: "<<(tab+i)->is_young<<endl<<endl;

    }

        return 0 ;
    return 0;

}
````

## Resume

Overall, both simple text file canbe read and writen to, using input and output stream objects provided by C++ programming language.
