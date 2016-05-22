/*
Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), prove that at least one
duplicate number must exist. Assume that there is only one duplicate number, find the duplicate one.
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        
        return INT_MIN;
    }
};
