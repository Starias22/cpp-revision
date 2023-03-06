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