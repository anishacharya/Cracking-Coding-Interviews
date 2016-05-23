//You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the
//only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will
//automatically contact the police if two adjacent houses were broken into on the same night.
//Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money
//you can rob tonight without alerting the police.
class Solution {
public:
    int maxima(int a,int b)
    {
        return a>=b?a:b;
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        cout<<n<<endl;
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];

        vector<int>mark;
        //We can infer the formula from problem:mark[i]=max(num[i]+mark[i-2],mark[i-1])
        //so initialize two nums at first.
        mark.push_back(nums[0]) ;
        mark.push_back(maxima(nums[0], nums[1]));

        cout<<mark[1]<<endl;
        //Using Dynamic Programming to mark the max money in loop.
        for(int i=2;i<nums.size();i++)
        {
            cout<<"in"<<endl;
            mark.push_back(maxima(nums[i]+mark[i-2], mark[i-1])) ;
        }
    
        return mark[nums.size()-1];   
    }
};
