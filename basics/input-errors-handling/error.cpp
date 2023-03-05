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

        char str[15];


    return 0;
}