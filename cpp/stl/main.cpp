#include<iostream>
#include<algorithm>
#include<numeric>//for accumulate

void show(int tab[] ,int size=10);


using namespace std;

int main(){
int tab[]={12,13,5,8,-6,-9,66,-9,0,1};
show(tab,10);
sort(tab,tab+10);
show(tab,10);
cout<<"begin of tab:"<<begin(tab)<<endl;
cout<<"end of tab:"<<end(tab)<<endl;
if(begin(tab)==tab && end(tab)==tab+10)
cout<<"Great!\n";
else
cout<<"Ouf!\n";
/*begin(tab) return the pointer on the first element of tab
and end(tab) returns the pointer on the last element of tab*/

int *ptr=tab;//or begin(tab)
while(ptr!=end(tab))
{
    *ptr*=-1;
ptr++;
}
sort(tab,ptr);
ptr=tab;
while(ptr!=end(tab))
{
    *ptr*=-1;
ptr++;
}
show(tab);
reverse(tab,ptr);

show(tab);

auto var=binary_search(tab,end(tab),-156);
cout<<var<<endl;

var=binary_search(tab,end(tab),8);
cout<<var<<endl;
/*binary_search(start,end,elt) returns a boolean that specifies if the element is or not
in tab*/
int* ptr1=max_element(tab,tab+10),
*ptr2=min_element(tab,tab+10) ;

cout<<"The max of this table is "<<*ptr1 <<endl;
cout<<"The min of this table is "<<*ptr2<<endl;

cout<<"The max is at index "<<ptr1-tab<<endl;
cout<<"The min is at index "<<ptr2-tab<<endl;
cout<<"The table contains "<<end(tab)-begin(tab)<<" elements\n";

cout<<"The sum of the table elements gives:"<<accumulate(tab,end(tab),0)<<endl;
cout<<"The sum of the table elements minus 5 gives:"<<accumulate(tab,end(tab),-5)<<endl;


cout<<"THe tab contains "<<count(tab,end(tab),-9)<<" occurence(s) of -9\n";

sort(tab,end(tab),greater<int>());
if(find(tab,end(tab),20)!=end(tab))
cout<<"20 is in the tab \n";
else
cout<<"20 isn't in the tab \n";

//if(tab+9)




return 0;

}
void show(int tab [],int size){
cout<<endl;
for(int i=0;i<size;i++)
cout<<tab[i]<<"\t";
cout<<endl;

}
