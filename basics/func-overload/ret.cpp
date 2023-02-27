#include<iostream>
using namespace std;

void print(int val){
    cout<<"int: "<<val<<endl;

}
void print(float x){
        cout<<"float: "<<x<<endl;


}
int main()
{
    print(45);//int
     //print(4.5);//problem
    print(45.5f);//float

    float x=-65;
    print(x);//float
    print(45.8F);
   print(static_cast<float>(45.5));


    return  0;
}