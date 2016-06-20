/*
#338. Counting Bits:
Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example:
For num = 5 you should return [0,1,1,2,1,2].
*/
class Solution 
{
public:
    vector<int> countBits(int num) 
    {
        vector<int> out;
        for(int i = 0;i<= num; i++)
        {
            if(i && (i-1)==0) // for power of 2 will always be 1
                out.push_back(1);
            else
                out.push_back(count_bit(i));   
        }
        return out;    
    }
    
    int count_bit(int n)
    {
        int count = 0;
        
        while(n)
        {
            n = n & (n-1);
            count++;
        }
        return count; 
    }
};
