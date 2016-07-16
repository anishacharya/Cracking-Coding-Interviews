class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		vector<vector<int>> res;
		if(nums.size()<4)
		    return res;
		for (int i = 0; i<nums.size()-3; i++) {
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			int a = nums[i];
			for (int j = i + 1; j < nums.size()-2; j++) {
				int b = nums[j];
				if (j > i + 1 && nums[j] == nums[j - 1])
					continue;
				int low = j+1;
				int high = nums.size() - 1;

				while (low < high) {
					int c = nums[low];
					int d = nums[high];
					if (a + b + c + d == target) {
						res.push_back(vector<int> {a, b, c, d});
						while (low < nums.size() && nums[low] == c)
							low++;
						while (high >= 0 && nums[high] == d)
							--high;
					}
					else if (a + b + c + d < target) 
						low++;
					else
						high--;

				}
			}
		}
		return res;

	}
};
