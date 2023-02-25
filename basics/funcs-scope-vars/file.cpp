#include <iostream>
using namespace std;
void display(int val){
    cout<<val<<endl;
}
auto is_even(int number){
    return number%2==0 ;
}
auto hello(){
    cout<<"Hello dear friends!\n";
}
int main()
{
    display(2);
    display(55);
    int j=56;
    display(j);
    display(j+6);
    auto val=is_even(8);
    cout<<boolalpha;
    cout<<"Is 8 even? "<<val<<endl;
    cout<<"typeid(val).name():"<<typeid(val).name()<<endl;
    if(typeid(val)==typeid(bool))
        cout<<"val is a boolean value\n";

    hello();
    return 0;
    //static int x=45;
    //int staticx=4;

}
