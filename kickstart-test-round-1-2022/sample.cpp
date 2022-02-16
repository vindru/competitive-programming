/**
 * Author: Vindru
 * Problem: (https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f4332/0000000000942404)
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
    int sum = 0, res;
    for (int i = 0; i < bags.size(); i++)
    {
        sum = sum + bags[i];
    }
    res = sum % m;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        int n, m, temp;
        vector<int> bags;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            bags.push_back(temp);
        }
        int res = solve(bags, m);
        cout << "Case #" << t << ": " << res << "\n";
    }
}
