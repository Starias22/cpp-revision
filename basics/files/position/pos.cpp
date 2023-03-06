#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  //seekg, seekg,tellp, tellg,cur,end,beg
    ifstream file("file"); //out mode
    if(!file.is_open())
    {
        cout<<"The file is not opened!\n";
        return 1 ;

    }
    cout<<"The file is opened!\n";

    cout<<"Current position of the cursor: "<<file.tellg()<<endl;
    string word;
    file>>word;
    cout<<"First word:"<<word<<endl;

    cout<<"Position of the cursor : "<<file.tellg()<<endl;

    //move the cursor 10 chars forword from the beginning
    file.seekg(10,ios::beg);
    file>>word;
    cout<<"forward word:"<<word<<endl;
    file.seekg(5,ios::cur);
    file>>word;
    cout<<"backward word:"<<word<<endl;

    if(file.tellg()==ios::end)
        cout<<"End of file reached\n";
    else
      cout<<"End of file not reached\n";
    file.close();
    }