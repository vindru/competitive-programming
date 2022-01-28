/**
 * Author: Vindru
 * Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * 
 * Logic: complexity O(n), keep track of profit all time
*/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minEle = prices[0];
        int maxEle = prices[0];
        int profit = 0;
        if (prices.size() == 1)
        {
            return 0;
        }

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > maxEle)
            {
                maxEle = prices[i];
                int p = maxEle - minEle;
                if (p > profit)
                {
                    profit = p;
                }
            }
            else if (prices[i] < minEle)
            {
                minEle = prices[i];
                maxEle = prices[i];
            }
        }
        return profit;
    }
};
