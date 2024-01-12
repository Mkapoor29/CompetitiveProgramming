// set the second bit of a number
/*

5 4 3 2 1 0
1 1 0 0 1 0
1 1 0 1 1 0 <- setting second bit



110010
000100
110110
*/
#include <iostream>
using namespace std ;
int main()
{
    int n = 50;
    int i = 2;
    int mask = 1<<i;
    int result = n | mask;
    cout<<result<<endl;
    return 0;
}
