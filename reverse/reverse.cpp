#include<iostream>
#include<algorithm>

using namespace std;



int main(){
    string str;

    str="These are some strings";
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;


    cout<<"Enter your string: ";
    getline(cin,str);

    cout<<"Your initial string: "<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<"The reversed string: "<<str<<endl;
    




    return 0;
}