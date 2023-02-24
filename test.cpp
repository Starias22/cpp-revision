#include<iostream>
#include<map>
#include<set>

//#include<multimap>

using namespace std;
typedef pair<int ,float> q;
int main()
{
    //pair<int ,float> p;
    map<string,int/*,greater<int>*/> marks;
    marks.key_comp();
    auto x=  marks.value_comp();
    map<string,int>::iterator  it;


    marks["math"]=15;
    marks["x"]=2;
    marks["a"]=6;
    marks["b"]=6;
    it= marks.begin();
    it++;
    cout<<it->first;
    cout<<it->second;
    //*it=make_pair("Hello"s,45);
  auto val=marks.insert(make_pair("hd",20));
  cout<<val.second<<endl;
  marks.clear();
  marks.find("j");
  multimap<int,int> mp;

  mp.clear();
  mp.count(2);
  //the first element with 2 as key
  mp.lower_bound(2);
  //the last element with 2 as key
  mp.upper_bound(2);
  mp.equal_range(2);
  //erase all the elements withn2  as key
  mp.erase(2);
  mp.find(4);


    auto t=make_tuple(1,2,3);
    get<2>(t);
    set<float>s;
    s.find(2);
    s.clear();
    s.erase(2);
    s.begin();
    s.end();
    s.count(1);







    /* marks.size();

    auto fst=marks.begin();
    auto q=make_pair(4,6.);*/
    //cin>>marks;

   //auto f=*(fist).first;
    //paire p;
    return 0;
}