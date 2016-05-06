class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        if (nums.size() == 0) 
        {
            return ans;
        }
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() && nums[i] <= 0; ++i) 
        {
            if (i > 0 && nums[i] == nums[i - 1]) 
            {
                continue;
            }
            
            int sum = -nums[i];
            int j = i + 1;
            int k = nums.size() - 1;
            while ( j < k) 
            {
                int tmp = nums[j] + nums[k];
                if (sum == tmp) 
                {
                    ans.push_back(vector<int>{nums[i], nums[j], nums[k]});
                    while (j < nums.size() - 1 && nums[j] == nums[j + 1]) 
                    {
                        ++j;
                    }
                    while (k > 0 && nums[k] == nums[k - 1]) 
                    {
                        --k;
                    }
                    ++j;
                    --k;
                }
                else if (tmp < sum) 
                {
                    ++j;
                }
                else {
                    --k;
                }
            }
        }
        return ans;
    }
};
