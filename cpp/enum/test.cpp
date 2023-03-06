#include<iostream>
using namespace std;
int main()
{

enum  Day{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Satursday,
    Sunday
};
cout<<"Value of Monday: "<<Day::Monday;

int index;
cout<<"Donnez une indice entre 0 et 6: ";
cin>>index;
switch(index)
{
    case Day::Monday:/*;*/
        cout<<"Lundi\n";
        break;
    case Day::Tuesday:
        cout<<"Mardi\n";
        break;
    case Day::Wednesday:
        cout<<"Mercredi\n";
        break;
    case Day::Thursday:
        cout<<"Jeudi\n";
        break;
    case Day::Friday:
        cout<<"Vendredi\n";
        break;
    case Day::Satursday:
        cout<<"Samedi\n";
        break;
    case Day::Sunday:
        cout<<"Dimanche\n";
        break;
    default:
        cout<<"Jour incorrect\n";
        break;


}




return 0;



}