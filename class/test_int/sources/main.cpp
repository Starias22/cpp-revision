#include"../header/test_int.hpp"
#define N 10
int test_int:: count=0;
int nb_unique(test_int set){

    int count=set.get_count();
    test_int unique;
    int i;
    int elt;

    for(i=0;i<count;i++)
    {
      elt=set.get_set_of_int()[i];
      if(!unique.contains(elt))
        unique.add(elt);
    }
    return unique.get_count();

}
int main()
{   int n;
    cout<<"Enter "<<N<<" integers\n";
    test_int set(N);

    for(int i=0;i<N;i++)
    {
        cout<<"Integer "<<i+1<<": ";
        cin>>n;
        set.add(n);
    }
    int nb;





    //first approach

    int count=set.get_count();
    test_int unique;
    int i;
    int elt;

    for(i=0;i<count;i++)
    {
      elt=set.get_set_of_int()[i];
      if(!unique.contains(elt))
        unique.add(elt);
    }
    nb=unique.get_count();

    cout<<"There are "<<nb<<" unique integers in"
    <<" the set of the "<<N<<" integers you've provided"<<endl;

    //second approach
    //nb_unique(set);

    return 0;

}