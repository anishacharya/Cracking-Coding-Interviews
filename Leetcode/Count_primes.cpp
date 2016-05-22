//Count the number of prime numbers less than a non-negative number, n.
class Solution {
public:
    int countPrimes(int n) 
    {
        bool prime[n+1];
        memset(prime, true, sizeof(prime));
        int count=0;
        if(n==0)
            return 0;
        for(int p=2; p*p<n; p++)
        {
            if(prime[p]==true)
            {
                //count++;
                for(int i=p*2; i<=n; i=i+p)
                    prime[i]=false;
            }
        }
        for (int p=2; p<n; p++)
        {
            if (prime[p])
                count++;
        }
        return count;      
    }
};
