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

void solve(int m)
{
  for (int i = 0; i <= m; i++)
  {
    for (int j = 0; j < m - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= i; k++)
    {
      cout << k;
    }
    for (int l = i - 1; l >= 0; l--)
    {
      cout << l;
    }

    cout << "\n";
  }

  for (int i = m - 1; i >= 0; i--)
  {
    for (int j = 0; j < m - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= i; k++)
    {
      cout << k;
    }
    for (int l = i - 1; l >= 0; l--)
    {
      cout << l;
    }

    cout << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tc, temp;
  cin >> tc;
  solve(tc);
}
