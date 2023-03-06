#include <iostream>
#include <tuple>


using namespace std;
using namespace std::literals;

//this function returns the 

tuple<int,int>/*ou auto*/ my_fun(int num,int den){
    auto  my_result=make_tuple(0,0);
    if(den==0)
    throw runtime_error("Le dénominateur doit être non nul");
    //else
    get<0>(my_result)=num/den;
    get<1>(my_result)=num%den;

    return my_result;

}


int main()
{
    int num,den;
    auto my_result=make_tuple(0,0);
    cout<<"Entrer le numérateur: ";
    cin >>num;
     cout<<"Entrer le dénominateur: ";
    cin >>den;
    //surround with try/catch
    my_result=my_fun(num,den);
    cout<<"Résultats\n";
    cout<<"quotient="<<get<0>(my_result)<<endl;
    cout<<"reste="<<get<1>(my_result)<<endl;

    //coder equation horaire




    return 0;
}