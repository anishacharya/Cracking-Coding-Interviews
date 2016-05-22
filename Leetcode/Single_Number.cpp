//Given an array of integers, every element appears twice except for one. Find that single one.
//Note:
//Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int i=1;
        if(nums.size()==1)
            return nums[0];
        int x=nums[0];    
        while(i<nums.size())
        {
            x=x^nums[i];
            i++;
        }
        return x;    
    }
};
