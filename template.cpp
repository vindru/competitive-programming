/*
Author: Vindru
Problem:

Solution:
*/
#include <bits/stdc++.h>
#include <map>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int mpow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 100000007;
//=======================

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> umaplll;
        vector<int> array;
        for (int i = 0; i < (nums.size()); i++)
        {
            int a = target - nums[i];
            unordered_map<int, int>::const_iterator b = umaplll.find(a);
            if (b == umaplll.end())
            {
                if (a >= 0)
                {
                    umaplll[nums[i]] = i;
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

int main()
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif
    vector<int> nums;
    int helper;
    while (cin >> helper)
    {
        nums.push_back(helper);
    }

    int t;
    cin >> t;
    Solution sol;
    cout << t;
    for (int i = 0; i < (nums.size()); i++) {
        cout << nums[i] << t;
    }
    vector<int> output = sol.twoSum(nums, t);
    for (int i = 0; i < (nums.size()); i++)
    {
        cout << output[i];
    }

    return 0;
}

int mpow(int base, int exp)
{
    base %= mod;
    int result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}


