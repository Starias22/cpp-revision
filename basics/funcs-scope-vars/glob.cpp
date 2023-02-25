#include<iostream>
using namespace std;
//some global variables
float x=1.55;
auto str="A global string\n";
void modif_str(){
    str="str modified\n";
}
int main(){
    //access to str
cout<<"str:"<<str;
//call the modif
modif_str();
cout<<"After modif:"<<str;
str="str modified in main:\n";
cout<<"Inside the main function:"<<str;

}