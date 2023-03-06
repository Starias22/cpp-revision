#include<iostream>

using namespace std;
int n;
void display(float *tab)
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
    float *tab;
    //allocate memory
    tab=(float*) malloc(n*sizeof(float));//or 8
    cout<<"tab: "<<tab<<endl;
    //use memory
    for(int i=0;i<n;i++)
    {
        cout<<"Item "<<i+1<<" : ";
        cin>>*(tab+i);
    }
    display(tab);
    //remove 3 cases of memory
    n-=3;
    tab=(float*)realloc(tab,n);
    display(tab);


    //free memory
    free(tab);
    return 0;
}