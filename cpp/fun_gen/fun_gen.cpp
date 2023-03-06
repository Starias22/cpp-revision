#include<iostream>

using namespace std;

template<typename type>
type sum(type x,type y)
{

    return x+y;
}

int main()
{

    cout<<" sum(14,20)= "<<sum(14,20)<<endl;
    cout<<" sum(-15.0,22.13)= "<<sum(-15.0,22.13)<<endl;



   
    return 0;
}