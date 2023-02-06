#include<iostream>
#define  N 10
#define R 3
#define C 4
using namespace std;
void display(int *tab){
    for (int i = 0; i < N; i++)

        cout<<*(tab+i)<<"\t";

    cout<<endl;

}
void display_odds(int tab[N]){
    for (int i = 0; i < N; i++)
        if(tab[i]%2!=0)
            cout<<*(tab+i)<<"\t";

    cout<<endl;

}
void display_evens(int tab[]){
    for (int i = 0; i < N; i++)
        if(tab[i]%2==0)
        cout<<*(tab+i)<<"\t";

    cout<<endl;

}

void display(int tab[R][C])
{
    int i, j ;
    for (i=0 ; i<R ; i++)
    {
        for (j=0 ; j<C; j++)
            cout<< tab[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;



}
void initialize(int tab[R][C])   // voidinitial (intt[][C]
{ int i, j ;
  for (i=0 ; i<R ; i++) for (j=0 ; j<C; j++)
   *(tab[i]+j )= i+j;


}
int main()
{
    int tab[10]{1,2};
    int tab2[] ={1,2,3,4,5,6,7,8,9,10};
    int*tab3{tab2};
    int tab4[N]={4,6,8,9,11,2,11,2,3,10};

    int *ptr=new int[N];



    display(tab);
    display(tab2);
    display(tab3);
    display(tab4);
    display(ptr);

    display_evens(tab);
    display_evens(tab2);
    display_evens(tab3);
    display_evens(tab4);
    display_evens(ptr);

    display_odds(tab);
    display_odds(tab2);
    display_odds(tab3);
    display_odds(tab4);

    display_odds(ptr);


    delete [] ptr;

    int matrix[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int mat[][C]{1,2,3,4,5,6,7,8,9,10,11,12,};
    int m[R][C]{1,2,3,};
    int mt[R][C]={{1,2,3},{5,6,7,8,},{9,11,}};



    display(matrix);
    display(mat);
    display(m);


    return 0;
}