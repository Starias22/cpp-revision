
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