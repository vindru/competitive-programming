/**
 * Author: Vindru
 * Problem: (https://leetcode.com/problems/longest-common-subsequence/)
 * 
 * 
*/

class Solution
{

public:
    int lcs(char *X, char *Y, int m, int n, int l[][1001])
    {
        if (m == 0 || n == 0)
            return 0;
        if (l[m - 1][n - 1] != -1)
            return l[m - 1][n - 1];
        if (X[m - 1] == Y[n - 1])
        {
            l[m - 1][n - 1] = 1 + lcs(X, Y, m - 1, n - 1, l);
            return l[m - 1][n - 1];
        }
        else
        {
            l[m - 1][n - 1] = max(lcs(X, Y, m, n - 1, l),
                                  lcs(X, Y, m - 1, n, l));
            return l[m - 1][n - 1];
        }
    }

public:
    int longestCommonSubsequence(string text1, string text2)
    {
        char *X;
        char *Y;
        X = &text1[0];
        Y = &text2[0];
        int l[text1.length()][1001];
        memset(l, -1, sizeof(l));
        return lcs(X, Y, text1.length(), text2.length(), l);
    }
};
