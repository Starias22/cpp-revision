#include<fstream>
#include<iostream>

using namespace std;
int main()
{
    //in,out,trunc,app
//6opnemodes
     /*
       read-> ios::in
       append->ios::app
       write->ios::
       truncate->ios::trun
       no replace->
       no create->

     */
     //open the file if exists, else create it and open
    ifstream file("file.txt",ios::in);
    if(file)// if success
{
    cout<<"File open successfull\n";
//uncomment the next lines to see
//no error but nothing will be written in the file
    /*file<<"This line ir file";
    file<<"This line is inside our file"<<endl;
    file<<4+6;*/

    string word;
    int n;
    file>>word;
    cout<<"first word:"<<word<<endl;
    file>>word;
    cout<<"second word:"<<word<<endl;
    string line;
    getline(file,line);
    cout<<"line:"<<line<<endl;
    char tab[30];
    file.getline(tab,31);
    cout<<"tab:"<<tab<<endl;
    file>>n;
    file.get(); //consume\n
    cout<<"n="<<n<<endl;
    char chr;
    file.get(chr);

    cout<<"chr:"<<chr<<endl;

    file.close();
}
    else
        cout<<"Failed\n";




    return 0;
}