#include<iostream>
#include<algorithm>

//#include<vector>
using namespace std;




int main(){
    int table[10]={1,2,3,4,5,6,7,8,9,10};
    
    //vector<int> tab(10);
    //cout<<"tab contains "<<tab.size()<<"elements\n";

    //begin,end,
    //binary_search,find

    //we don't need to include any library
    cout<<"The first element of table is "<<*begin(table)<<
    "and its address is"<<begin(table)<<endl;
    if(begin(table)==table)
    cout<<"These addresses are equal\n";

    cout<<"The last element of table is "<<*(end(table)-1)<<
    " and its address is"<<end(table)-1<<endl;
    
    if(end(table)-begin(table)==sizeof(table)/sizeof(int))
      cout<<"Yeah equal\n";
    
    //in algorithm
    bool b=binary_search(table,table+10,1);
    if(b==true)
    cout<<"1 is in table\n";

    auto sh=find(table,table+sizeof(table)/sizeof(int),-10);
       cout<<"sh="<<sh<<endl;
       if(sh==end(table))
       cout<<"-10 is not inside the table\n";



   auto it= find(table,end(table),8);
   cout<<"it="<<it<<endl;
   if(end(table)!=it)
   cout<<"8 is found a the index "<<it-table<<endl;
   

    

    return 0;
}