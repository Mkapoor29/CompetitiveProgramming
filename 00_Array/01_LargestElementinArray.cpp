#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int max = 0;
    for(int i: arr)
    {
        if(max<i)
            max = i;
    }
    return max;
}
