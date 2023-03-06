#include<fstream>
#include<iostream>

using namespace std;

int main()
{
     //open the file if and only if it exists
    ofstream file("input.txt");

    if(file)// if success
{
    cout<<"File open successfull\n";
//close the file
    file.close();

}
    else
        cout<<"Failed\n";
    return 0;
}