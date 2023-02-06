#include"../header/test_int.hpp"
test_int::test_int(int max){
    count=0;
    set_of_int= new int [max];

}
test_int::~test_int(){
    //cout<<"Destroyed******"<<endl;
    delete [] set_of_int;

}
void test_int::add(int elt){
    if(count==MAX)
        return ;

    *(set_of_int+count)=elt;
    count++;

}
int test_int::get_count(){
    return count;
}
bool test_int::contains(int n){
    for(int i=0;i<count;i++)
        if(*(set_of_int+i)==n)
            return true;
    return false;
}
int * test_int:: get_set_of_int(){
    return set_of_int;
}
test_int::test_int(const test_int &set){
    count=set.count;
    set_of_int=new int[ set.count];
    for(int i=0;i< set.count;i++)
        set_of_int[i]=set.set_of_int[i];





}