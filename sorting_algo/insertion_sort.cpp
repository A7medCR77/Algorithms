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

void insertion_sort(vector<ll>&vec)
{
    for(int i=1;i<sz(vec);++i)
    {
        ll val=vec[i];
        
        ll idx=i-1;
        
        while(idx>=0&&val<vec[idx])
            vec[idx+1]=vec[idx],idx--;
        
        vec[idx+1]=val;
    }
}

void solve()
{
    vector<ll>vec={1,2,6,2,5,3,5};
    
    insertion_sort(vec);

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
    //cin.ignore();
    while(t--){
        solve();
    }
    return 0;
}
