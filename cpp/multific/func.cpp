#include <iostream>
#include<vector>
using namespace std;


void say_hello(){
    cout<<"Hello my dear C programers. I reach a high level in C++ programming language\n";
}
void display_vector(vector<string> my_vector){
    for(auto str:my_vector)
    cout<<str<<"\t";
    cout<<endl;
}

/*g++ -std=c++17 test.cpp main.cpp -o programme.out
> clang++ -std=c++17 test.cpp main.cpp -o programme.out*/