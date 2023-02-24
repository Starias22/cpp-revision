#include<iostream>
using namespace std;
int main()
{
    /*incrementation and decrementation operators
these operator are unary operator
    and operate only on numeric
    variables
    ++
    --
    post and prefix
    */
    int age=15;
    cout<<"I'm "<<age<<" years old\n";
  //birthdate
    age=age+1;
    cout<<"I'm "<<age<<" years old\n";
    //birthdate
    age+=1;
    cout<<"I'm "<<age<<" years old\n";

    //birthdate
    age++;
    cout<<"I'm "<<age<<" years old\n";

    //birthdate
    ++age;
    cout<<"I'm "<<age<<" years old\n";

    short dayD=18;
    cout<<"dayD: "<<dayD<<endl;

    dayD=dayD-1;
    cout<<"dayD: "<<dayD<<endl;

    dayD-=1;
    cout<<"dayD: "<<dayD<<endl;

    dayD--;
    cout<<"dayD: "<<dayD<<endl;

    --dayD;
    cout<<"dayD: "<<dayD<<endl;

    //diff beteewn pre and post
    /*we say post incr(resp decr) when the
    operator succed(resp preced)
    the operand(the variable)*/
    //post
    dayD--;
    //pre
    ++age;
    /*
    both of them inc or decr the variable
    */
    cout<<"dayD: "<<dayD<<endl;
    cout<<"age: "<<age<<"\n";

//the diff
    int j=++age;
    int k=dayD--;
    cout<<"j(age): "<<j<<endl;
    cout<<"k(dayD): "<<k<<"\n";
    cout<<"dayD: "<<dayD<<endl;
    cout<<"age: "<<age<<"\n";
    //pre:incr or dec before assignment
    //post:assign  before incr or decr

    return 0;
}