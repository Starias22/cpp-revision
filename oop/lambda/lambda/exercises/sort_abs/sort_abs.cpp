#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void display(vector<int> tab){

    for(auto elt:tab)
    cout<<elt<<"\t";
    
}

int main()
{
  vector<int> tab{-20,15,-30,85,-5,9,-4,-9,9,0,1000,88};

  cout<<"\nTableau avant tri suivant la valeur absolue:\n";
  display(tab);
  sort(tab.begin(),tab.end(),[](int a,int b){

    return abs(a)< abs(b);
  });
 cout<<"\nTableau après tri suivant la valeur absolue:\n";
 display(tab);






    return 0;
}