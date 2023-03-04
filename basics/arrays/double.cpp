#include<iostream>
using namespace std;
#define N 10

void display(float tab[N]){
    for(int i=0;i<N;i++)
        cout<<tab[i]<<'\t';
    cout<<endl;
}
float * double_tab(float *tab){
    float tab2[N]{};
    //display(tab);
    for(int i=0;i<N;i++)
        tab2[i]=2*(*(tab+i));
    //display(tab);

    float *ptr=tab2;
    return ptr;
}
int main()
{
    float tab[N]{4,5,6,7,2,9,10,11,13,-11};
    display(tab);
    auto x=double_tab(tab);
    display(tab);
    display(x);
    cout<<*x;
    return 0;
}