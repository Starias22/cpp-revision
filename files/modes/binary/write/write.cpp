#include <iostream>
#include <fstream>
#include <cstring>
#define STR 20
#define N 3

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

    ofstream file("player",ios::binary);
    if(!file.is_open())
    {
        cout<<"The file is not opened!\n";
        return 1 ;

    }

    cout<<"The file is opened!\n";
    //an array of N players
        player tab[N];
        tab->num=1;
        strcpy(tab->name,"Roland");
        //tab->name="Roland";
        tab->score=20;
        tab->is_young=true;

        (tab+1)->num=2;
        strcpy((tab+1)->name,"Emmanuel");
        //(tab+1)->name="Emmanuel";
        (tab+1)->score=28;
        (tab+1)->is_young=true;


        (tab+2)->num=3;
        strcpy((tab+2)->name,"Mathias");
        //(tab+2)->name="Mathias";
        (tab+2)->score=13;
        (tab+2)->is_young=false;


        for(int i=0;i<N;i++)
        file.write((char *)(tab+i),sizeof(player));
        if(file.good())
            cout<<"Contents are added successsfully to the file\n";
        else
            cout<<"An error occured while writing to the file\n";


        file.close();
        return 0 ;


    return 0;
}
