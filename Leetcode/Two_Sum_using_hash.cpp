class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>out;
        if(nums.size()==0)
            return out;
        map<int,int>M;
        map<int,int>::iterator it=M.begin();
        for(int i=0;i<nums.size();i++)
        {
            it=M.find(target-nums[i]);
            if(it!=M.end())
            {
                out.push_back(it->second);
                out.push_back(i);
                return out;
            }
            M[nums[i]]=i;
        }
        return out;
    }
};
