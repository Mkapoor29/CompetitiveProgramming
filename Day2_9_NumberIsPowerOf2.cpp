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

------------------------------------------------------------------------------------
    bool isPowerOfTwo(int n) 
    {
        if(n<=0)
            return false;
        double p = log10(n)/log10(2);
        if(p-(int)p==0)
            return true;
        return false;    
    }
