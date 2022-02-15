/**
 * Author: Vindru
 * Problem: (https://leetcode.com/problems/pacific-atlantic-water-flow)
 * 
 */
class Solution
{
  int xy[4][2] = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}};

public:
  vector<vector<int> > pacificAtlantic(vector<vector<int> > &heights)
  {

    vector<vector<bool> > pacific(heights.size(), vector<bool>(heights[0].size(), false));
    vector<vector<bool> > atl(heights.size(), vector<bool>(heights[0].size(), false));
    vector<vector<int> > res;
    int r = heights.size();
    int c = heights[0].size();
    for (int i = 0; i < c; i++)
    {
      dfs(0, i, heights[0][i], heights, pacific);
    }
    for (int i = 0; i < r; i++)
    {
      dfs(i, 0, heights[i][0], heights, pacific);
    }

    for (int i = 0; i < c; i++)
    {
      dfs(heights.size() - 1, i, heights[heights.size() - 1][i], heights, atl);
    }
    for (int i = 0; i < r; i++)
    {
      dfs(i, heights[0].size() - 1, heights[i][heights[0].size() - 1], heights, atl);
    }
    for (int i = 0; i < heights.size(); i++)
    {
      for (int j = 0; j < heights[0].size(); j++)
      {
        if (pacific[i][j] && atl[i][j])
        {
          vector<int> res1;
          res1.push_back(i);
          res1.push_back(j);
          res.push_back(res1);
        }
      }
    }

    return res;
  }

public:
  void dfs(int i, int j, int last, vector<vector<int> > &heights, vector<vector<bool> > &ocean)
  {

    if (j >= heights[0].size() || i >= heights.size() || i < 0 || j < 0)
    {
      return;
    }

    if (heights[i][j] < last || ocean[i][j])
    {
      return;
    }
    ocean[i][j] = true;
    for (int k = 0; k < 4; k++)
    {
      dfs(i + xy[k][0], j + xy[k][1], heights[i][j], heights, ocean);
    }
  }
};
