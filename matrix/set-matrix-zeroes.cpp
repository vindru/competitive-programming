/**
 * Author: Vindru
 * Problem: (https://leetcode.com/problems/set-matrix-zeroes/)
 */
class Solution
{
public:
  void setZeroes(vector<vector<int> > &matrix)
  {
    vector<vector<int> > matrix1;

    for (int i = 0; i < matrix.size(); i++)
    {
      vector<int> temp;
      for (int j = 0; j < matrix[i].size(); j++)
      {
        if (matrix[i][j] == 0)
        {
          temp.push_back(1);
        }
        else
        {
          temp.push_back(0);
        }
      }
      matrix1.push_back(temp);
    }
    for (int i = 0; i < matrix.size(); i++)
    {
      for (int j = 0; j < matrix[i].size(); j++)
      {
        if (matrix[i][j] == 0 && matrix1[i][j] == 1)
        {
          for (int k = 0; k < matrix.size(); k++)
          {
            matrix[k][j] = 0;
          }
          for (int k = 0; k < matrix[i].size(); k++)
          {
            matrix[i][k] = 0;
          }
        }
        else if (matrix[i][j] != 0)
        {
          matrix[i][j] = matrix[i][j];
        }
      }
    }
  }
};
