// Forward declaration of isBadVersion API.
/*
You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your
product fails the quality check. Since each version is developed based on the previous version, all the versions after a
bad version are also bad.
Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to
be bad.You are given an API bool isBadVersion(version) which will return whether version is bad. Implement a function to find
the first bad version. You should minimize the number of calls to the API.
*/
bool isBadVersion(int version);

class Solution {
public:
    int rec_binary(int l,int r)
    {
        if(l>r)
            return -1;
        int mid = l+(r-l)/2;
        
        if(isBadVersion(mid)==true)
        {
            if(isBadVersion(mid-1)==false)
                return mid;
            return rec_binary(l,mid-1);
        }
        else
            return rec_binary(mid+1,r); 
    }
    int firstBadVersion(int n) 
    {
        //int l=0; int r=n-1;
        return rec_binary(1,n);      
    }
};
