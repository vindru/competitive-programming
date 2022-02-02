/**
 * Author: Vindru
 * Problem: https://leetcode.com/problems/coin-change/
 * 
 * 
 * Logic: complexity O(n) both time and space
*/

class Solution
{
public:
  int coinChange(vector<int> &coins, int amount)
  {
    int dp[amount + 1];
    sort(coins.begin(), coins.end());
    for (int i = 1; i <= amount; i++)
    {
      int temp = 0;
      dp[i] = -1;
      for (int j = coins.size() - 1; j >= 0; j--)
      {
        if (i == coins[j])
        {
          dp[i] = 1;
          break;
        }
        if (i > coins[j])
        {
          if (dp[i - coins[j]] > 0)
          {
            if (temp == 0 || temp > dp[i - coins[j]] + 1)
            {
              dp[i] = dp[i - coins[j]] + 1;
              temp = dp[i];
            }
          }
        }
      }
    }
    if (amount == 0)
    {
      return 0;
    }
    return dp[amount];
  }
};
