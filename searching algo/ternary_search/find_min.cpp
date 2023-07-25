#include <bits/stdc++.h>
using namespace std;

int ternary_search(vector<int> &vec)
{
    int l = 0, r = vec.size() - 1;
    while (r - l > 1)
    {
        int mid1 = l + (r - l) / 3, mid2 = l + (2 * (r - l)) / 3;

        if (vec[mid1] <= vec[mid2])
            r = mid2 - 1;

        else
            l = mid1 + 1;
    }

    return min(vec[l], vec[r]);
}

void solve()
{
    vector<int> vec = {5, 4, 3, 2, 1, 2, 3, 4, 5};
    cout << ternary_search(vec);
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
