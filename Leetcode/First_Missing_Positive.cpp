Class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 1;
            
        sort(nums.begin(),nums.end());
        
        if(nums[nums.size()-1]<=0)
            return 1;
        
        int i=0;
        
        while(nums[i]<=0)
            i++;
            
        int curr=1;
        
        while(i<nums.size())
        {
            if(nums[i]==curr)
            {
                while(nums[i]==curr && i<nums.size())
                    i++;
                    
            }
             
            else if(nums[i]!=curr)
                return curr;
                
           
            curr++;
            
        }
        
      //  if(i<nums.size())
       //     return curr;
            
        return nums[nums.size()-1]+1;    
    }
};
