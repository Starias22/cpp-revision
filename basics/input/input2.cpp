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
    /*try to enter a line with space :won't work
    cin read just a word: it stop after space or \n*/
    return 0;
}
