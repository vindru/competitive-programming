/**
 * Author: Vindru
 * Problem: https://leetcode.com/problems/number-of-1-bits/
 * 
 * 
 * Time Complexity O(1)
*/

class Solution
{
public:
  int hammingWeight(uint32_t n)
  {
    int res = 0;
    while (n > 0)
    {
      if (n == 2)
      {
        res++;
        break;
      }
      if (n == 1)
      {
        res++;
        break;
      }
      if (n % 2 != 0)
      {
        res++;
      }
      n = n / 2;
    }
    return res;
  }
};
