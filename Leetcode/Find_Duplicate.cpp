class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        set<int>S;
        set<int>::iterator it=S.begin();
        for(int i=0;i<nums.size();i++)
        {
            it=S.find(nums[i]);
            if(it!=S.end())
                return true;
            S.insert(nums[i]);    
        }
        return false;
    }
};
