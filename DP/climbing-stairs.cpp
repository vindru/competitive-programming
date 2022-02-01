/**
 * Author: Vindru
 * Problem: https://leetcode.com/problems/climbing-stairs
 * 
 * 
 * Logic: complexity O(n)
*/

class Solution
{
public:
    int climbStairs(int n)
    {
        int last = 2;
        int secondLast = 1;
        if (n == 1)
        {
            return 1;
        }
        else if (n == 2)
        {
            return 2;
        }
        for (int j = 3; j <= n; j++)
        {
            int temp = secondLast;
            secondLast = last;
            last = last + temp;
        }
        return last;
    }
};
