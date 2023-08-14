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
#define OO 20000000000
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
#define MAXll 9223372036854775807
#define E 2.71828182846
#define tolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)

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

vector<ll> max_Kadane(ll n, vector<ll> &vec)
{
    vector<ll> ans(3, -OO);
    ll sum = 0, l = 0, r = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += vec[i];
        if (ans[0] < sum)
        {
            ans[0] = sum;
            ans[1] = l;
            ans[2] = r;
        }

        r++;

        if (sum < 0)
        {
            sum = 0;
            l = r;
        }
    }

    return ans;
}

vector<ll> max_2dKadane(ll n, ll m, vector<vector<ll>> &vec)
{
    ll bottom = 0, top = 0, left = 0, right = 0, max_sum = -OO;

    for (int l = 0; l < m; ++l)
    {
        vector<ll> v(n);
        for (int r = l; r < m; ++r)
        {
            for (int i = 0; i < n; ++i)
                v[i] += vec[i][r];

            vector<ll> mx = max_Kadane(n, v);
            if (max_sum < mx[0])
            {
                max_sum = mx[0];
                top = mx[1];
                bottom = mx[2];
                left = l;
                right = r;
            }
        }
    }
    vector<ll> ans = {max_sum, top + 1, bottom + 1, left + 1, right + 1};
    return ans;
}

void solve()
{
}


int main()
{
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
