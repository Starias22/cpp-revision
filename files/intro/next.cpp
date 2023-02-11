#include<fstream>
#include<iostream>
using namespace std;


int main()
{
    ifstream stm("new_file.txt");
    /*as we wanna read the file it should exist
    and won't be created*/
    //so let's create the file
    //and add a content to
    if(stm){
    cout<<"The file is opened\n";
    string str;
    stm>>str;
    cout<<"str:"<<str<<endl;
    //remark:the read stopat the .. of space
    stm>>str;
    cout<<"str:"<<str<<endl;

    stm>>str;
    cout<<"str:"<<str<<endl;

    stm>>str;
    cout<<"str:"<<str<<endl;

    stm>>str;
    cout<<"str:"<<str<<endl;

    stm>>str;
    cout<<"str:"<<str<<endl;

    stm>>str;
    cout<<"str:"<<str<<endl;

    stm>>str;
    cout<<"str:"<<str<<endl;

    stm>>str;
    cout<<"str:"<<str<<endl;
        //remark:the read sto pat the .. of line

     //words are readen withthat method
     //notion of cursor

    stm.close();
    }
    else
    cout<<"The file is not opened\n";

   return 0;
}