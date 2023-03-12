
#include <bits/stdc++.h>
#define ll long long
#define sz(s) s.size()
using namespace std;

template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x;
    return in;
}

template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) {
    for (const T &x : v) out << x << ' ';
    return out;
}


//Time complexity
//Average case o(n^2)
//worst case o(n^2)

//space complexity o(1)

void selection_sort(vector<ll>&vec)
{
    for(int i=0;i<sz(vec);i++)
    {
        int idx=i;
        for(int l=i+1;l<sz(vec);l++)
            if(vec[l]<vec[idx])idx=l;
        
        swap(vec[i],vec[idx]);
    }
}

void solve()
{
    vector<ll>vec={6};
    
    selection_sort(vec);

    cout<<vec;
}


void A7med(){
    ios_base ::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#endif
}

int main(){
    A7med();
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
