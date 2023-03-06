#include <iostream>
#include <fstream>
#define N 3
#define STR 20


using namespace std;

struct player{
    int num;
    //string name;
    char name[STR];
    int score;
    bool is_young;

};

int main()
{

    ifstream file("player",ios::binary);
    if(!file.is_open())
    {
        cout<<"The file is not opened!\n";
        return 1 ;

    }

    cout<<"The file is opened!\n";
    //an array of N players
        player tab[N];

        for(int j=0;j<N;j++)
            file.read((char *)(tab+j),sizeof(player));

        file.close();

        if(!file.good())
        {
            cout<<"An error occured while reading from the file\n";
            return 2;
        }


        cout<<"Contents are readen successsfully from the file\n";
        //cout<<end(tab)-begin(tab)<<endl;
        cout<<boolalpha;
        for(int i=0;i<N;i++)
        {
            cout<<"Num of the player: "<<(tab+i)->num<<endl;
            cout<<"Name: "<<(tab+i)->name<<endl;
            cout<<"Score: "<<(tab+i)->score<<endl;
            cout<<"Is young?: "<<(tab+i)->is_young<<endl<<endl;

    }

        return 0 ;


    return 0;

}