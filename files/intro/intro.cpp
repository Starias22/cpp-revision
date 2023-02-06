#include<fstream>
#include<iostream>

using namespace std;

int main()
{   //open the file if exists, else create it and open
    ofstream file("file.txt");

    if(file)// if success
{
    cout<<"File open successfull\n";
    cout<<boolalpha<<file.is_open()<<endl;
    file.close();
    cout<<boolalpha<<file.is_open()<<endl;

}
    else
        cout<<"Failed\n";




    return 0;
}