#include <iostream>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    int xor1=0;
    for(int i = 1; i<=n;i++)
    {
        xor1 ^= i;
    }
    cout<<"xor1 = "<<xor1<<endl;
    // the above code will give the xor of all numbers from 1 to n
    // but TC is O(n)
    // we can do it in O(1) TC
    /*
        n = 1      xor = 1  
        n = 2      xor = 3 
        n = 3      xor = 0  
        n = 4      xor = 4 

        n = 5      xor = 1
        n = 6      xor = 7
        n = 7      xor = 0
        n = 8      xor = 8

        if(n%4 == 0) xor = n;
        if(n%4 == 1) xor = 1;
        if(n%4 == 2) xor = n+1;
        if(n%4 == 3) xor = 0;
    */
    int xor2 = 0;
    if(n%4 == 0) xor2 = n;
    if(n%4 == 1) xor2 = 1;
    if(n%4 == 2) xor2 = n+1;
    if(n%4 == 3) xor2 = 0;
    cout<<"xor2 = "<<xor2<<endl;
    return 0;
}
