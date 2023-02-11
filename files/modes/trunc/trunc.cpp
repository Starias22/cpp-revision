#include<fstream>
#include<iostream>

using namespace std;
int main()
{   //trunc mode
    //the file can exist or not
    /*in case of existence all the eventual content is erased*/

    ofstream ost("trunc.txt",ios::trunc);
    if(ost)
    {
        cout<<"opened!"<<endl;
    }
    else
        cout<<"Not opened\n";
    return 0;
}