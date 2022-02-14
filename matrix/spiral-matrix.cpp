/**
 * Author: Vindru
 * Problem: (https://leetcode.com/problems/spiral-matrix)
 */

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix)
    {
        vector<int> res;
        int i = 0, j = 0, count;
        while (true)
        {
            if (matrix[0].size() == 1)
            {
                for (int l = 0; l < matrix.size(); l++)
                {
                    res.push_back(matrix[l][0]);
                }
                return res;
            }
            else
            {
                if (j >= matrix[0].size() || matrix[i][j] == -11111)
                {
                    return res;
                }
                for (; j < matrix[0].size(); j++)
                {
                    if (matrix[i][j] == -11111)
                    {
                        break;
                    }
                    res.push_back(matrix[i][j]);
                    matrix[i][j] = -11111;
                }

                --j;
                ++i;
                if (j >= matrix[0].size() && matrix[i][j] == -11111)
                {
                    return res;
                }
                for (; i < matrix.size(); i++)
                {
                    if (matrix[i][j] == -11111)
                    {
                        break;
                    }
                    res.push_back(matrix[i][j]);
                    matrix[i][j] = -11111;
                }

                i--;
                j--;
                if (j < 0 && matrix[i][j] == -11111)
                {
                    return res;
                }
                for (; j >= 0; j--)
                {
                    if (matrix[i][j] == -11111)
                    {
                        break;
                    }
                    res.push_back(matrix[i][j]);
                    matrix[i][j] = -11111;
                }
                j++;
                i--;
                if (i < 0 || matrix[i][j] == -11111)
                {
                    return res;
                }
                for (; i > 0; i--)
                {
                    if (matrix[i][j] == -11111)
                    {
                        break;
                    }
                    res.push_back(matrix[i][j]);
                    matrix[i][j] = -11111;
                }
                i++;
                j++;
            }
        }
    }
};
