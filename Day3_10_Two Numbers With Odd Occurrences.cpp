vector<int> twoOddNum(vector<int> arr){
    // Write your code here.
    int x = 0;
    for (int i : arr)
    {
        x ^= i;
    }
//  arr = {5,4,1,1,4,7,2,3,2,3}
//  x will store the value 1^2.
    
    int setBit; 
    // this variable is used to find the index of setBit in x.
    int count = 0;
    while(x)
    {
        if(x&1)
            break;
        count++;
        x = x>>1;

    }
    // for distint elements 1 and 2 
    // 1^2 = 001 ^ 010 = 011 & 001 = some positive value hence loops break and index = count = 0;
    
    
    // if the condition has failed , 5 ^ 7 = 101 ^ 111 = 010 
    // so what happens is the loop is executed once,  010 & 001 = 000
    // count becomes 2 and x is right shifted by 1 and x = 001.
    // PASS-2: 001 & 1 = 001 hence loop breaks. 
    // since count = 1 the firstSetBit is at 1st index.
    

    // x = 5 ^ 7 = 101 ^ 111 = 010 since the first bit is set we will find those array elements whose first index is set and store them in xor1 and rest in xor2.
    int xor1 = 0, xor2 = 0;
    for(int i : arr)
    {
        if( i & (1<<count))
            xor1 ^= i;
        else
            xor2 ^= i;
    }
    /*
    xor1 = 5^1^4^1^4
    xor2 = 7^3^3^2^2
    */
    int temp = xor1;
    if(xor2 > xor1)
        {xor1 = xor2; xor2 = temp;}
    
    vector<int>ans;
    ans.push_back(xor1);
    ans.push_back(xor2);
    return ans;
}
