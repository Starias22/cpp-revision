#include<iostream>
using namespace std;
//a glob variable
int g=5;
namespace nmsp
{
    int g=25;
    int k=15;

}
int main()
{
    //using namespace nmsp;
    using   nmsp::g; //the glob g is masked



    cout<<"g="<<g<<endl;
    cout<<"the glob g="<<g<<endl;

    return 0;
}