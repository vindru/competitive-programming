/**
 * Author: Vindru
 * Problem: (https://leetcode.com/problems/product-of-array-except-self/submissions/)
 * 
 * 
 * Time Complexity O(nlogn)
*/

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        int prod = 1;
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                flag++;
            else
                prod *= nums[i];
        }

        vector<int> arr(n, -1);
        for (int i = 0; i < n; i++)
        {
            if (flag > 1)
            {
                arr[i] = 0;
            }

            else if (flag == 0)
                arr[i] = (prod / nums[i]);
            else if (flag == 1 && nums[i] != 0)
            {
                arr[i] = 0;
            }
            else
                arr[i] = prod;
        }
        return arr;
    }
};