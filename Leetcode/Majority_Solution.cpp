class Solution {
public:

    int get_majority(vector<int>& nums)
    {
        int count=1;
        int majority=nums[0];
        if(nums.size()==1)
            return nums[0];
            
        for(int i=1;i<=nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                count++;
            else
                count--;
            if(count==0)
            {
                majority=i;
                count=1;
            }
        }
        return nums[majority];
    }
    int majorityElement(vector<int>& nums) {
        int majority_element=get_majority(nums);
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==majority_element)
                count++;
            
        }
        if(count>n/2)
            return majority_element;
        else
            return -1;
    }
};
