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
    //allocate memory
    tab=(int*) calloc(n,sizeof(int));//or 4
    cout<<"tab: "<<tab<<endl;
    display(tab);

    //free memory
    free(tab);
    return 0;
}