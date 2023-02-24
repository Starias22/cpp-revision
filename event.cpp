#include <iostream>
#include <map>
#include <vector>
using namespace std;
typedef map <int,vector <string>> events;

void ajoute_evenement(events evs, int date, string name)
{
    auto fn =evs.find(date);
    vector<string> e;
    if(fn==evs.end())
    {
        vector<string> e;
        e[0] = name;
        evs[date] = e;

    }
    else
    {
        (fn->second).push_back(name);
    }
}

void display(events evs)
{
    cout <<"Dates with matchings events \n";
    for(auto it = evs.cbegin(); it != evs.end(); it++)
    {
        cout<< it->first<<":\n";
        for(string ev : it->second)
            cout<<"\t\t"<< ev<<endl;
    }
}



int main(){

    return 0;
}