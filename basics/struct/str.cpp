#include<iostream>
using namespace std;
struct person{
    char name[30];
    int age=20;
    string desc;//a description
};

int main(){
    cout<<"typeof(person): "<<typeid(person).name()<<endl;
    cout<<"sizeof(string): "<<sizeof(string)<<endl;
    cout<<"sizeof(person): "<<sizeof(person)<<endl;
    if(sizeof(person)==sizeof(struct person))
        cout<<"Alright\n";
    cout<<"sum: "<<sizeof(string)+sizeof(char[30])+sizeof(int)<<endl;

    return 0;

}