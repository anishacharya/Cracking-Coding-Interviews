/*
Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

*/
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size()==0)
            return 0;
            
        int min_so_far=prices[0]; int max_so_far=0;
        
        int i=1; 
        
        while(i<prices.size())
        {
            if(prices[i]<min_so_far)
                min_so_far=prices[i];
            
            int profit=prices[i]-min_so_far;
            
            if(profit>max_so_far)
                max_so_far=profit;
            
            i++;
        }
        return max_so_far;
    }
};
