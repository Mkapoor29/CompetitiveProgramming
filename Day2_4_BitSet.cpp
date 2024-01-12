// check if the ith bit is set or not.
/*
n = 13 
1101
3210
i = 2 
is the second bit set ? yes
is the 1st bit set? no


how to check whether 3rd bit is set or not?
4 3 2 1 0 
1 1 0 0 1
0 1 0 0 0     <- mask  1 << i  
-----------    perform and operation with the mask 
0 1 0 0 0     <- result

if the result is 0 then the ith bit is not set else it is set.
if the bit is set, the answer will be non zero.
*/

#include <iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int i;
    cout<<"enter the bit position: ";
    cin>>i;
    int answer = n & (1<<i);
    if(answer) cout<<"Set"<<endl;
    else cout<<"Unset"<<endl;
    return 0;
}
