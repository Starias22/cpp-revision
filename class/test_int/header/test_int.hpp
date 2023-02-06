#include<iostream>
#define MAX 50
using namespace std;


class test_int{
  static int count;
  int * set_of_int;
  public :

  test_int(int max=MAX);
  ~test_int();
  void add(int elt);
  int get_count();
  bool contains(int n);
  int * get_set_of_int();
  test_int(const test_int & );


};
