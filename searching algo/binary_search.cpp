#include <bits/stdc++.h>
#define ll long long
#define sz(s) s.size()
using namespace std;


ll Binary_Search(ll l,ll r,ll key,vector<ll>&vec)
{
    while(l<=r)
    {
        ll mid=l+(r-l)/2;

        if(vec[mid]==key)return mid;

        else if(vec[mid]>key)r=mid-1;

        else l=mid+1;
    }

    return -1;
}

void solve()
{
    vector<ll>vec={1,5,7,9};
    cout<<Binary_Search(0,sz(vec)-1,0,vec);
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
