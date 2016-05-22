class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int>S; 
        vector<int>out;
        for(int i=0;i<nums1.size();i++)
            S.insert(nums1[i]);
            
        set<int>::iterator it;
        
        for(int i=0;i<nums2.size();i++)
        {
            it=S.find(nums2[i]);
            if(it!=S.end())
            {
                out.push_back(nums2[i]);
                S.erase(nums2[i]);
            }
                
        }
        return out;
    }
};
