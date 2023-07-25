#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ternary_search(vector<ll> &vec, ll l, ll r, ll key)
{
    if (l <= r)
    {
        int mid1 = l + (r - l) / 3, mid2 = r - (r - l) / 3;

        if (vec[mid1] == key)
            return mid1;

        if (vec[mid2] == key)
            return mid2;

        if (key < vec[mid1])
            return ternary_search(vec, l, mid1 - 1, key);

        else if (key > vec[mid2])
            return ternary_search(vec, mid2 + 1, r, key);

        return ternary_search(vec, mid1 + 1, mid2 - 1, key);
    }

    return -1;
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
    // cin>>t;
    // cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}
