#include<iostream>
#include<algorithm>

using namespace std;



int main(){
    string str;

    str="These are some strings";
    cout<<str<<endl;
    char old_char='s',new_chr='S';
    replace(str.begin(),str.end(),old_char,new_chr);
    cout<<str<<endl;


    cout<<"Enter your string: ";
    getline(cin,str);
    cout<<"The character to be relaced: ";
    cin>>old_char;
    cout<<"The character of replacement: ";
    cin>>new_chr;
    cout<<"Your initial string: "<<str;
    replace(str.begin(),str.end(),old_char,new_chr);
    cout<<"String after replace: "<<str<<endl;





    return 0;
}