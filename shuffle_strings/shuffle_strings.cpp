#include<iostream>
#include<vector>
#include<algorithm>
#define N 10
using namespace std;

string shuffle(string str){
    srand(time(0));
    vector<bool> test_used(str.length(),false);
    auto it_test=test_used.begin();
    string res;
    int rd;


    while (true)
    {
    if(res.length()==str.length())
        break;
    do{

        //generate a random index
        rd=rand()%(str.length());
    }while(test_used[rd]==true);
    *(it_test+rd)=true;

    res.push_back(str[rd]);
}
return res;
}



//typedef vector<int> v;

int main()
{

    string str="a string";
    string shuffled=shuffle(str);
    cout<<"str:"<<str<<endl;
    cout<<"shuffle(str):"<<shuffle(str)<<endl;





    return 0;
}