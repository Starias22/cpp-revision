#include<iostream>

using namespace std;
int n;
void display(double *tab)
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
    }while(n<4);
    double *tab;
    //allocate memory
    tab=(double*) malloc(n*sizeof(double));//or 8
    cout<<"tab: "<<tab<<endl;
    //use memory
    for(int i=0;i<n;i++)
    {
        cout<<"Item "<<i+1<<" : ";
        cin>>*(tab+i);
    }
    display(tab);
    //complete 3 cases of memory
    n+=3;
    tab=(double*)realloc(tab,n);
    display(tab);
    tab[n-3]=10.88;
    tab[n-2]=11.;
    tab[n-1]=-12.8;
    display(tab);

    //free memory
    free(tab);
    return 0;
}