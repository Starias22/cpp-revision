# Basic data types in C++

## Overview

 we will learn the available data types  in C++ programming language.

## Built-in data types in C++

The C++ programming language proposes saveral basic data types. The main are mentioned in the table below.
|Type|Meaning|Examples| Size(in bytes)|
|----|-------|--------|-|
|````int````|integers|1, 10589, -20|4|
|````short````|short integers|2, 9, 569|2|
|````char````|single characters|'A', 'a', '%', '9'|1|
|````bool````|boolean values|true, false|1|
|````float````|floating numbers|3, 8.8, 9.0, -8.558|4|
|````long````|larger integers|20,156987456,-963214|4 or 8|
|````long long````|larger bigger floating numbers with more precision|20,156987456,-963214|8|
|````double````|floating numbers with more precision|15, 20.99,-58.58967|8|
|````long double````|even large integers|20,15.6987456,-96.3214|10 or 12|
|````void````|absence of value|||

## Examples

````C++
#include<iostream>
using namespace std;

int main()
{   //print 2
    cout<<2<<endl;
    //a floating number
    cout<<1.5<<endl;
    cout<<"int examples: "<<-56<<" "<<
    15697<<" "<<-44596712<<endl;
    cout<<"A long integer: "<<9654965878
    <<endl;
    cout<<"A double: "<<25.89632<<endl;
    /*Remark that by default, c++ uses
    floating numbers as double*/

    //booleans
    cout<<"true: "<<true<<endl;
    cout<<"false: "<<false<<endl;
    cout<<"Some characters: "<<'A'
    <<" "<<'z'<<" "
    <<'8'<<" "<<'|'<<endl;

    return 0;
}
````

## Resume

 C++ programming languages has several built-in types that allow to use integers,floating numbers, booleans, characters.
