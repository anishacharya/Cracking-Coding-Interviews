#include <iostream>
#include<vector>

using namespace std;

vector<int> merge(vector<int> nums1, vector<int>nums2)
{
    vector<int> temp;
    int m=nums1.size();
    int n=nums2.size();
    int i=0,j=0;
    
    while(i<m && j<n)
    {
        if(nums1[i]<=nums2[j])
        { 
            temp.push_back(nums1[i]); 
            i++; 
            
        }
        else
        { 
            temp.push_back(nums2[j]); 
            j++; 
            
        }
    }
    while(i<m)
    {
       temp.push_back(nums1[i]); 
       i++; 
    }
    while(j<n)
    {
       temp.push_back(nums2[j]); j++; 
    }
    
    return temp;
}

vector<int> MergeKSorted(vector<vector<int> >nums)
{
    int n=nums.size();
    vector<int> out;
    if(n==0)
        return out;
    if(n==2)
        return merge(nums[0],nums[1]);
    out=nums[0];
    
    for(int i=1;i<n;i++)
    {
        vector<int>tmp=merge(out,nums[i]);
        out.clear();
        out=tmp;
    } 
        
    return out;
}

int main() 
{
	// your code goes here
	vector<int>v;
	vector<vector<int> >nums;
	v.push_back(1);
	v.push_back(5);
	v.push_back(6);
	nums.push_back(v);
	v.clear();
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	nums.push_back(v);
	v.clear();
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);
	nums.push_back(v);
	v.clear();
	v.push_back(15);
	v.push_back(16);
	v.push_back(19);
	nums.push_back(v);
	v.clear();
	v.push_back(11);
	v.push_back(12);
	v.push_back(20);
	nums.push_back(v);
	v.clear();
	vector<int> Out=MergeKSorted(nums);
	for(int i=0;i<Out.size();i++)
	{
	    cout<<Out[i]<<",";
	}
	    
	return 0;
}
