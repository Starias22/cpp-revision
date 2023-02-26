#include<iostream>
#define N 10
using namespace std;
int max(int * tab){
    int mx;
    mx=*tab;
    for(int i=0;i<N;i++)
        if(*(tab+i)>mx)
        mx=*(tab+i);

    return mx;
}

int min(int * tab){
    int mn;
    mn=*tab;
    for(int i=0;i<N;i++)
        if(*(tab+i)<mn)
        mn=*(tab+i);

    return mn;
}
void display(int *tab){
    for (int i = 0; i < N; i++)

        cout<<*(tab+i)<<"\t";

    cout<<endl;

}
void get_array(int *tab){
    for (int i = 0; i < N; i++)
    {

        cout<<"Element "<<i+1<<": ";
        cin>>*(tab+i);
    }

}

int main()
{
    int *tab;
get_array(tab);
cout<<"The min is "<<min(tab)<<endl;
cout<<"The max is "<<max(tab)<<endl;


    return 0;
}