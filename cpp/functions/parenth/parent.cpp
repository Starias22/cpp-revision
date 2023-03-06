#include<iostream>
#include<algorithm>


using namespace std;
int i;
char ch;

bool check_parenth(string str){
    string open_parent{},closed_parent{};

    //si nb_(  different de  nb_)
    if(count(str.begin(),str.end(),'(')!= count(str.begin(),str.end(),')'))

    return false;
   

    for (i=0;open_parent.size()!=count(str.begin(),str.end(),'(');i++)
    {
    
    
    ch=str[i];
    if(ch==')')
    return false;
    if(ch=='(')
    open_parent+=ch;
    }
     reverse(str.begin(),str.end());

     for (i=0; closed_parent.size()!=count(str.begin(),str.end(),')');i++)
    {
    
    ch=str[i];
    if(ch=='(')
    return false;
    if(ch==')')
    closed_parent+=ch;
    }
    return  open_parent.size()==closed_parent.size();
}

int main()
{

        cout<<boolalpha<<check_parenth("")<<endl;
        cout<<boolalpha<<check_parenth("fgs")<<endl;
        cout<<boolalpha<<check_parenth("(())'")<<endl;
        cout<<boolalpha<<check_parenth("((()))")<<endl;
        cout<<boolalpha<<check_parenth("((())")<<endl;
        cout<<boolalpha<<check_parenth(")(")<<endl;
        cout<<boolalpha<<check_parenth("")<<endl;
        


    

    return 0;
}