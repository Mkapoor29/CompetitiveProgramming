/*
if ( n & n-1 == 0 ) then n is power of 2.
*/
#include <iostream>
using namespace std ;
int main()
{
    int n = 30;
    int answith = n & (n-1);
    if(!answith)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
