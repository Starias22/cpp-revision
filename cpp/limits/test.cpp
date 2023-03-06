#include<iostream>
#include<limits>

using namespace std;
int main()
{

    cout<<"Le plus grand int en C++: "<<numeric_limits<int>::max()<<endl;
    cout<<"Le plus petit int en C++: "<<numeric_limits<int>::min()<<endl;

    cout<<"Le plus grand double en C++: "<<numeric_limits<double>::max()<<endl;
    cout<<"Le plus petit double en C++: "<<numeric_limits<double>::min()<<endl;

    
    cout<<"Le plus grand float en C++: "<<numeric_limits<float>::max()<<endl;
    cout<<"Le plus petit float en C++: "<<numeric_limits<float>::min()<<endl;

    cout<<"Le plus grand long en C++: "<<numeric_limits<long>::max()<<endl;
    cout<<"Le plus petit long en C++: "<<numeric_limits<long>::min()<<endl;

    cout<<"Le plus grand long long en C++: "<<numeric_limits<long long>::max()<<endl;
    cout<<"Le plus petit long long en C++: "<<numeric_limits< long>::min()<<endl;

    cout<<"Le plus grand short en C++: "<<numeric_limits<short>::max()<<endl;
    cout<<"Le plus petit short en C++: "<<numeric_limits<short>::min()<<endl;


    cout<<"Le plus grand char en C++: "<<numeric_limits<char>::max()<<endl;
    cout<<"Le plus petit char en C++: "<<numeric_limits<char>::min()<<endl;

    

    return 0;
}