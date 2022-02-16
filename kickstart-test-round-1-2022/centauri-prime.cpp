/**
 * Author: Vindru
 * Problem: (https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f4332/0000000000941ec5)
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

string solve(string name)
{
    char a = name.back();
    string res;
    char v[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u', '\0'};
    for (int i = 0; v[i] != '\0'; i++)
    {
        if (a == v[i])
        {
            res = "Alice";
        }
        else if (a == 'y' || a == 'Y')
        {
            res = "nobody";
        }
    }
    if (res.length() == 0)
    {
        res = "Bob";
    }
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
        string name;
        cin >> name;
        string res = solve(name);
        cout << "Case #" << t << ": " << name << " is ruled by " << res << ".\n";
    }
}
