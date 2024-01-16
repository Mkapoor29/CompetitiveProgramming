int secondLargest(vector<int> &a, int n)
{
    int max = a[0];
    int secMax = -1;
    for(int i = 1;i<n;i++)
    {
        if(a[i]>max)
        { 
            secMax = max;
            max = a[i];
        }
        else if (a[i]< max && a[i]>secMax)
        {
            secMax = a[i];
        }
    }
    return secMax;
}

int secondSmallest(vector<int> &a, int n)
{
    int small = a[0];
    int secSmall = INT_MAX;
    for(int i = 1;i<n;i++)
    {
        if(a[i]<small)
        { 
            secSmall = small;
            small = a[i];
        }
        else if (a[i] != small && a[i]<secSmall)
        {
            secSmall = a[i];
        }
    }
    return secSmall;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int smax = secondLargest(a, n);
    int smin = secondSmallest(a, n);
    
    return {smax, smin};
}
