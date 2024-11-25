#include <bits/stdc++.h>
#define ll long long
#define all(s)  s.begin(),s.end()
#define eb emplace_back
#define nl '\n'

using namespace std;

//mo algorithms for find how many number repeated at least 3 time in some ranges
//Time complexity o(n+q)*sqrt(n)


//This part of the code is fixed
int n,q,result=0;
vector<int>vec,ans;
map<ll,ll>mp;

struct mo{
    int l,r,block_idx,q_idx;

    mo(){}

    mo(int _l,int _r,int _q_idx){
        l=_l,r=_r,q_idx=_q_idx,block_idx=int(_l/sqrt(n));
    }

    bool operator <(const mo&rhs) const{
        if(block_idx!=rhs.block_idx)
            return block_idx<rhs.block_idx;
        return r<rhs.r;
    }
};
//__________________________________________________

//We modify this part according to the problem.
vector<mo>v;

void remove(int idx){
    mp[vec[idx]]--;
    if(mp[vec[idx]]==2)
        result--;
}

void add(int idx){
    mp[vec[idx]]++;
    if(mp[vec[idx]]==3)
        result++;
}

void sol(){
    sort(all(v));

    ll start=1,end=0;

    for(int i=0;i<q;++i){
        while (start<v[i].l)remove(start++);
        while (start>v[i].l)add(--start);
        while (end<v[i].r)add(++end);
        while (end>v[i].r)remove(end--);
        ans[v[i].q_idx]=result;
    }
}

//___________________________________________________________

void solve(){
    cin>>n;
    vec.assign(n+1,0);
    
    for(int i=1;i<=n;i++)
        cin>>vec[i];
    
    cin>>q;
    ans.assign(q,0);
    v=vector<mo>(q+1);

    for(int i=0;i<q;i++){
        ll l,r;
        cin>>l>>r;
        v[i+1]=mo(l,r,i);
    }

    sol();

    for(int i=0;i<q;i++)
        cout<<ans[i]<<nl;
}

void A7med(){
    ios_base ::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
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
