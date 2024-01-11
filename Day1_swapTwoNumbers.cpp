#include <iostream>
using namespace std ;
int main()
{
    int a = 3; int b = 5;
    cout << "a = " << a << " b = " << b << endl;
    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b; 
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}
/*
3 - 011
5 - 101
011 ^ 101 = 110    a = 110 = 6
110 ^ 101 = 011    b = 011 = 3
110 ^ 011 = 101    a = 101 = 5
*/
/*
TC - O(1)
SC - O(1)
*/
