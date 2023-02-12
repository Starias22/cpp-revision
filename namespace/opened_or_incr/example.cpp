#include<iostream>
using namespace std;

namespace my_nm{
  int x=20;
}/* i can add a semcolo ;*/

namespace my_nm{
    int y=-20;

}

int main()
{
    using namespace my_nm;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    return 0;
}