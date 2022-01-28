/**
 * Author: Vindru
 * Problem: https://leetcode.com/problems/two-sum/
 * 
 * Logic:
 * 
 * Search is done using Hashmap to make search complexity O(1) and space complexity O(n)
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> umap;
        vector<int> array;
        for (int i = 0; i < (nums.size()); i++)
        {
            int a = target - nums[i];
            unordered_map<int, int>::const_iterator b = umap.find(a);
            if (b == umap.end())
            {
                if (a >= 0)
                {
                    umap[nums[i]] = i;
                }
            }
            else
            {
                array.insert(array.end(), {b->second, i});
                return array;
            }
        }

        return array;
    }
};
