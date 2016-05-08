class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        vector<int> result;
        multiset<int> w;
        for(int i=0; i<nums.size(); i++)
        {
            if(i>=k)  w.erase(w.find(nums[i-k]));
            w.insert(nums[i]);
            if(i>=k-1) result.push_back(*w.rbegin());
        }
        return result;
    }
};
