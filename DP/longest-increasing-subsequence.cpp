/**
 * Author: Vindru
 * Problem: (https://leetcode.com/problems/longest-increasing-subsequence)
 * 
 * 
 * Logic: complexity n*n both time and space
*/

class Solution
{
public:
  int lengthOfLIS(vector<int> &nums)
  {
    int res = 1;
    vector<int> dp(nums.size(), 0);
    for (int i = nums.size() - 1; i >= 0; i--)
    {
      int max = 0;
      for (int j = i; j < nums.size(); j++)
      {
        if (nums[i] < nums[j] && dp[j] > max)
        {
          max = dp[j];
          cout << max << "s";
        }
      }

      dp[i] = max + 1;
      if (dp[i] > res)
      {
        res = dp[i];
      }
    }
    return res;
  }
};
