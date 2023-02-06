#include<fstream>
#include<iostream>

using namespace std;

int main()
{   //open the file if exists, else create it and open
    ofstream file("file.txt");
    if(file)// if success
{
    cout<<"File open successfull\n";
    file<<"This line is inside our file";
    file<<"This line is inside our file"<<endl;
    file<<4+6;

    file.close();
}
    else
        cout<<"Failed\n";




    return 0;
}