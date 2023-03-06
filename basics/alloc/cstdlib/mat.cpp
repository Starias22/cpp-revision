#include<iostream>

using namespace std;
int r,c;
void display(int **tab)
{
    for(int i=0;i<r;i++)
{
        for(int j=0;j<c;j++)
        {
        cout<<*(*(tab+i)+j)<<'\t';
        }
        cout<<endl;


}
    cout<<endl;
}

int main()
{
    do{
    cout<<"Enter the number of row and column(in that order): ";
    cin>>r>>c;
    }while(r<=0||c<=0);
    int **tab;
    //allocate memory for the whole matrix
    tab=(int**) malloc(r*sizeof(int*));//or 4
    cout<<"tab: "<<tab<<endl;

    //for each row allocate columns

    for(int i=0;i<r;i++)
    {
        *(tab+i)=(int*)malloc(c*sizeof(int));
    }
        display(tab);

    //use memory
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        cout<<"Row "<<i+1<<" column "<<j+1<<": ";
        cin>>tab[i][j];
        }
    }
    display(tab);


    //free memory

    //free rows first

    for(int i=0;i<r;i++)
    free(*(tab+i));
    //free the whole marix
    free(tab);
    return 0;
}