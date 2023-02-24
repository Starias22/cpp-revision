#include<iostream>
using namespace std;
int main()
{

  //read a line:solution
//get a line:stop after reading \n
    cout<<"Enter a line of words\n";
    string line;
    getline(cin,line);
    cout<<"You entered: "<<line<<endl;

    cout<<"Enter a line: Stop with 7: ";
    getline(cin,line,'7');//stop after reading 7(the read line can contain `n)
    cout<<"You entered: "<<line<<endl;
    //brief about buffer and input error handling
    //enter a char after entering 7 for the input above
    string str;
    cin>>str;
    cout<<str;
    // getchar,cin.get(c),cin.get(),cin.getline(,etc) in the next chapters





    return 0;
}

