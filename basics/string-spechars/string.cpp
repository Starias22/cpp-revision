#include<iostream>
using namespace std;
int main()
{
    cout<<"This is a string "<<endl;
    std::string fine="Fine my dear";
    string str("Hello my dear");
    cout<<"type(str):"<<
    typeid(str).name()<<endl;
    cout<<"str occupies "<<sizeof(str)<<
    " bytes"<<endl;
    cout<<"fine occupies "<<sizeof(fine)<<
    " bytes"<<endl;
    cout<<"fine contains "<<
    fine.length()<<" chars"<<endl;
    //not as same as str
    cout<<typeid("ajfl").name()<<endl;
    //
    auto x="How are you?";
    cout<<typeid(x).name()<<endl;
    /*There a litteral to constrain a string to be
    ...:s */
    auto y="string"s;
    cout<<typeid(y).name()<<endl;
    cout<<"Smile is a drug!"s<<endl;
    //modify y
    y="jkhlk";
    const string STR="JKHK"s;

    //cout<<"Note that:"Practice makes perfect"  and work arcodinly"<<endl;

    return 0;
}