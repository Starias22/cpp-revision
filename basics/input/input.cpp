#include<iostream>
using namespace std;

int main()
{
    int age=20;
    cout<<"age: "<<age<<endl;
    cin>>age;
    cout<<"You entered: "<<age<<endl;
    cout<<"What's your tail?\n";
    float tail;
    cin>>tail;
    cout<<"Your tail is "<<tail<<endl;
    //
    int n;
    do{
    cout<<"Enter a positive integer: ";
    cin>>n;
    }while(n<0);
    cout<<"You entered: "<<n<<endl;
    return 0;
}