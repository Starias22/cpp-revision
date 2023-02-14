#include<iostream>
#include<list>
#include<vector>

#define N 5
using namespace std;
int main()
{
    list<int> lst;
    auto val=lst.begin()==lst.end();
    cout<<"The list contains "<<lst.size()<<" elements\n";
    cout<<boolalpha<<"lst.begin()==lst.end()? "<<val<<endl;
    list<double>marks(N);
    marks.push_back(55);
    cout<<"Last element: "<<marks.back()<<endl;
    marks.resize(2*N);
    cout<<"The marks list contains "<<marks.size()<<" elements\n";
    list <bool>l{true,false,false};
    cout<<"l.size():"<<l.size()<<endl;

    int t[6]={2,9,1,8,5,4};
    vector<int>vi(t,t+6);
    vector<int>vi2(t+1,t+5);
    string ch=" Bonjour";
    vector<char>vc(&ch[0],&ch[5]);
    cout<<"\nvi**"<<endl;
    for(int i:vi)
        cout<<i<<"\t";

    cout<<"\nvi2**"<<endl;
    for(int i:vi2)
        cout<<i<<"\t";

    cout<<"\nvc**"<<endl;
    for(int i:vc)
        cout<<i<<"\t";

        vector<int> vect1{vi};//par copie
        vector<int> vect2={vi};
        vect1[0]=-100;
        vect2[0]=-1;


     cout<<"\n****vi after modif****"<<endl;

    for(int i:vi)
        cout<<i<<"\t";
    cout<<"\n****vect1****"<<endl;
    for(int i:vect1)
        cout<<i<<"\t";

    cout<<"\n****vect2****"<<endl;

    for(int i:vect2)
        cout<<i<<"\t";
    cout<<endl;
    vector<bool> bools(3);
    //l.assign(bools);


    return 0;
}