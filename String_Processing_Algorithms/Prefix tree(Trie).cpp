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


class Trie
{
public:
    vector<Trie *> child;
    bool is_leaf;
    Trie()
    {
        is_leaf = 0;
        child.assign(26, NULL);
    }

    void insert(string word)
    {
        if (word.empty())
            is_leaf = true;

        else
        {
            int cur_node = word.front() - 'a';
            if (!child[cur_node])
                child[cur_node] = new Trie();

            child[cur_node]->insert(word.substr(1));
        }
    }

    bool search(string word)
    {
        if (word.empty())
            return is_leaf;

        int cur_node = word.front() - 'a';

        if (!child[cur_node])
            return false;

        return child[cur_node]->search(word.substr(1));
    }

    bool startsWith(string prefix)
    {
        if (prefix.empty())
            return true;

        int cur_node = prefix.front() - 'a';

        if (!child[cur_node])
            return false;

        return child[cur_node]->startsWith(prefix.substr(1));
    }
};
