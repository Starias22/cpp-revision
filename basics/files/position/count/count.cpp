#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream file("count.txt"); //in mode
    if(!file.is_open())
    {
        cout<<"The file is not opened!\n";
        return 1 ;

    }
    cout<<"The file is opened!\n";
    file.seekg(0,ios::end);
    int count=file.tellg();
    cout<<"The file contains "<<count<<" characters\n";
    file.close();
    return 0;
}