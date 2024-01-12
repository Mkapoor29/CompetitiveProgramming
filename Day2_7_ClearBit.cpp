/*
clear the bit value.
5 4 3 2 1 0
1 1 0 0 1 0
1 1 0 0 0 0 <- clearing first bit

0 0 0 0 1 0 <- 1<<2
1 1 1 1 0 1 <- ~1<<2

clear bit = n & (~(1<<i))
*/
#include <iostream>
using namespace std ;
int main()
{
    int n = 55;
    int i = 2;
    int answith = n & (~(1<<i));
    cout<<answith<<endl;
    return 0;
}
