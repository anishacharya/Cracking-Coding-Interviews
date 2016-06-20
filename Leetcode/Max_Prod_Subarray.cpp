class Solution {
public:
    int maxProduct(vector<int>& nums) {
        assert (!nums.empty());
        int curMax = nums[0], curMin = nums[0], res = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            int mx = curMax, mn = curMin;
            curMax = max(max(mx * nums[i], mn * nums[i]), nums[i]);
            curMin = min(min(mx * nums[i], mn * nums[i]), nums[i]);
            res = max(res, curMax);
        }
        return res;
    }
};	
