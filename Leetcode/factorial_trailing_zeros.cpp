class Solution {
public:
    int trailingZeroes(int n) 
    {
        long count = 0;
        // Keep dividing n by powers of 5 and update count
        for (long i=5; n/i>0; i *= 5)
              count += n/i;
        return count;
    }
};
