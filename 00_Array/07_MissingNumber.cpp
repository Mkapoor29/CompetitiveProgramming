// 268. Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int xor1 , xor2; 
        xor1 = xor2 =  0;
        for(int x : nums)
        {
            xor2 ^= x;
        }
        for(int i = 0 ;i<n;i++)
        {
            xor1 ^= i;
        }
        return (xor1^xor2);
    }
};
