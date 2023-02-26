#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>



using namespace std;

void display(vector<int> v,string label=""){
    cout<<label<<endl;
    for(int elt:v)
        cout<<elt<<"\t";
    cout<<endl;

}


void display(vector<float> v,string label=""){
    cout<<label<<endl;
    for(float elt:v)
        cout<<elt<<"\t";
    cout<<endl;

}

void display(vector<double> v,string label=""){
    cout<<label<<endl;
    for(double elt:v)
        cout<<elt<<"\t";
    cout<<endl;

}
int main()
{
    vector<int> vect {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    display(vect);

     reverse(vect.begin(),vect.end());
     display(vect,"vect reversed");

    //find
    vector<int>::iterator it=find(vect.begin(),vect.end(),1);

    if(it!=vect.end())
        cout<<"1 found with the 'find' function\n";
    else
        cout<<"1 not found with the 'find' function\n";

    //search
    bool res=binary_search(vect.begin(),vect.end(),1);
    if(res)
        cout<<"1 found with the 'binary_search' function\n";
    else
        cout<<"1 not found with the 'binary_search' function\n";
        //not fnd because the vect is not sorted



    sort(vect.begin(),vect.end());
    display(vect,"Vector sorted");

    res=binary_search(vect.begin(),vect.end(),1);
    if(res)
        cout<<"1 found with the 'binary_search' function\n";
    else
        cout<<"1 not found with the 'binary_search' function\n";

             //reverse(vect.begin(),vect.end());

    sort(vect.begin(),vect.end(),greater<int>());
    display(vect,"Descendent sort");

    sort(vect.begin(),vect.end(),less<int>());
    display(vect,"Ascendent sort");

    vector<float>ft{1.,5,-9.8,5.8,0,1.5,-1};
    display(ft);


    sort(ft.begin(),ft.end()-2,less<float>());
    display(ft,"Ascendent sort of ft");

    sort(ft.begin(),ft.end(),less<float>());
    display(ft,"Ascendent sort of ft");
    display(vect);
    auto i= upper_bound(vect.begin(),vect.end(),1);
    cout<<"*i:"<<*i<<endl;
    cout<<"index(i:)"<<i-vect.begin()<<endl;

    vector<double> tab{4,3,9,7-1,9,-3};
        display(tab,"tab");

    min_element(tab.begin(),tab.end());
  auto k=  max_element(tab.begin(),tab.end());
  *k=5555;
 count(tab.begin(),tab.end(),8);

    display(tab,"tab");
//sort first
    auto j=lower_bound(tab.begin(),tab.end(),0);
    cout<<"*j:"<<*j<<endl;
    cout<<"index(j:)"<<j-tab.begin()<<endl;
    cout<<"index(j:)"<<distance(j,tab.begin())<<endl;

    remove(tab.begin(),tab.end(),2);
    unique(tab.begin(),tab.end());//tab need to be sorted
    accumulate(tab.begin(),tab.end(),0,multiplies<double>());
    auto its=j;
    merge(tab.begin(),tab.end(),tab.begin(),tab.end(),its);
    auto out=j;
    copy(tab.begin(),tab.end(),out);


    return 0;
}