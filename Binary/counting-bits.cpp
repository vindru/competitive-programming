/**
 * Author: Vindru
 * Problem: https://leetcode.com/problems/counting-bits
 * 
 * 
 * Time Complexity O(nlogn)
*/

class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> a;

        for (int i = 0; i <= n; i++)
        {
            a.push_back(hammingWeight(i));
        }
        return a;
    }

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