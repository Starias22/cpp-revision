#include<iostream>
#include<algorithm>
#define N 10

using namespace std;
void display(int *tab)
{
    for(int i=0;i<N;i++)
    cout <<*(tab+i)<<"\t";
    cout<<endl;
}
int main()
{
//binary_search,replace,reverse,sort,find
    int tab[N]={2,8,-9,3,-9,2,7,8,5,4};
    display(tab);
    if(binary_search(begin(tab),end(tab),45))
        cout<<"45 found"<<endl;
    else
        cout<<"45 not found"<<endl;

    replace(begin(tab),end(tab),2,45);
    //search(1,1,1,1);;
    display(tab);
    reverse(begin(tab),end(tab));
    display(tab);
    sort(begin(tab),end(tab));
    display(tab);




   if(find(begin(tab),end(tab),3)==end(tab))


        cout<<"3 not found"<<endl;
    else
        cout<<"3 found"<<endl;

        //int tab2[]={2,7,8};

    /*int *it=  search(tab,end(tab),tab2,end(tab2));

    if(it==end(tab))
        cout<<"Sequence not found"<<endl;
    else
        cout<<"Sequence found"<<endl;


    cout<<"it= "<<it<<endl;
    cout<<"*it= "<<*it<<endl;*/
    /*int tab2[]={1,2,5,6,2,5,8,2,9,2};
    display(tab2);
  int* it= remove(begin(tab2),end(tab2),2);
    display(tab2);
     cout<<"it= "<<it<<endl;
    cout<<"*it= "<<*it<<endl;*/











    return 0;
    }