#include<iostream>
#define N 15
using namespace std;

int main()
{
    int age ;
    cout<<"Enter your age: ";
    cin>>age;
    if(!cin.good()){
    cout<<"Wrong input\n";
    return 0;
    }
    cout<<"You're "<<age<<" years old\n";

    float tail;
    cout<<"Enter your tail: ";
    cin>>tail;
    cout<<"Your tail is "<<tail<<"\n";

    string firstname;
    cout<<"Enter your firstname: ";
    cin>>firstname;
    cout<<"Your firstname is "<<firstname<<"\n";

    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    cout<<"You entered "<<n<<"\n";

    char tab[15];
    cout<<"Enter your lastname: ";
    cin>>tab;
    cout<<"Your firstname is "<<tab<<"\n";

    int num;
    /*cin.clear();
    cin.ignore();*/

    cout<<"Enter your phone number: ";
    cin>>num;
    cout<<"Your mumber: "<<num<<"\n";




    return 0;
}