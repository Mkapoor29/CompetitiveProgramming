class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int count = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                cout<<nums[i]<<": "<<count<<endl;
                swap(nums[i],nums[count++]);
                cout<<count<<endl;
            }
        }
        
    }
};
// 283. Move Zeroes
/*
Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 
*/
