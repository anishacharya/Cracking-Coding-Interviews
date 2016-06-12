class Solution {
public:
    int reverse(int x) 
    {
        if(x == 0)
            return x;
        int sign = x / abs(x);
        
        long long int rev = 0; 
        x = abs(x);
        while(x)
        {
            rev = rev*10+(x % 10);
            x = x/10; 
        }
        
        if(rev > INT_MAX || rev < INT_MIN)
            return 0;
        return sign*rev;
    }
};
