/*
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
     int out=nums[0];
     int n=nums.size();
     for(int i=1;i<n;i++)
        out=out^nums[i];
     return out;
};