#include <iostream>
using namespace std ;
int findXor(int l)
{
    int xor1 = 0;
    if(l%4==0) xor1 = l;
    if(l%4==1) xor1 = 1;
    if(l%4==2) xor1 = l+1;
    if(l%4==3) xor1 = 0;
    return xor1;
}
int main()
{
    /*
    given a range [L,R] find the xor of all the numbers in the range
    l = 2 r = 4 find xor of 2^3^4 = 5
    */
    int l1 = 2; int r = 4;
    int xor2 = 0;
    int l = l1-1;
    int xor1 = findXor(l);
    xor2 = findXor(r);
    int ans = xor1^xor2;
    cout<<"ans = "<<ans<<endl;
    
    return 0;
}
/*
l = 3 r = 6

xor 6 = 1^2^3^4^5^6
xor 2 = 1^2
011
100
101
011

001
formula = xor(R)^xor(L-1) O(n).
*/
