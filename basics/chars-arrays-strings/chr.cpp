#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   //auto x= strcasecmp("v","");
    char message[] ="Hello world!";
    cout<<"message:"<<message<<endl;
    cout<<"strlen(message):"<<strlen(message)<<endl;
    char *msg=message;
    cout<<boolalpha;
    cout<<(message==msg)<<endl;//compare  addreesses
    char mes[14]="Hi bro!\n\0r";
    cout<<"mes:"<<mes<<endl;
    cout<<"strlen(mes):"<<strlen(mes)<<endl;
    mes[7]='M';
    cout<<"mes:"<<mes<<endl;
    cout<<"strlen(mes):"<<strlen(mes)<<endl;
    char *chr=new char[10];
    cout<<"strlen(chr):"<<strlen(chr)<<endl;
    *chr='A';
   *(chr+1)='Y';
    cout<<"chr:"<<mes<<endl;
    cout<<"strlen(chr):"<<strlen(chr)<<endl;
    delete [] chr;
    char src[]={'S','o','u','r','c','e','A'};
    char dest[10];
    char * addr=strcpy(dest,src);
    cout<<"dest:"<<dest<<endl;
    cout<<"addr:"<<addr<<endl;
    int n=strcmp("Amstrong","amstrong");
    cout<<"n="<<n<<endl;
    char str[20] ="How are you ";
    strcat(str,"guys");
    cout<<"str="<<str<<endl;
    char * st=strchr(dest,'o');
    cout<<"st="<<st<<endl;
    st=strstr(str,"are");
    cout<<"st="<<st<<endl;
    char tab[20];
    cout<<"Enter the string"<< endl;
    cin>>tab; //stop reading  in case of space
    cout<<"tab:"<<tab<<endl;
    /*in case of another reading function,if
    the user enter previously chars after ' ',
    they will be reading first*/
    cout<<"Enter another string"<< endl;
    cin.getline(tab,10);
    cout<<"tab:"<<tab<<endl;

    string s,s2;
    cout<<"Enter another string s"<< endl;
    getline(cin,s);
    cout<<"s:"<<s<<endl;
    cout<<"Enter another strings2"<< endl;
    getline(cin,s2,'m'); // 'm' is the char of stop
    cout<<"s2:"<<s2<<endl;
    s="Hello";
    cout<<s.at(2)<<endl;
    s.size();
    s.length();
    s.push_back('c');
    s.pop_back();
    s.append("a string");
    cout<<s<<endl;
    cout<<"s.capacity():"<<s.capacity()<<endl;
    //s.erase('o',1);
    cout<<s<<endl;
    cout<< s.substr(2,8)<<endl;
    cout<<s<<endl;















    return 0;
}