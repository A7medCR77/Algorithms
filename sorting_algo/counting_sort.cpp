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
#define dot_prod(a, b) real(conj(a) * (b))
#define cross_prod(a, b) imag(conj(a) * (b))
#define rotateO(p, theta) (p) * polar(1.0, theta)
#define rotateA(p, a, theta) rotateO((p) - (a), theta) + (a)
#define reflectO(p, m) conj((p) / (m)) * (m)
#define reflectA(p, a, m) reflectO((p) - (a), m) + (a)
#define INF 9223372036854775807
#define E 2.71828182846
#define tolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)

using namespace std;

void counting_sort(vector<int> &vec)
{
    int mx = *max_element(all(vec));

    vector<int> count(mx + 1), ans(sz(vec));

    for (auto &i : vec)
        count[i]++;

    for (int i = 1; i < sz(count); ++i)
        count[i] += count[i - 1];

    for (int i = sz(vec) - 1; i >= 0; --i)
        ans[count[vec[i]] - 1] = vec[i];

    vec = ans;
}

void solve()
{
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
