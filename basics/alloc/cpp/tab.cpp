#include<iostream>
using namespace std;
int n;
void display(int *tab)
{
    for(int i=0;i<n;i++)
        cout<<*(tab+i)<<'\t';
    cout<<endl;
}

int main()
{

    do{
    cout<<"Enter the size of the array: ";
    cin>>n;
    }while(n<=0);
    int *tab;
    tab=new int[n];
    display(tab);
    cout<<"tab: "<<tab<<endl;
    //use memory
    for(int i=0;i<n;i++)
    {
        cout<<"Item "<<i+1<<" : ";
        cin>>*(tab+i);
    }
    display(tab);
    delete[] tab;
    return 0;
}