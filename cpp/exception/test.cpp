#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
vector <string> read_file(const string filename)
{

    vector <string> lines;
   //{"file.txt"};
   string line;

    ifstream file_stream{filename};

    if(file_stream)//si le fichier est ouvert

    {
        while(getline(file_stream,line))
        lines.push_back(line);



    }


    else {

        //cout<<"Impossible d'ouvrir le fichier"<<endl;

        throw runtime_error("Impossible d'ouvrir le fichier");
        //cout<<"Impossible d'ouvrir le fichier"<<endl;

    }
  return lines;
}



int main()

{
    
    auto lines=read_file("file.txt");

cout<<"Voici le contenu du fichier:\n";
    for(auto elt:lines )
    cout<<elt<<endl;
    

    return 0;
}