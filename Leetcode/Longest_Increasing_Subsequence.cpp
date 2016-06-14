class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        // dp[i] = max{ dp[j]+1 if nums[i]>nums[j] }
        // dp[0] = 1

        if(nums.size() == 0) return 0;

        vector<int> dp(nums.size(), 1);

        int max = dp[0];

        for(int i=1; i < nums.size(); i++)
        {
           for(int j=0; j<i; j++)
           {
               if(nums[i] > nums[j] && dp[j]+1 > dp[i])
                dp[i] = dp[j]+1;
           }

           max = std::max(dp[i], max);
        }

        return max;
    }
};
