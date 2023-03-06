#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //ouverture en mode lecture.
    ifstream file{"input_file.txt"};
    //file>>42;
    int number;
    string sentence;
    file>>number;
    cout<<"L'entier enregistré dans le fichier est: "<<number;
    /*file>>number;
     cout<<"L\n'entier enregistré dans le fichier est: "<<number;*/
     //file>>sentence;
     //cout<<"\nLa phrase enregistrée dans le fichier est: "<<sentence;

     getline(file,sentence);
     cout<<"\nLa phrase enregistrée dans le fichier est: "<<sentence;

    return 0;
}