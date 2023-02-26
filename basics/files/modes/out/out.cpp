#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream file("file.txt",ios::out);
    if(file)// if success
{
    cout<<"File open successfull\n";
}
    return 0;
}

