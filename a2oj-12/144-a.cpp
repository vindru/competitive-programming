/**
 * Author: Vindru
 * Problem: (https://codeforces.com/problemset/problem/144/A)
 **/

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int solve(vector<int> &bags, int m)
{
  int small = 0, large = 0, res = 0;
  for (int i = 0; i < m; i++)
  {
    if (bags[i] <= bags[small])
    {
      small = i;
    }
    if (bags[i] > bags[large])
    {
      large = i;
    }
  }
  if (small == large)
  {
    res = 0;
  }
  if (small < large)
  {
    res = m - small - 2 + large;
  }

  if (small > large)
  {
    res = m - 1 - small + large;
  }
  return res;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tc, temp;
  cin >> tc;
  vector<int> bags;
  for (int t = 0; t < tc; t++)
  {
    cin >> temp;
    bags.push_back(temp);
  }
  int res = solve(bags, tc);
  cout << res;
}
