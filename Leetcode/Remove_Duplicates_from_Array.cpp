class Solution {

public:
    void swap(vector<int>& nums,int i,int j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==0)
            return 0;
        int ix=0;
        int i=0;
        while(i<n)
        {
            while(nums[i]==nums[ix] && i<n)
                i++;
            if(i==n)
                break;
            ix++;
            swap(nums,i,ix);
            i++;
        }
        return ix+1;
    }
};
