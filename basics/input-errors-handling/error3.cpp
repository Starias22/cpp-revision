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

    char ch;
    cin.get(ch);

    cout<<"ch: "<<ch;
    cin.get();
    return 0;
}