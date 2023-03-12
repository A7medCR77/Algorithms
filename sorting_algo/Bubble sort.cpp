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

//Time Complexity: O(N2)


//Space Complexity: O(1) 

void Bubble_sort(vector<ll>&vec)
{
    for(int i=0;i<sz(vec)-1;++i)
    {
        bool flag=false;
        for(int l=0;l<sz(vec)-i-1;++l)
        {
            if(vec[l]>vec[l+1])
                swap(vec[l],vec[l+1]),flag=true;
        }
        if(!flag)break;
    }
}

void solve()
{
    vector<ll>vec={1,5,5,3,2,2};
    
    Bubble_sort(vec);

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
