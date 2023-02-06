#include<iostream>
#define N 20
using namespace std;
typedef struct j{

char firstname[N],
lastname[N];
int score;

} player;

player *allocate_players(int size){
    return new player[size];

}
void initialize(player *p,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Player "<<i+1<<endl;
        cout<<"Lastname: ";
        cin.getline(p[i].lastname,N+1);
        cout<<"Firstname: ";
        cin.getline(p[i].firstname,N+1);
        cout<<"Socre: ";
        cin>>(p+i)->score;
        // consume the \n character
        getchar();

    }
}
void display(player *p,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Player "<<i+1<<endl;
        cout<<"Lastname: "<<(*(p+i)).lastname<<endl;
        cout<<"Firstname: "<<(p+i)->firstname<<endl;
        cout<<"Socre: "<<(p+i)->score<<endl;
    }

}

void display_winner(player *p,int size)
{
player winner;
    winner=*p;
    for(int i=0;i<size;i++)
    {
        if(winner.score<(p+i)->score)
            winner=*(p+i);


    }
    cout<<"*****The winner*****"<<endl;
    cout<<"Lastname: "<<winner.lastname<<endl;
    cout<<"Firstname: "<<winner.firstname<<endl;
    cout<<"Socre: "<<winner.score<<endl;

}

int main()
{
    int size;

    cout<<"Enter the number of players: ";
    cin>>size;
    getchar();
    player *tab=allocate_players(size);
    initialize(tab,size);
    display(tab,size);
    display_winner(tab,size);

    delete[] tab;

    return 0;
}