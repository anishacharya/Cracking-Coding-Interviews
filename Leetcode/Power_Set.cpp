/*
#78. Subset
Given a set of distinct integers, nums, return all possible subsets.

Note: The solution set must not contain duplicate subsets.

For example,
If nums = [1,2,3], a solution is:
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int N = pow(2,nums.size());
        vector<vector<int> > Out;
        for(int i=0;i<N;i++)
        {
            vector<int> tmp; tmp.clear();
            for(int j=0;j<nums.size();j++)
            {
                if((i & 1<<j) != 0 )
                    tmp.push_back(nums[j]);
            }
            
            Out.push_back(tmp);
        }
        return Out;
    }
};
