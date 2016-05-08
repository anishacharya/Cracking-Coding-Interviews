class Solution {

public:

    int majorityElement(vector<int>& nums) 

    {
        map<int,int>M;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            M[nums[i]]++;
            if (M[nums[i]]>n/2)
                return nums[i];
        }
    }
};


