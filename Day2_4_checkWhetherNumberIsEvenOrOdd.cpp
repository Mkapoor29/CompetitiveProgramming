// given an integer n, check if its even or odd.
/*
001 & 1 = 001
011 & 1 = 001
101 & 1 = 001
------------------
010 & 001 = 000
100 & 001 = 000
110 & 001 = 000

hence if the last bit is 1 then the number is odd else even.
also if (n&1) == 0 then even else odd.

*/
#include <iostream>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    if(n&1) cout<<"odd"<<endl;
    else cout<<"even"<<endl;
    return 0;
}
