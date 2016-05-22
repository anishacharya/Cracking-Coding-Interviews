//Given an unsorted integer array, find the first missing positive integer.
//For example,
//Given [1,2,0] return 3,
//and [3,4,-1,1] return 2.
//Your algorithm should run in O(n) time and uses constant space.

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 1;
            
        sort(nums.begin(),nums.end());
        
        if(nums[nums.size()-1]<=0)
            return 1;
        
        int i=0;
        
        while(nums[i]<=0)
            i++;
            
        int curr=1;
        
        while(nums[i]==curr && i<nums.size())
        {
            while(nums[i]==curr && i<nums.size())
                i++;
            curr++;    
        }
        
        if(i<nums.size())
            return curr;
            
        return nums[nums.size()-1]+1;    
    }
};
