#include<iostream>
#include<fstream>

using namespace std;

int main()
{
ofstream fichier ("sortie.txt");
// Notez que je ne vide pas le tampon.
fichier << "Hey, salut toi !\n";
fichier << 42 << " " << 2.718;
// Une entrée pour vous laisser le temps d'ouvrir le fichier sortie.txt.
string phrase { "" };
cout << "Tape une phrase quelconque : ";
cin >> phrase;
// Je vide explicitement le tampon. Maintenant les données sont écrites.
fichier <<flush;

//modificateurs de flux : boolalpha, noboolalpha, showpos

cout<<boolalpha <<true<<endl;
cout<<noboolalpha <<false<<endl;

cout<<showpos <<58<<endl;
cout<<showpos <<+458<<endl;
cout<<noshowpos <<22<<endl;

    return 0;
}