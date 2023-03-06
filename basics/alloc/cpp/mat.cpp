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
   int r,c;
    do{
    cout<<"Enter the number of row and column(in that order): ";
    cin>>r>>c;
    }while(r<=0||c<=0);
int **tab;
    //allocate memory for the whole matrix
   //auto  tab=new int[r][4];
    for(int i=0;i<r;i++)
        tab[i]=new int[c];

    display(tab);

    for(int i=0;i<r;i++)
    delete [] tab[i];

    //delete [] tab;
    return 0;
}