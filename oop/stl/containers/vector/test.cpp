#include<iostream>
#include<vector>


using namespace std;
void display(vector<int>tab){
    for(int elt:tab)
    cout<<elt<<"\t";
    cout<<endl;

}
void displays(vector<int>tab){
    display(tab);
    cout<<"Size:"<<tab.size()<<endl;

}


int main()
{
   std:: vector<int> tab;//in the namespacce std


    vector<int> tab2{1,2,3,4,5};//vector of 5 int

    cout<<"size of tab: "<<tab.size()<<endl;
    cout<<"size of tab2: "<<tab2.size()<<endl;

      vector<int> vect(6);
     cout<<"Capacities"<<endl;
        cout<< tab.size()<<endl;
       cout<< tab.capacity()<<endl;

       cout<< tab2.size()<<endl;
        cout<< tab2.capacity()<<endl;
         cout<< vect.size()<<endl;
       cout<< vect.capacity()<<endl;
       // tab.push_back(0);


    cout<<"First element of tab2: "<<tab2[0]<<endl;
    cout<<"Last element of tab2: "<<tab2[4]<<endl;
    cout<<"Last element of tab2: "<<tab2[tab2.size()-1]<<endl;
    cout<<"Element at index 2 of tab2: "<<tab2[2]<<endl;
    cout<<"Element at index 2 of tab2: "<<tab2.at(2)<<endl;




    cout<<"Display:method1"<<endl;
    for(int i=0;i<5;i++)
    cout<<tab2[i]<<"\t";
    cout<<endl;
    //modif
    tab2[2]=3;

    cout<<"Display:method1"<<endl;
    for(int i=0;i<tab2.size();i++)
    cout<<tab2[i]<<"\t";
    cout<<endl;

    cout<<"Display:method1"<<endl;
    for(int i=0;i<tab2.size();i++)
    cout<<tab2.at(i)<<"\t";
    cout<<endl;


    cout<<"Display:method2"<<endl;
    for(int a:tab2)
    cout<<a<<"\t";
    cout<<endl;
        //write a function for display

        display(tab2);
        //vect of 10 ints
        vector<int> tab3(10);
        cout<<"size of tab3: "<<tab3.size()<<endl;
        display(tab3);

        cout<<"size of tab: "<<tab.size()<<endl;

        //first, last element:front,back,begin,end
        cout<<"First element of tab2: "<<tab2.front()<<endl;
        cout<<"Last element of tab2: "<<tab2.back()<<endl;

        cout<<"First element of tab2: "<<*tab2.begin()<<endl;
        cout<<"Last element of tab2: "<<*tab2.end()<<endl;

        auto a=tab2.front();
        auto it=tab2.begin();
        cout<<"typeid(a).name():"<<typeid(a).name()<<endl;
        cout<<"typeid(it).name():"<<typeid(it).name()<<endl;
        cout<<"typeid(*it).name():"<<typeid(*it).name()<<endl;
        cout<<"*it="<<*it<<endl;
        *it=69;
        cout<<"*it="<<*it<<endl;
        cout<<"First element of tab2: "<<tab2.front()<<endl;
        if(tab2.front()==*tab2.begin())
        cout<<"Alright"<<endl;
        cout<<"*(it+2)="<<*(it+2)<<endl;
        cout<<"tab2.at(2)="<<tab2.at(2)<<endl;
        *(it+2)=-99;
        cout<<"*(it+2)="<<*(it+2)<<endl;
        cout<<"tab2.at(2)="<<tab2.at(2)<<endl;
        cout<<"it[2]="<<it[2]<<endl;
        it+=2;
        cout<<"*(it)="<<*it<<endl;
        cout<<"tab2.at(4)="<<tab2.at(4)<<endl;
        it--;
        cout<<"*(it)="<<*it<<endl;
        ++it;
        cout<<"*(it)="<<*it<<endl;










        //tab[0]=1; //error
        tab.push_back(10);
        tab.push_back(1);
        tab.push_back(-58);
        cout<<"size of tab: "<<tab.size()<<endl;
        display(tab);
        tab.pop_back();

        cout<<"size of tab: "<<tab.size()<<endl;
        display(tab);

        tab=tab2;
        display(tab2);

        tab.clear();
        cout<<"size of tab: "<<tab.size()<<endl;
        if(tab.empty())
        cout<<"tab is empty"<<endl;

         if(!tab2.empty())
        cout<<"tab2 is not empty"<<endl;





        /*auto its=tab2.begin();

        tab2.erase(tab2.begin());
        display(tab2);
        tab2.erase(tab2.end());
        //display(tab2);*/
        display(tab2);

        tab2.resize(20);

        cout<<"Size of tab2:"<<tab2.size()<<endl;
        display(tab2);
        tab2={1,8,9,9};
        cout<<"Size of tab2:"<<tab2.size()<<endl;
        display(tab2);
         tab2.resize(2);
        cout<<"Size of tab2:"<<tab2.size()<<endl;
        display(tab2);



        displays(tab);
        displays(tab2);




        tab2.swap(tab);

        displays(tab);
        displays(tab2);

          cout<< vect.max_size()<<endl;


         cout<<"dff"<<vect.size()<<endl;
         auto its=vect.begin()+1;
         display(vect);

          vect.insert(its,2);
          display(vect);

         auto i= vect.rbegin();

         auto j=vect.end()-1;
         *j=758;
                   display(vect);

         cout<<"*i="<<*i<<endl;
         cout<<"*j="<<*j<<endl;
        vect.begin();
        vect.cbegin();
        vect.cend();
        vect.crbegin();
        vect.crend();
    ///erase















    return 0;
}