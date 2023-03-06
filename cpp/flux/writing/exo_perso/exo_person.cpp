#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string firstname,lastname;
    int age;
    ofstream stream("personne.txt");
    if(stream)
    {
    cout<<"Entrez votre nom\n";
    cin>>lastname;

    cout<<"Entrez votre prénom\n";
    cin>>firstname;

    cout<<"Entrez votre âge\n";
    cin>>age;

    stream<<"Vous vous appelez "<<firstname<<" "<<lastname<<" et vous avez "<<age<<" ans.";

    

    }
    


    return 0;
}