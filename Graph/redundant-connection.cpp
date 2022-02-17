/**
 * Author: Vindru
 * Problem: (https://leetcode.com/problems/redundant-connection/)
 * 
 *
 */

class Solution
{
public:
  vector<int> findRedundantConnection(vector<vector<int> > &edges)
  {
    vector<int> base;
    for (int i = 0; i <= edges.size(); i++)
    {
      base.push_back(i);
    }
    vector<int> res;

    for (int i = 0; i < edges.size(); i++)
    {
      int x = edges[i][0];
      int y = edges[i][1];
      if (base[x] == base[y])
      {
        res = edges[i];
      }
      else
      {
        int m = base[y];
        int n = base[x];
        if (x < y)
        {
          for (int i = 0; i <= edges.size(); i++)
          {
            if (m == base[i])
            {
              base[i] = n;
            }
          }
        }
        else
        {
          for (int i = 0; i <= edges.size(); i++)
          {
            if (n == base[i])
            {
              base[i] = m;
            }
          }
        }
      }
    }
    return res;
  }
};