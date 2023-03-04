#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    cout<<"You entered: "<<n<<endl;
    if (cin.goodbit)
    return 0;
}