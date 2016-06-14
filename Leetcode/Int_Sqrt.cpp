// Implement int sqrt(int x).
// Compute and return the square root of x.
class Solution {
public:
    int mySqrt(int x) 
    {
        int left=0, right=x;
        long long int middle;
        while(left<right)
        {
            middle = (left+right)/2+1;
            if(middle*middle==x)
                return middle;
            else if(middle*middle<x)
                left = middle;
            else
                right = middle-1;
        }

        return left;
    }
};
