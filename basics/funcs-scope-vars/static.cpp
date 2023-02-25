#include<iostream>
using namespace std;
void stat_test(){
    /*The next line will be executed
    only one: during the first
    to this function*/
    static int count=0;//or int static
    count++;
    cout<<"Calling number "<<count<<endl;

}
int main()
{
    for(int i=0;i<<10;i++)
        stat_test();
    return 0;
}