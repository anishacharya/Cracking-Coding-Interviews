class Solution {

public:

    vector<int> twoSum(vector<int>& nums, int target) 

    {

        int n=nums.size();

        vector<int> Out;

        if(n<2)

            return Out;        

        map<int,int>M;

        map<int,int>::iterator it=M.begin();

        for(int i=0;i<n;i++)

        {

            it=M.find(target-nums[i]);

            if(it!=M.end())

            {

                Out.push_back(it->second);

                Out.push_back(i);

                return Out;

            }

            else

            {

                M[nums[i]]=i;

            }

        }
        return Out;

    }

};
