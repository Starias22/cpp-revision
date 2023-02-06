#include<iostream>
#include<algorithm>

#define N 10
using namespace std;

int main(){
    int  tab[N],i(0);
    cout<<"Enter "<<N<<" integers\n";
    for(int i=0;i<N;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>tab[i];
    }
    cout<<"\nEnter the element to be searched: ";
    int elt;
    cin>>elt;

    int* search,count(0);
    
    int *ptr(tab);
    //while elt found
     while(true)
     {
     search= find(ptr,tab+N/*or end(tab)*/,elt);
     //if elt ot found
     if(search==end(tab))
         break;
     else
      {
        //increment the number of occurences
        count++;
        //and begin the search at the search  result past one
        ptr=search+1;
        
     }

 
    }
    i=0;
    cout<<"Your table:\n";
    for ( i = 0; i < N; i++)
    {
       cout<<tab[i]<<"\t";
    }
    
    cout<<"\nThe element "<<elt<<" occurs "<<count<<" time(s) in the array\n";
   
    return 0;
}