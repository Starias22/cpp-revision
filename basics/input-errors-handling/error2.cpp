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