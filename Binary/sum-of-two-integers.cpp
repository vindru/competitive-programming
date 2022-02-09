/**
 * Author: Vindru
 * Problem: https://leetcode.com/problems/sum-of-two-integers
 * 
 * 
 * Time Complexity O(1)
*/

class Solution
{
public:
  int getSum(int a, int b)
  {
    while (b != 0)
    {
      unsigned carry = a & b;
      a = a ^ b;
      b = carry << 1;
    }
    return a;
  }
};