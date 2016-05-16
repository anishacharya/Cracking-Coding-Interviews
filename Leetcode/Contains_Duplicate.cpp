//Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears
//at least twice in the array, and it should return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        map<int,int>M;
        map<int,int>::iterator it;
        for(int i=0;i<nums.size();i++)
        {
            it=M.find(nums[i]);
            if(it!=M.end())
                return true;
            M[nums[i]]=i;    
        }
        return false;
    }
};
