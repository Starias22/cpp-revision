#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string ch="kayak";
    string ch_cpy=ch;
    reverse(ch.begin(),ch.end());
    if(ch==ch_cpy)
    cout<<ch_cpy<<" est palindrome.\n";
    else 
    cout<<ch_cpy<<" n'est pas palyndrome.\n";
    return 0;
}