//Follow up for "Search in Rotated Sorted Array":
//What if duplicates are allowed?
class Solution 
{
public:
    bool search(vector<int>& nums, int target) 
    {
        int l = 0; 
        int r = nums.size() - 1;        
        while(l <= r)
        {  
            int mid = l + (r - l) / 2;            
            if(nums[mid] == target) 
                return true;
            if(nums[mid] > nums[r])
            {
                if(target > nums[mid] || target <= nums[r]) 
                    l = mid + 1;    
                else 
                    r = mid - 1;                                                               
            }
            else if(nums[mid] == nums[r])
            {
                r --;   // may cause linear time here, e.g. [7, 8, 9, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], search for 0
            }
            else
            {
                if(target <= nums[r] && target > nums[mid]) 
                    l = mid + 1; 
                else 
                    r = mid - 1;                                                               
            }
        }
        return false;        
    }
};
