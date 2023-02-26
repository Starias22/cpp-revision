#include<fstream>
#include<iostream>
using namespace std;

int main()
{   //append writing mode
    //the file can exist or not
    /*in case of existence all the eventual new content
     is added at the end of the file*/
    ofstream file("apppend.txt",ios::app);
    ifstream fic("app.txt",ios::app);

    if(file)
    {
        cout<<"The file is opened!\n";
        string app="Will be added to the end of the file";
        file<<app;
        file.close();
        if(fic){
                cout<<"The  second file is opened!\n";
                fic.close();

        }

    }
    else
        cout<<"The file isn't opened!\n";
    return 0;
}