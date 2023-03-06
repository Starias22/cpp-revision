#include<iostream>
using namespace std;

int main()
{

    const int tab[]={10,9,8,5,4};
    const int tab2[5]{};

    /*error tab3 is not initialized*/
    //const int tab3[5];

    for(auto i=0;i<5;i++)
    {
        cout<<"tab["<<i<<"]="<<tab[i]<<endl;
        cout<<"tab2["<<i<<"]="<<tab2[i]<<endl;

    }
  //tab[2]=8;
/*an only-readable pointer(const*)*/
    auto pt=tab;
    int * ptr=(int*)tab;
    *(ptr+3)=40;
    *ptr=45;
    cout<<tab[0]<<endl;

    cout<<tab[3]<<endl;


    return 0;

}