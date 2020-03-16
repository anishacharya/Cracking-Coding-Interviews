/*
Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
*/
class Solution {
public:
    void swap(vector<int>&V,int i,int j)
    {
        int temp=V[i];
        V[i]=V[j];
        V[j]=temp;
    }
    void sortColors(vector<int>& nums) 
    {
        int ix=0;
        int numsSize=nums.size();
        for(int i=0;i<numsSize;i++)
        {
            if(nums[i]==0)
                {
                    swap(nums,ix,i); 
                    ix++;
                }
        }
        for(int i=ix;i<numsSize;i++)
        {
            if(nums[i]==1)
            {
                swap(nums,ix,i); 
                ix++;
            }   
        }
    }
};
