#include <iostream>
#include <set>

using namespace std;
int main()
{
    //ordre non conservés pour nordered_map et unordered_set

    //solution: utiliser map et set

  set <string>benin_cities={"cotonou","abomey","porto-novo","parakou","lokossa"};
  //les éléments sont triés ...

  for(auto city:benin_cities)
  cout<<city<<"\t";
  cout<<endl;
    return 0;
}