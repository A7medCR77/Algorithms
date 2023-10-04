#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
#define MOD 1000000007
#define ceil(n, m) (n + m - 1) / m
#define round(n, m) (n + m / 2) / m
#define sz(s) s.size()
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define sum_of_first_n_odd_number(n) ((n % MOD) * (n % MOD)) % MOD;
#define all(s) s.begin(), s.end()
#define OO INT_MAX
#define ld long double
#define pi 3.141592653589793
#define rall(s) s.rbegin(), s.rend()
#define fixed(n) cout << fixed << setprecision(n)
#define mod_combine(a, b, m) (((a % m) * (b % m)) % m)
#define se second
#define fi first
#define eb emplace_back
#define pb push_back
#define pf push_front
#define nl '\n'
#define PI acos(-1.0)
#define EPS 1e-9

using namespace std;
template <typename T = int>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &x : v)
        in >> x;
    return in;
}

template <typename T = int>
ostream &operator<<(ostream &out, const vector<T> &v)
{
    for (const T &x : v)
        out << x << " ";
    return out;
}

//     _    _____                   _    ____ ____  _____
//    / \  |___  | __ ___   ___  __| |  / ___|  _ \|___  |
//   / _ \    / / '_ ` _ \ / _ \/ _` | | |   | |_) |  / /
//  / ___ \  / /| | | | | |  __/ (_| | | |___|  _ <  / /
// /_/   \_\/_/ |_| |_| |_|\___|\__,_|  \____|_| \_\/_/

vector<int> LPS(string pattern)
{
    int n = sz(pattern);

    vector<int> LPS_arr(n);

    for (int i = 1, j = 0; i < n; ++i)
    {
        while (j > 0 && pattern[i] != pattern[j])
            j = LPS_arr[j - 1];

        if (pattern[i] == pattern[j])
            LPS_arr[i] = ++j;

        else
            LPS_arr[i] = j;
    }

    return LPS_arr;
}

vector<int> KMP(string s, string pattern)
{
    int n = sz(s);
    int m = sz(pattern);

    vector<int> ans;

    vector<int> LPS_arr = LPS(pattern);

    for (int i = 1, j = 0; i < n; ++i)
    {
        while (j > 0 && pattern[j] != s[i])
            j = LPS_arr[j - 1];

        if (pattern[j] == s[i])
            j++;

        if (j == m)
        {
            ans.eb(i - m + 1);
            j = LPS_arr[j - 1];
        }
    }

    return ans;
}

void solve()
{
}

void A7med()
{
    ios_base ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    A7med();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
