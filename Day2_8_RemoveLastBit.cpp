/*
1 1 0 1 1 0
1 1 0 1 0 0 <- clearing last bit


1 1 0 1 1 0    --- 54
1 1 0 1 0 1    --- 53
1 1 0 1 0 0    --- 52 <- clearing last bit using & operator

*/
#include <iostream>
using namespace std ;
int main()
{
    int n = 54;
    int answith = n & (n-1);
    cout<<answith<<endl;
    return 0;
}
