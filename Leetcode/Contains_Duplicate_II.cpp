//Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that
//nums[i] = nums[j] and the difference between i and j is at most k.

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        if(nums.size()<=1)
            return false;
        map<int,int>M;
        map<int,int>::iterator it=M.begin();
        for(int i=0;i<nums.size();i++)
        {
            it=M.find(nums[i]);
            if(it!=M.end())
                return true;
            else
            {
                M[nums[i]]=i;
                if(i>k-1)
                    M.erase(nums[i-k]);
            }
        }
        return false;
    }
};
