/**
 * Author: Vindru
 * Problem: (https://leetcode.com/problems/insert-interval/submissions/)
 */

class Solution
{
public:
  vector<vector<int> > insert(vector<vector<int> > &intervals, vector<int> &newInterval)
  {

    bool isOneReached = false, istwoReached = false, rp = false;
    vector<vector<int> > res;
    vector<int> res1;
    if (intervals.size() == 0)
    {
      res.push_back(newInterval);
      return res;
    }
    for (int i = 0; i < intervals.size(); i++)
    {
      for (int k = 0; k < res1.size(); k++)
        cout << res1[k] << " ";
      if (!isOneReached)
      {
        if (newInterval[0] <= intervals[i][1] && newInterval[0] >= intervals[i][0])
        {
          res1.push_back(intervals[i][0]);
          isOneReached = true;
        }
        else if (newInterval[0] < intervals[i][0])
        {
          res1.push_back(newInterval[0]);
          isOneReached = true;
        }
      }
      if (!istwoReached)
      {
        if (newInterval[1] <= intervals[i][1] && newInterval[1] >= intervals[i][0])
        {
          res1.push_back(intervals[i][1]);
          istwoReached = true;
        }
        else if (newInterval[1] < intervals[i][0])
        {
          i--;
          res1.push_back(newInterval[1]);
          istwoReached = true;
        }
      }
      if (!isOneReached && !istwoReached)
      {
        res.push_back(intervals[i]);
      }
      else if (isOneReached && istwoReached && rp == false)
      {
        res.push_back(res1);
        rp = true;
      }
      else if (rp)
      {
        res.push_back(intervals[i]);
      }
    }
    if (!isOneReached && !istwoReached && rp == false)
    {
      res.push_back(newInterval);
    }
    else if (res1.size() == 1)
    {
      res1.push_back(newInterval[1]);
      res.push_back(res1);
      rp = true;
    }
    return res;
  }
};
