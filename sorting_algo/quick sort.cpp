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

//Time Complexity: o(n*log(n))
//space Complexity: o(1)

ll partition(vector<ll>&vec, ll l, ll r)
{
    ll pivot=vec[l],i=r+1;

    for(int j=r;j>l;j--)
    {
        if(vec[j]>=pivot)
        {
            i--;
            swap(vec[j],vec[i]);
        }
    }

    swap(vec[i-1],vec[l]);

    return i-1;
}

void quick_sort(vector<ll>&vec, ll l, ll r)
{
    if(l<r)
    {
        
        ll p=partition(vec,l,r);

        quick_sort(vec,l,p-1);
        
        quick_sort(vec,p+1,r);
    
    }
}

void solve()
{
    vector<ll>vec={1,3,5,4,3,2,1,5};
    
    quick_sort(vec,0,sz(vec)-1);

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
