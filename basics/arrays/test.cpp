#include<iostream>
using namespace std;
#define N 10
void display(int tab[N]){
    for(int i=0;i<N;i++)
        cout<<tab[i]<<'\t';
    cout<<endl;
}

bool all_evens(int *tab,int n){
    for(int i=0;i<n;i++)
        if(*(tab+i)%2)//tab[i]
            return false;
    return true;
}
bool all_odds(int tab [],int n){

    for(int i=0;i<n;i++)
        if(*(tab+i)%2==0)//tab[i]
            return false;
    return true;
}
void increments_all(int  tab[]){

    for(int i=0;i<N;i++)
        (*(tab+i))++;
}

int main()
{
    int tab[N]{4,5,6,7,2,9,10,11,13,-11};
    display(tab);
    int *ptr=tab+1;//points on tab[1]
    display(ptr);/*error may occur: acess from tab[1] to tab[10](out of bound) */
    ptr--;//points on tab[0]
    display(ptr);//right

    cout<<"tab all even? "<<all_evens(ptr,N)<<endl;

    cout<<"tab all odd? "<<all_odds(tab,N)<<endl;
    increments_all(tab);
    display(tab);
    return 0;
}