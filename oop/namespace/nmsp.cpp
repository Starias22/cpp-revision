#include<iostream>
using namespace std;
namespace nmsp
{
    int var=25;
    void say_hello(){
        cout<<"Hello world!\n";
    }
    class A{

       public:
        void great(){
            cout<<"That's great\n";
        }
        void bad();

    };
        //next step

    namespace nmsp2
    {
     int var=99;
     void great(){
            cout<<"That's great\n";
        }

    } // namespace nmsp2


} // namespace nmsp
void nmsp::A::bad(){
    cout<<"That's bad\n";
}
void great(){
            cout<<"That's great\n";
        }

int main()
{

    int var=5;
    cout<<"var=" <<var<<endl;

    cout<<"nmsp::var=" <<nmsp::var<<endl;
    nmsp::say_hello();
    nmsp::A a;
    a.great();
    a.bad();
        cout<<"nmsp::nmsp2::var=" <<nmsp::nmsp2::var<<endl;


    nmsp::nmsp2::var=-96;
    nmsp::nmsp2::great();

}